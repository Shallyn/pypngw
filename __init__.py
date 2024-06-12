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

from .ctypes_struct import *
from pathlib import Path
import json

# lib_path = Path(__file__).parent / 'libcore/.libs/libSGWB.so'
# myLib = ctypes.CDLL(lib_path)

libBasic_path = Path(__file__).parent / 'libbasic/.libs/libpngwbasic.so' 
myLibBasic = ctypes.CDLL(libBasic_path)

myLibBasic.CreateREAL8Vector.restype = ctypes.POINTER(pyREAL8Vector)

# myLib.tmpUtils.restype = ctypes.c_double
# def test_func(val:float):
#     return myLib.tmpUtils(ctypes.c_double(val))

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

