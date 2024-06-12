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

