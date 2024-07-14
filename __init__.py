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
from .pngwtd import pypngwtd, DetectorDict
from pathlib import Path
import json

lib_path = Path(__file__).parent / 'libcore/.libs/libpngw.so'
myLib = ctypes.CDLL(lib_path)

libBasic_path = Path(__file__).parent / 'libbasic/.libs/libpngwbasic.so'
myLibBasic = ctypes.CDLL(libBasic_path)

myLibBasic.CreateREAL8Vector.restype = ctypes.POINTER(pyREAL8Vector)

myLib.CreateBBHCore.restype = ctypes.POINTER(pyBBHCore)
myLib.calculate_QpcWaveform.restype = c_complex
myLib.calculate_QpcWaveform_emode.restype = c_complex
myLib.calculate_k.restype = ctypes.c_double
myLib.SetBBHDynVariables.restype = None
myLib.calculate_k_from_core.restype = ctypes.c_double
myLib.SetBBHCoreDynVariables.restype = None
myLib.calculate_QpcWaveformVec.restype = ctypes.c_int
myLib.calculate_QpcWaveformVec_emode.restype = ctypes.c_int
myLib.calculate_QpcWaveformVec_eexp.restype = ctypes.c_int
myLib.Calculate_l.restype = ctypes.c_double
myLib.Calculate_t.restype = ctypes.c_double
myLib.Calculate_vom.restype = ctypes.c_double
myLib.calculate_QpcWaveform_QhMinus.restype = c_complex

myLib.calc_QSPA_emode.restype = ctypes.c_int
myLib.calc_QSPA_Allemode.restype = ctypes.c_int
myLib.calc_QstrainSPA_Allemode.restype = ctypes.c_int

myLib.CreateAntennaPatternF.restype = ctypes.POINTER(pyAntennaPatternF)
myLib.DestroyAntennaPatternF.restype = None
myLib.calculate_QWaveformVec.restype = ctypes.c_int
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

#psi, ra, dec, latitude, longtitude, gamma, zeta = np.pi/2
class AntennaPatternF(object):
    def __init__(self, detname:str, **kwargs):
        c_SI = 299792458 # Speed Of Light [m s^-1]

        self.__psi = kwargs.get('psi', 0)
        self.__alpha = kwargs.get('ra', 0)
        self.__delta = kwargs.get('dec', 0)

        self.__lbd = DetectorDict[detname].lbd
        self.__varphi = DetectorDict[detname].varphi
        self.__gamma = DetectorDict[detname].gamma
        self.__zeta = DetectorDict[detname].zeta
        self.__ccore = myLib.CreateAntennaPatternF(
            ctypes.c_double(self.__psi),
            ctypes.c_double(self.__alpha),
            ctypes.c_double(self.__delta),
            ctypes.c_double(self.__lbd),
            ctypes.c_double(self.__varphi),
            ctypes.c_double(self.__gamma),
            ctypes.c_double(self.__zeta))
        # self.__lbd = kwargs.get('latitude', DEFAULT_latitude)
        # self.__varphi = kwargs.get('longtitude', DEFAULT_longtitude)
        # self.__gamma = kwargs.get('gamma', DEFAULT_gamma)
        # self.__zeta = kwargs.get('zeta', DEFAULT_zeta)

        self.__alphi = self.__alpha - self.__varphi
        self.__sin_zeta = np.sin(self.__zeta)
        self.__sin_2psi = np.sin(2.*self.__psi)
        self.__cos_2psi = np.cos(2.*self.__psi)
        self.__sin_2alphi = np.sin(2.*self.__alphi)
        self.__cos_2alphi = np.cos(2.*self.__alphi)
        self.__sin_alphi = np.sin(self.__alphi)
        self.__cos_alphi = np.cos(self.__alphi)
        self.__sin_2gamma = np.sin(2.*self.__gamma)
        self.__cos_2gamma = np.cos(2.*self.__gamma)
        self.__sin_2delta = np.sin(2.*self.__delta)
        self.__cos_2delta = np.cos(2.*self.__delta)
        self.__sin_delta = np.sin(self.__delta)
        self.__cos_delta = np.cos(self.__delta)
        self.__sin_2lambda = np.sin(2.*self.__lbd)
        self.__cos_2lambda = np.cos(2.*self.__lbd)
        self.__sin_lambda = np.sin(self.__lbd)
        self.__cos_lambda = np.cos(self.__lbd)
        self.__3MinusCos2Lambda = 3.-self.__cos_2lambda
        self.__3MinusCos2Delta = 3.-self.__cos_2delta
        
        self.__Gplus = (1./16.)*self.__sin_2gamma*self.__3MinusCos2Lambda*self.__3MinusCos2Delta*self.__cos_2alphi \
            -0.25*self.__cos_2gamma*self.__sin_lambda*self.__3MinusCos2Delta*self.__sin_2alphi \
            +0.25*self.__sin_2gamma*self.__sin_2lambda*self.__sin_2delta*self.__cos_alphi \
            -0.5*self.__cos_2gamma*self.__cos_lambda*self.__sin_2delta*self.__sin_alphi \
            +0.75*self.__sin_2gamma*self.__cos_lambda*self.__cos_lambda*self.__cos_delta*self.__cos_delta
        self.__Gcross = self.__cos_2gamma*self.__sin_lambda*self.__sin_delta*self.__cos_2alphi \
            +0.25*self.__sin_2gamma*self.__3MinusCos2Lambda*self.__sin_delta*self.__sin_2alphi \
            +self.__cos_2gamma*self.__cos_lambda*self.__cos_delta*self.__cos_alphi \
            +0.5*self.__sin_2gamma*self.__sin_2lambda*self.__cos_delta*self.__sin_alphi

        self.__Gplus_deriv_alpha = -0.25*self.__sin_2gamma*self.__sin_2delta*self.__sin_2lambda*self.__sin_alphi \
            -0.5*self.__cos_2gamma*self.__sin_2delta*self.__cos_lambda*self.__cos_alphi \
            -0.5*self.__cos_2gamma*self.__3MinusCos2Delta*self.__sin_lambda*self.__cos_2alphi \
            -0.125*self.__sin_2gamma*self.__3MinusCos2Delta*self.__3MinusCos2Lambda*self.__sin_2alphi
        
        self.__Gplus_deriv_delta = -self.__cos_2gamma*self.__cos_2delta*self.__cos_lambda*self.__sin_alphi \
            +0.125*self.__sin_2gamma*self.__sin_2delta*self.__3MinusCos2Lambda*self.__cos_2alphi \
            +0.5*self.__sin_2gamma*self.__cos_2delta*self.__sin_2lambda*self.__cos_alphi \
            -0.5*self.__cos_2gamma*self.__sin_2delta*self.__sin_lambda*self.__sin_2alphi \
            -1.5*self.__sin_2gamma*self.__sin_delta*self.__cos_delta*self.__cos_lambda*self.__cos_lambda
        
        self.__Gcross_deriv_alpha = 0.5*self.__sin_2gamma*self.__sin_delta*self.__3MinusCos2Lambda*self.__cos_2alphi \
            -2.*self.__cos_2gamma*self.__sin_delta*self.__sin_lambda*self.__sin_2alphi \
            +0.5*self.__sin_2gamma*self.__cos_delta*self.__sin_2lambda*self.__cos_alphi \
            -self.__cos_2gamma*self.__cos_delta*self.__cos_lambda*self.__sin_alphi
        
        self.__Gcross_deriv_delta = -0.5*self.__sin_2gamma*self.__sin_delta*self.__sin_2lambda*self.__sin_alphi \
            -self.__cos_2gamma*self.__sin_delta*self.__cos_lambda*self.__cos_alphi \
            +self.__cos_2gamma*self.__cos_delta*self.__sin_lambda*self.__cos_2alphi \
            +0.25*self.__sin_2gamma*self.__cos_delta*self.__3MinusCos2Lambda*self.__sin_2alphi
        dt_earth = 6371e3/c_SI
        self.__delta_t = dt_earth * (self.__cos_lambda*self.__sin_delta + self.__cos_delta*self.__sin_lambda*self.__cos_alphi)
        self.__delta_t_deriv_alpha = -dt_earth * self.__cos_delta*self.__sin_lambda*self.__sin_alphi
        self.__delta_t_deriv_delta = dt_earth * (self.__cos_delta*self.__cos_lambda - self.__cos_alphi*self.__sin_delta*self.__sin_lambda)
        self.__OmegaEarth = 2.*np.pi/(24.*60.*60.)

    @property
    def ccore(self):
        return self.__ccore
    @property
    def Gplus(self):
        return self.__Gplus
    def Gplus_t(self, t_SI):
        alphi_t = self.__alphi - self.__OmegaEarth * t_SI
        cos_2alphi_t = np.cos(2.*alphi_t)
        sin_2alphi_t = np.sin(2.*alphi_t)
        cos_alphi_t = np.cos(alphi_t)
        sin_alphi_t = np.sin(alphi_t)
        return (1./16.)*self.__sin_2gamma*self.__3MinusCos2Lambda*self.__3MinusCos2Delta*cos_2alphi_t \
            -0.25*self.__cos_2gamma*self.__sin_lambda*self.__3MinusCos2Delta*sin_2alphi_t \
            +0.25*self.__sin_2gamma*self.__sin_2lambda*self.__sin_2delta*cos_alphi_t \
            -0.5*self.__cos_2gamma*self.__cos_lambda*self.__sin_2delta*sin_alphi_t \
            +0.75*self.__sin_2gamma*self.__cos_lambda*self.__cos_lambda*self.__cos_delta*self.__cos_delta

    @property
    def Gcross(self):
        return self.__Gcross
    def Gcross_t(self, t_SI):
        alphi_t = self.__alphi - self.__OmegaEarth * t_SI
        cos_2alphi_t = np.cos(2.*alphi_t)
        sin_2alphi_t = np.sin(2.*alphi_t)
        cos_alphi_t = np.cos(alphi_t)
        sin_alphi_t = np.sin(alphi_t)
        return self.__cos_2gamma*self.__sin_lambda*self.__sin_delta*cos_2alphi_t \
                    +0.25*self.__sin_2gamma*self.__3MinusCos2Lambda*self.__sin_delta*sin_2alphi_t \
                    +self.__cos_2gamma*self.__cos_lambda*self.__cos_delta*cos_alphi_t \
                    +0.5*self.__sin_2gamma*self.__sin_2lambda*self.__cos_delta*sin_alphi_t

    @property
    def Gplus_deriv_alpha(self):
        return self.__Gplus_deriv_alpha
    def Gplus_deriv_alpha_t(self, t_SI):
        alphi_t = self.__alphi - self.__OmegaEarth * t_SI
        cos_2alphi_t = np.cos(2.*alphi_t)
        sin_2alphi_t = np.sin(2.*alphi_t)
        cos_alphi_t = np.cos(alphi_t)
        sin_alphi_t = np.sin(alphi_t)
        return -0.25*self.__sin_2gamma*self.__sin_2delta*self.__sin_2lambda*sin_alphi_t \
            -0.5*self.__cos_2gamma*self.__sin_2delta*self.__cos_lambda*cos_alphi_t \
            -0.5*self.__cos_2gamma*self.__3MinusCos2Delta*self.__sin_lambda*cos_2alphi_t \
            -0.125*self.__sin_2gamma*self.__3MinusCos2Delta*self.__3MinusCos2Lambda*sin_2alphi_t

    @property
    def Gplus_deriv_delta(self):
        return self.__Gplus_deriv_delta
    def Gplus_deriv_delta_t(self, t_SI):
        alphi_t = self.__alphi - self.__OmegaEarth * t_SI
        cos_2alphi_t = np.cos(2.*alphi_t)
        sin_2alphi_t = np.sin(2.*alphi_t)
        cos_alphi_t = np.cos(alphi_t)
        sin_alphi_t = np.sin(alphi_t)
        return -self.__cos_2gamma*self.__cos_2delta*self.__cos_lambda*sin_alphi_t \
            +0.125*self.__sin_2gamma*self.__sin_2delta*self.__3MinusCos2Lambda*cos_2alphi_t \
            +0.5*self.__sin_2gamma*self.__cos_2delta*self.__sin_2lambda*cos_alphi_t \
            -0.5*self.__cos_2gamma*self.__sin_2delta*self.__sin_lambda*sin_2alphi_t \
            -1.5*self.__sin_2gamma*self.__sin_delta*self.__cos_delta*self.__cos_lambda*self.__cos_lambda

    @property
    def Gcross_deriv_alpha(self):
        return self.__Gcross_deriv_alpha
    def Gcross_deriv_alpha_t(self, t_SI):
        alphi_t = self.__alphi - self.__OmegaEarth * t_SI
        cos_2alphi_t = np.cos(2.*alphi_t)
        sin_2alphi_t = np.sin(2.*alphi_t)
        cos_alphi_t = np.cos(alphi_t)
        sin_alphi_t = np.sin(alphi_t)
        return 0.5*self.__sin_2gamma*self.__sin_delta*self.__3MinusCos2Lambda*cos_2alphi_t \
                    -2.*self.__cos_2gamma*self.__sin_delta*self.__sin_lambda*sin_2alphi_t \
                    +0.5*self.__sin_2gamma*self.__cos_delta*self.__sin_2lambda*cos_alphi_t \
                    -self.__cos_2gamma*self.__cos_delta*self.__cos_lambda*sin_alphi_t
    
    @property
    def Gcross_deriv_delta(self):
        return self.__Gcross_deriv_delta
    def Gcross_deriv_delta_t(self, t_SI):
        alphi_t = self.__alphi - self.__OmegaEarth * t_SI
        cos_2alphi_t = np.cos(2.*alphi_t)
        sin_2alphi_t = np.sin(2.*alphi_t)
        cos_alphi_t = np.cos(alphi_t)
        sin_alphi_t = np.sin(alphi_t)
        return -0.5*self.__sin_2gamma*self.__sin_delta*self.__sin_2lambda*sin_alphi_t \
            -self.__cos_2gamma*self.__sin_delta*self.__cos_lambda*cos_alphi_t \
            +self.__cos_2gamma*self.__cos_delta*self.__sin_lambda*cos_2alphi_t \
            +0.25*self.__sin_2gamma*self.__cos_delta*self.__3MinusCos2Lambda*sin_2alphi_t
    
    @property
    def Fplus(self):
        return self.__sin_zeta*self.Gplus
    def Fplus_t(self, t_SI):
        return self.__sin_zeta*self.Gplus_t(t_SI)
    
    @property
    def Fcross(self):
        return self.__sin_zeta*self.Gcross
    def Fcross_t(self, t_SI):
        return self.__sin_zeta*self.Gcross_t(t_SI)
    
    @property
    def Fplus_deriv_alpha(self):
        return self.__sin_zeta*self.Gplus_deriv_alpha
    def Fplus_deriv_alpha_t(self, t_SI):
        return self.__sin_zeta*self.Gplus_deriv_alpha_t(t_SI)

    @property
    def Fplus_deriv_delta(self):
        return self.__sin_zeta*self.Gplus_deriv_delta
    def Fplus_deriv_delta_t(self, t_SI):
        return self.__sin_zeta*self.Gplus_deriv_delta_t(t_SI)
    
    @property
    def Fcross_deriv_alpha(self):
        return self.__sin_zeta*self.Gcross_deriv_alpha
    def Fcross_deriv_alpha_t(self, t_SI):
        return self.__sin_zeta*self.Gcross_deriv_alpha_t(t_SI)
    
    @property
    def Fcross_deriv_delta(self):
        return self.__sin_zeta*self.Gcross_deriv_delta
    def Fcross_deriv_delta_t(self, t_SI):
        return self.__sin_zeta*self.Gcross_deriv_delta_t(t_SI)
    
    @property
    def barFplus(self):
        return self.Fplus*self.__cos_2psi + self.Fcross*self.__sin_2psi
    def barFplus_t(self, t_SI):
        return self.Fplus_t(t_SI)*self.__cos_2psi + self.Fcross_t(t_SI)*self.__sin_2psi
    
    @property
    def barFcross(self):
        return self.Fcross*self.__cos_2psi - self.Fplus*self.__sin_2psi
    def barFcross_t(self, t_SI):
        return self.Fcross_t(t_SI)*self.__cos_2psi - self.Fplus_t(t_SI)*self.__sin_2psi
    
    @property
    def barFplus_deriv_psi(self):
        return -2.*(self.Fplus*self.__sin_2psi - self.Fcross*self.__cos_2psi)
    def barFplus_deriv_psi_t(self, t_SI):
        return -2.*(self.Fplus_t(t_SI)*self.__sin_2psi - self.Fcross_t(t_SI)*self.__cos_2psi)

    @property
    def barFplus_deriv_alpha(self):
        return self.Fplus_deriv_alpha*self.__cos_2psi + self.Fcross_deriv_alpha*self.__sin_2psi
    def barFplus_deriv_alpha_t(self, t_SI):
        return self.Fplus_deriv_alpha_t(t_SI)*self.__cos_2psi + self.Fcross_deriv_alpha_t(t_SI)*self.__sin_2psi

    @property
    def barFplus_deriv_delta(self):
        return self.Fplus_deriv_delta*self.__cos_2psi + self.Fcross_deriv_delta*self.__sin_2psi
    def barFplus_deriv_delta_t(self, t_SI):
        return self.Fplus_deriv_delta_t(t_SI)*self.__cos_2psi + self.Fcross_deriv_delta_t(t_SI)*self.__sin_2psi
    
    @property
    def barFcross_deriv_psi(self):
        return -2.*(self.Fplus*self.__cos_2psi + self.Fcross*self.__sin_2psi)
    def barFcross_deriv_psi_t(self, t_SI):
        return -2.*(self.Fplus_t(t_SI)*self.__cos_2psi + self.Fcross_t(t_SI)*self.__sin_2psi)

    @property
    def barFcross_deriv_alpha(self):
        return self.Fcross_deriv_alpha*self.__cos_2psi - self.Fplus_deriv_alpha*self.__sin_2psi
    def barFcross_deriv_alpha_t(self, t_SI):
        return self.Fcross_deriv_alpha_t(t_SI)*self.__cos_2psi - self.Fplus_deriv_alpha_t(t_SI)*self.__sin_2psi

    @property
    def barFcross_deriv_delta(self):
        return self.Fcross_deriv_delta*self.__cos_2psi - self.Fplus_deriv_delta*self.__sin_2psi
    def barFcross_deriv_delta_t(self, t_SI):
        return self.Fcross_deriv_delta_t(t_SI)*self.__cos_2psi - self.Fplus_deriv_delta_t(t_SI)*self.__sin_2psi

    def __del__(self):
        myLib.DestroyAntennaPatternF(self.__ccore)
        myLibBasic.CheckMemoryLeaks()


class pybbh(pypngwtd):
    def __init__(self, **kwargs):
        super(pybbh, self).__init__(**kwargs)
        self.__ccore = myLib.CreateBBHCore(ctypes.c_double(self.eta),
            ctypes.c_double(self.chi1), ctypes.c_double(self.chi2),
            ctypes.c_double(self.kappa1), ctypes.c_double(self.kappa2),
            ctypes.c_double(self.Theta), ctypes.c_double(self.Phi),
            ctypes.c_double(self.e0), ctypes.c_double(self.vom0))
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

    def get_td_waveform_PC(self, vVec):
        l_PC, t_PC = self.calc_ltPCByvomVec(vVec)
        # l_PC = l_PC - l_PC[0]
        # t_PC = t_PC - t_PC[0]
        tVec = convert_ndarray_to_REAL8Vector(t_PC)
        lVec = convert_ndarray_to_REAL8Vector(l_PC)
        vomVec = convert_ndarray_to_REAL8Vector(vVec)
        QplusVec = ctypes.POINTER(pyREAL8Vector)()
        QcrossVec = ctypes.POINTER(pyREAL8Vector)()
        etVec = convert_ndarray_to_REAL8Vector(self.etByvx(self.vxByvom(vVec)))
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
        return t_PC, self.hPref * ret_Qplus, self.hPref * ret_Qcross

    def get_td_waveform_strain_PC(self, vVec, apf:AntennaPatternF):
        l_PC, t_PC = self.calc_ltPCByvomVec(vVec)
        # l_PC = l_PC - l_PC[0]
        # t_PC = t_PC - t_PC[0]
        tSIVec = convert_ndarray_to_REAL8Vector(t_PC*self.MT)
        lVec = convert_ndarray_to_REAL8Vector(l_PC)
        vomVec = convert_ndarray_to_REAL8Vector(vVec)
        QVec = ctypes.POINTER(pyREAL8Vector)()
        etVec = convert_ndarray_to_REAL8Vector(self.etByvx(self.vxByvom(vVec)))
        ret_cev = myLib.calculate_QWaveformVec(tSIVec, lVec, etVec, vomVec, 
            self.__ccore, apf.ccore,
            ctypes.byref(QVec))
        ret_QVec = convert_REAL8Vector_to_numpy(QVec)
        # myLibBasic.DestroyREAL8Vector(QplusVec)
        # myLibBasic.DestroyREAL8Vector(QcrossVec)
        myLibBasic.DestroyREAL8Vector(tSIVec)
        myLibBasic.DestroyREAL8Vector(lVec)
        myLibBasic.DestroyREAL8Vector(vomVec)
        myLibBasic.DestroyREAL8Vector(etVec)
        myLibBasic.CheckMemoryLeaks()
        return t_PC, self.hPref * ret_QVec

    def get_td_waveform_emode_PC(self, n:int, m:int, vVec):
        l_PC, t_PC = self.calc_ltPCByvomVec(vVec)
        # l_PC = l_PC - l_PC[0]
        # t_PC = t_PC - t_PC[0]
        tVec = convert_ndarray_to_REAL8Vector(t_PC)
        lVec = convert_ndarray_to_REAL8Vector(l_PC)
        vomVec = convert_ndarray_to_REAL8Vector(vVec)
        QplusVec = ctypes.POINTER(pyREAL8Vector)()
        QcrossVec = ctypes.POINTER(pyREAL8Vector)()
        etVec = convert_ndarray_to_REAL8Vector(self.etByvx(self.vxByvom(vVec)))
        ret_cev = myLib.calculate_QpcWaveformVec_emode(ctypes.c_int(n), ctypes.c_int(m),
            lVec, etVec, vomVec, self.__ccore,
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
        return t_PC, self.hPref * ret_Qplus, self.hPref * ret_Qcross

    # Integrate part
    def get_td_waveform_emode_PN(self, n:int, m:int, max_delta_t = np.inf):
        v, l, t = self.evolve_ltbyv(max_step=max_delta_t)
        tVec = convert_ndarray_to_REAL8Vector(t)
        lVec = convert_ndarray_to_REAL8Vector(l)
        vomVec = convert_ndarray_to_REAL8Vector(v)
        etVec = convert_ndarray_to_REAL8Vector(self.etByvx(self.vxByvom(v)))
        QplusVec = ctypes.POINTER(pyREAL8Vector)()
        QcrossVec = ctypes.POINTER(pyREAL8Vector)()
        ret_cev = myLib.calculate_QpcWaveformVec_emode(ctypes.c_int(n), ctypes.c_int(m),
            lVec, etVec, vomVec, self.__ccore,
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
        return t, self.hPref * ret_Qplus, self.hPref * ret_Qcross

    def get_td_waveform_eexp_PN(self, n:int, m:int, max_delta_t = np.inf):
        # os.environ['DEBUG'] = '81'
        v, l, t = self.evolve_ltbyv(max_step=max_delta_t)
        tVec = convert_ndarray_to_REAL8Vector(t)
        lVec = convert_ndarray_to_REAL8Vector(l)
        vomVec = convert_ndarray_to_REAL8Vector(v)
        etVec = convert_ndarray_to_REAL8Vector(self.etByvx(self.vxByvom(v)))
        QplusVec = ctypes.POINTER(pyREAL8Vector)()
        QcrossVec = ctypes.POINTER(pyREAL8Vector)()
        ret_cev = myLib.calculate_QpcWaveformVec_eexp(ctypes.c_int(n), ctypes.c_int(m),
            lVec, etVec, vomVec, self.__ccore,
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
        return t, self.hPref * ret_Qplus, self.hPref * ret_Qcross

    def get_td_waveform_PN(self, max_delta_t = np.inf):
        #os.environ['DEBUG'] = '81'
        v, l, t = self.evolve_ltbyv(max_step=max_delta_t)
        tVec = convert_ndarray_to_REAL8Vector(t)
        lVec = convert_ndarray_to_REAL8Vector(l)
        vomVec = convert_ndarray_to_REAL8Vector(v)
        etVec = convert_ndarray_to_REAL8Vector(self.etByvx(self.vxByvom(v)))
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
        return t, self.hPref * ret_Qplus, self.hPref * ret_Qcross



    def get_td_waveform_emode(self, n:int, m:int, max_delta_t = np.inf):
        t, y = self.evolve(max_step=max_delta_t)
        tVec = convert_ndarray_to_REAL8Vector(t)
        lVec = convert_ndarray_to_REAL8Vector(y[:,0])
        vomVec = convert_ndarray_to_REAL8Vector(y[:,1])
        etVec = convert_ndarray_to_REAL8Vector(self.etByvx(self.vxByvom(y[:,1])))
        QplusVec = ctypes.POINTER(pyREAL8Vector)()
        QcrossVec = ctypes.POINTER(pyREAL8Vector)()
        ret_cev = myLib.calculate_QpcWaveformVec_emode(ctypes.c_int(n), ctypes.c_int(m),
            lVec, etVec, vomVec, self.__ccore,
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
        return t, self.hPref * ret_Qplus, self.hPref * ret_Qcross

    def get_td_waveform_eexp(self, n:int, m:int, max_delta_t = np.inf):
        # os.environ['DEBUG'] = '81'
        t, y = self.evolve(max_step=max_delta_t)
        print('integrate end')
        tVec = convert_ndarray_to_REAL8Vector(t)
        lVec = convert_ndarray_to_REAL8Vector(y[:,0])
        vomVec = convert_ndarray_to_REAL8Vector(y[:,1])
        etVec = convert_ndarray_to_REAL8Vector(self.etByvx(self.vxByvom(y[:,1])))
        QplusVec = ctypes.POINTER(pyREAL8Vector)()
        QcrossVec = ctypes.POINTER(pyREAL8Vector)()
        ret_cev = myLib.calculate_QpcWaveformVec_eexp(ctypes.c_int(n), ctypes.c_int(m),
            lVec, etVec, vomVec, self.__ccore,
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
        return t, self.hPref * ret_Qplus, self.hPref * ret_Qcross

    def get_td_waveform(self, max_delta_t = np.inf):
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
        return t, self.hPref * ret_Qplus, self.hPref * ret_Qcross

    def test_lPNPC(self, et:float, vom:float):
        myLib.SetBBHCoreDynVariables(ctypes.c_double(et), ctypes.c_double(vom), self.__ccore)
        return myLib.Calculate_l(self.__ccore)

    def calc_ltPCByvomVec(self, vVec:np.ndarray):
        ret_l = np.zeros(len(vVec))
        ret_t = np.zeros(len(vVec))
        for i in range(len(vVec)):
            chix = self.chixByvom(vVec[i])
            et = self.etBychix(chix)
            myLib.SetBBHCoreDynVariables(ctypes.c_double(et), ctypes.c_double(vVec[i]), self.__ccore)
            ret_l[i] = float(myLib.Calculate_l(self.__ccore))
            ret_t[i] = float(myLib.Calculate_t(self.__ccore))
        return ret_l, ret_t

    def calc_vomByfreqVec(self, n:int, m:int, Mfreqs:np.ndarray):
        ret = np.zeros(len(Mfreqs))
        for i in range(len(Mfreqs)):
            ret[i] = float(myLib.Calculate_vom(ctypes.c_int(n), ctypes.c_int(m), ctypes.c_double(Mfreqs[i]), self.__ccore))
        return ret

    def calc_vfmByfreqs(self, m:int, freqs):
        return np.power(2.*np.pi*freqs*self.MT / m, 1./3.)

    def lt_PN(self, max_delta_t = np.inf):
        t, y = self.evolve(max_step=max_delta_t)
        l_int : np.ndarray = y[:,0]
        vom_int : np.ndarray = y[:,1]
        et_int : np.ndarray = self.etByvx(self.vxByvom(y[:,1]))
        ret : np.ndarray = np.zeros(len(t))
        ret_t : np.ndarray = np.zeros(len(t))
        for i in range(len(t)):
            myLib.SetBBHCoreDynVariables(ctypes.c_double(et_int[i]), ctypes.c_double(vom_int[i]), self.__ccore)
            ret[i] = float(myLib.Calculate_l(self.__ccore))
            ret_t[i] = float(myLib.Calculate_t(self.__ccore))
        ret = ret - ret[0] + l_int[0]
        ret_t = ret_t - ret_t[0] + t[0]
        return t, l_int, vom_int, ret, ret_t

    def htilde_SPA_emode(self, n:int, m:int, freqs:np.ndarray):
        freqsVec = convert_ndarray_to_REAL8Vector(freqs * self.MT)
        ReAmpQpVec = ctypes.POINTER(pyREAL8Vector)()
        ImAmpQpVec = ctypes.POINTER(pyREAL8Vector)()
        ReAmpQcVec = ctypes.POINTER(pyREAL8Vector)()
        ImAmpQcVec = ctypes.POINTER(pyREAL8Vector)()
        PhaseVec = ctypes.POINTER(pyREAL8Vector)()
        ret_cev = myLib.calc_QSPA_emode(ctypes.c_int(n), ctypes.c_int(m),
            freqsVec, self.__ccore,
            ctypes.byref(ReAmpQpVec), ctypes.byref(ImAmpQpVec), 
            ctypes.byref(ReAmpQcVec), ctypes.byref(ImAmpQcVec), 
            ctypes.byref(PhaseVec))
        ret_ReAmpQp = convert_REAL8Vector_to_numpy(ReAmpQpVec)
        ret_ImAmpQp = convert_REAL8Vector_to_numpy(ImAmpQpVec)
        ret_ReAmpQc = convert_REAL8Vector_to_numpy(ReAmpQcVec)
        ret_ImAmpQc = convert_REAL8Vector_to_numpy(ImAmpQcVec)
        ret_Phase = convert_REAL8Vector_to_numpy(PhaseVec)
        # myLibBasic.DestroyREAL8Vector(QplusVec)
        # myLibBasic.DestroyREAL8Vector(QcrossVec)
        myLibBasic.DestroyREAL8Vector(freqsVec)
        myLibBasic.CheckMemoryLeaks()
        ht_p = self.MT*self.hPref*(ret_ReAmpQp + 1.j*ret_ImAmpQp) * np.exp(1.j*ret_Phase)
        ht_c = self.MT*self.hPref*(ret_ReAmpQc + 1.j*ret_ImAmpQc) * np.exp(1.j*ret_Phase)
        return ht_p, ht_c
    
    def htilde_SPA(self, freqs:np.ndarray):
        freqsVec = convert_ndarray_to_REAL8Vector(freqs * self.MT)
        ReQpVec = ctypes.POINTER(pyREAL8Vector)()
        ImQpVec = ctypes.POINTER(pyREAL8Vector)()
        ReQcVec = ctypes.POINTER(pyREAL8Vector)()
        ImQcVec = ctypes.POINTER(pyREAL8Vector)()
        ret_cev = myLib.calc_QSPA_Allemode(freqsVec, self.__ccore,
            ctypes.byref(ReQpVec), ctypes.byref(ImQpVec), 
            ctypes.byref(ReQcVec), ctypes.byref(ImQcVec))
        ret_ReQp = convert_REAL8Vector_to_numpy(ReQpVec)
        ret_ImQp = convert_REAL8Vector_to_numpy(ImQpVec)
        ret_ReQc = convert_REAL8Vector_to_numpy(ReQcVec)
        ret_ImQc = convert_REAL8Vector_to_numpy(ImQcVec)
        myLibBasic.DestroyREAL8Vector(freqsVec)
        myLibBasic.CheckMemoryLeaks()
        ht_p = self.MT*self.hPref*(ret_ReQp + 1.j*ret_ImQp)
        ht_c = self.MT*self.hPref*(ret_ReQc + 1.j*ret_ImQc)
        return ht_p, ht_c

    def htilde_strain_SPA(self, freqs:np.ndarray, apf:AntennaPatternF):
        freqsVec = convert_ndarray_to_REAL8Vector(freqs * self.MT)
        ReQVec = ctypes.POINTER(pyREAL8Vector)()
        ImQVec = ctypes.POINTER(pyREAL8Vector)()
        ret_cev = myLib.calc_QstrainSPA_Allemode(ctypes.c_double(self.MT), 
            freqsVec, self.__ccore, apf.ccore,
            ctypes.byref(ReQVec), ctypes.byref(ImQVec))
        ret_ReQ = convert_REAL8Vector_to_numpy(ReQVec)
        ret_ImQ = convert_REAL8Vector_to_numpy(ImQVec)
        myLibBasic.DestroyREAL8Vector(freqsVec)
        myLibBasic.CheckMemoryLeaks()
        return self.MT*self.hPref*(ret_ReQ + 1.j*ret_ImQ)


