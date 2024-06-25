#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon, 18 Dec 2023 05:12:14 +0000

@author: Shallyn
"""
import numpy as np
import matplotlib.pyplot as plt
import sys, os
import ctypes
from scipy.integrate import solve_ivp

from .ctypes_struct import *
from .pngwtd import pypngwtd
from pathlib import Path
import json

lib_path = Path(__file__).parent / 'libcore/.libs/libpngw.so'
myLib = ctypes.CDLL(lib_path)

libBasic_path = Path(__file__).parent / 'libbasic/.libs/libpngwbasic.so'
myLibBasic = ctypes.CDLL(libBasic_path)

myLibBasic.CreateREAL8Vector.restype = ctypes.POINTER(pyREAL8Vector)

myLib.CreateBBHCore.restype = ctypes.POINTER(pyBBHCore)
myLib.calculate_QpcWaveform.restype = c_complex
myLib.calculate_k.restype = ctypes.c_double
myLib.SetBBHDynVariables.restype = None
myLib.calculate_k_from_core.restype = ctypes.c_double
myLib.SetBBHCoreDynVariables.restype = None
myLib.calculate_QpcWaveformVec.restype = ctypes.c_int
# myLib.tmpUtils.restype = ctypes.c_double
# def test_func(val:float):
#     return myLib.tmpUtils(ctypes.c_double(val))

def check_memory_leak():
    os.environ['DEBUG'] = '81'
    myLibBasic.CheckMemoryLeaks()
    return
def convert_REAL8Vector_to_numpy(vec:ctypes.POINTER(pyREAL8Vector)):
    length = vec.contents.length
    ret = np.zeros(length)
    npdata = ret.ctypes.data
    ctypes.memmove(npdata, vec.contents.data, length*ctypes.sizeof(ctypes.c_double))
    return ret

def convert_ndarray_to_REAL8Vector(vec:np.ndarray):
    if len(vec.shape) > 1:
        raise Exception('the shape of vec should be 1-d')
    length = int(len(vec))
    npvec = np.zeros(length)
    npvec[:] = vec[:]
    ret = myLibBasic.CreateREAL8Vector(ctypes.c_uint(length))
    ctypes.memmove(ret.contents.data, npvec.ctypes.data_as(ctypes.POINTER(ctypes.c_double)), length * ctypes.sizeof(ctypes.c_double))
    # print(ret.contents.data)
    # print(vec.ctypes.data_as(ctypes.POINTER(ctypes.c_double)))
    # ctypes.memmove(ret.contents.data, vec.ctypes.data, vec.nbytes)
    return ret

class pybbh(pypngwtd):
    def __init__(self, **kwargs):
        super(pybbh, self).__init__(**kwargs)
        self.__ccore = myLib.CreateBBHCore(ctypes.c_double(self.eta),
            ctypes.c_double(self.chi1), ctypes.c_double(self.chi2),
            ctypes.c_double(self.kappa1), ctypes.c_double(self.kappa2),
            ctypes.c_double(self.Theta), ctypes.c_double(self.Phi))
    def calculate_k_ccore(self, et:float, vom:float)->float:
        myLib.SetBBHCoreDynVariables(ctypes.c_double(et), ctypes.c_double(vom), self.__ccore)
        ret = myLib.calculate_k_from_core(self.__ccore)
        return float(ret)
    def __del__(self):
        myLib.DestroyBBHCore(self.__ccore)
        myLibBasic.CheckMemoryLeaks()
    def get_td_waveform_single(self, l:float, e:float, v:float):
        myLib.SetBBHCoreDynVariables(ctypes.c_double(e), ctypes.c_double(v), self.__ccore)
        ret = myLib.calculate_QpcWaveform(ctypes.c_double(l), self.__ccore)
        return ret.real, ret.imag
    def get_td_waveform_ccore(self, max_delta_t = np.inf):
        #os.environ['DEBUG'] = '81'
        t, y = self.evolve(max_step=max_delta_t)
        tVec = convert_ndarray_to_REAL8Vector(t)
        lVec = convert_ndarray_to_REAL8Vector(y[:,0])
        vomVec = convert_ndarray_to_REAL8Vector(y[:,1])
        etVec = convert_ndarray_to_REAL8Vector(self.etByvx(self.vxByvom(y[:,1])))
        QplusVec = ctypes.POINTER(pyREAL8Vector)()
        QcrossVec = ctypes.POINTER(pyREAL8Vector)()
        ret_cev = myLib.calculate_QpcWaveformVec(lVec, etVec, vomVec, self.__ccore,
            ctypes.byref(QplusVec), ctypes.byref(QcrossVec))
        ret_Qplus = convert_REAL8Vector_to_numpy(QplusVec)
        ret_Qcross = convert_REAL8Vector_to_numpy(QcrossVec)
        # myLibBasic.DestroyREAL8Vector(QplusVec)
        # myLibBasic.DestroyREAL8Vector(QcrossVec)
        myLibBasic.DestroyREAL8Vector(tVec)
        myLibBasic.DestroyREAL8Vector(lVec)
        myLibBasic.DestroyREAL8Vector(vomVec)
        myLibBasic.DestroyREAL8Vector(etVec)
        myLibBasic.CheckMemoryLeaks()
        return t, ret_Qplus, ret_Qcross
