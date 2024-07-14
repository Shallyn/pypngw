#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon, 18 Dec 2023 05:12:25 +0000

@author: Shallyn
"""
import numpy as np
import matplotlib.pyplot as plt
import sys, os
import ctypes
from pathlib import Path
#pwd = Path(__file__).absolute().parent
#pwd = Path(sys.path[0])
# pwd = Path(os.getcwd())

class pyREAL8Vector(ctypes.Structure):
    _fields_ = (('length', ctypes.c_uint),
                ('data', ctypes.POINTER(ctypes.c_double)))

class c_complex(ctypes.Structure):
    _fields_ = (('real', ctypes.c_double),
                ('imag', ctypes.c_double))
    @property
    def value(self):
        return self.real+1j*self.imag # fields declared above

c_double_complex_p = ctypes.POINTER(c_complex)
c_double_p = ctypes.POINTER(ctypes.c_double)
b_double_complex = lambda c: ctypes.byref(c_complex(c.real, c.imag))

class pyBBHDynVariables(ctypes.Structure):
    _fields_ = (('e0', ctypes.c_double),
        ('e02', ctypes.c_double),
        ('e03', ctypes.c_double),
        ('e04', ctypes.c_double),
        ('e05', ctypes.c_double),
        ('e06', ctypes.c_double),
        ('e07', ctypes.c_double),
        ('e08', ctypes.c_double),
        ('e09', ctypes.c_double),
        ('vom', ctypes.c_double),
        ('vom2', ctypes.c_double),
        ('vom3', ctypes.c_double),
        ('vom4', ctypes.c_double),
        ('vom5', ctypes.c_double),
        ('vom6', ctypes.c_double))

class pyBBHDynParams(ctypes.Structure):
    _fields_ = (('eta', ctypes.c_double),
        ('eta2', ctypes.c_double),
        ('eta3', ctypes.c_double),
        ('dm', ctypes.c_double),
        ('kappa1', ctypes.c_double),
        ('kappa2', ctypes.c_double),
        ('sx', ctypes.c_double),
        ('sx2', ctypes.c_double),
        ('sigx', ctypes.c_double),
        ('sigx2', ctypes.c_double),
        ('eini', ctypes.c_double),
        ('vomini', ctypes.c_double),
        ('hPlusU', ctypes.c_double),
        ('hPlusE', ctypes.c_double),
        ('hPlusL', c_complex),
        ('hPlusLC', c_complex),
        ('hCrossU', ctypes.c_double),
        ('hCrossE', ctypes.c_double),
        ('hCrossL', c_complex),
        ('hCrossLE', c_complex),
        ('cos0Thp4Phi', ctypes.c_double),
        ('cos0Thp2Phi', ctypes.c_double),
        ('cosp2Th0Phi', ctypes.c_double),
        ('cosp4Th0Phi', ctypes.c_double),
        ('cos0Thp1Phi', ctypes.c_double),
        ('cosp1Th0Phi', ctypes.c_double),
        ('sin0Thp3Phi', ctypes.c_double),
        ('sin0Thp1Phi', ctypes.c_double),
        ('sinp1Th0Phi', ctypes.c_double),
        ('sinp1Th0PhiTO3', ctypes.c_double),
        ('sinp1Th0PhiTO2', ctypes.c_double),
        ('sinp1Th0PhiTO4', ctypes.c_double),
        ('sinp2Th0Phi', ctypes.c_double),
        ('sin0Thp2Phi', ctypes.c_double),
        ('exp0Thp4Phi', c_complex),
        ('expp8Thp4Phi', c_complex),
        ('expp8Th0Phi', c_complex),
        ('expm4Thm4Phi', c_complex),
        ('expp2Th0Phi', c_complex),
        ('expp4Th0Phi', c_complex),
        ('expp6Thp4Phi', c_complex),
        ('exp0Thp2Phi', c_complex),
        ('exp0Thm3Phi', c_complex),
        ('exp0Thm2Phi', c_complex),
        ('expp2Thp4Phi', c_complex),
        ('exp0Thp3Phi', c_complex),
        ('expp6Th0Phi', c_complex),
        ('expp4Thp4Phi', c_complex),
        ('exp0Thp1Phi', c_complex),
        ('exp0Thm1Phi', c_complex)
    )

class pyBBHCore(ctypes.Structure):
    _fields_ = (('pms', pyBBHDynVariables),
            ('var', pyBBHDynParams))

class pyAntennaPatternF(ctypes.Structure):
    _fields_ = (
        ("psi", ctypes.c_double),
        ("alpha", ctypes.c_double),
        ("delta", ctypes.c_double),
        ("lbd", ctypes.c_double),
        ("varphi", ctypes.c_double),
        ("gamma", ctypes.c_double),
        ("zeta", ctypes.c_double),
        ("alphi", ctypes.c_double),
        ("sin_zeta", ctypes.c_double),
        ("sin_2psi", ctypes.c_double),
        ("cos_2psi", ctypes.c_double),
        ("sin_alphi", ctypes.c_double),
        ("cos_alphi", ctypes.c_double),
        ("sin_2alphi", ctypes.c_double),
        ("cos_2alphi", ctypes.c_double),
        ("sin_2gamma", ctypes.c_double),
        ("cos_2gamma", ctypes.c_double),
        ("sin_2delta", ctypes.c_double),
        ("cos_2delta", ctypes.c_double),
        ("sin_delta", ctypes.c_double),
        ("cos_delta", ctypes.c_double),
        ("sin_2lambda", ctypes.c_double),
        ("cos_2lambda", ctypes.c_double),
        ("sin_lambda", ctypes.c_double),
        ("cos_lambda", ctypes.c_double),
        ("MinusCos2LambdaPlus3", ctypes.c_double),
        ("MinusCos2DeltaPlus3", ctypes.c_double),
        ("Gplus", ctypes.c_double),
        ("Gcross", ctypes.c_double),
        ("Gplus_deriv_alpha", ctypes.c_double),
        ("Gplus_deriv_delta", ctypes.c_double),
        ("Gcross_deriv_alpha", ctypes.c_double),
        ("Gcross_deriv_delta", ctypes.c_double),
        ("Fplus", ctypes.c_double),
        ("Fcross", ctypes.c_double),
        ("barFplus", ctypes.c_double),
        ("barFcross", ctypes.c_double)
    )
