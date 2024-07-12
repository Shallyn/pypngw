#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed, 12 Jun 2024 15:44:00 +0000

@author: Shallyn
"""
import numpy as np
import matplotlib.pyplot as plt
import sys, os
from optparse import OptionParser
from pathlib import Path
from scipy.integrate import solve_ivp, RK45
from .FD2TD import calculate_fStart

MSUN_TSCALE = 4.927200467232548e-6
MSUN_RSCALE = 1.47662504e3
MPARSEC = 3.08567758e22

DEFAULT_V_ISCO = 1/np.sqrt(6)
DEFAULT_m1 = 30
DEFAULT_m2 = 30
DEFAULT_chi1 = 0.0
DEFAULT_chi2 = 0.0
DEFAULT_e0 = 0.0
DEFAULT_zeta0 = 0.0
DEFAULT_fmin = 20
DEFAULT_iota = 0.0
DEFAULT_dL = 100.0
DEFAULT_phic = 0.0
DEFAULT_kappa1 = 1.0
DEFAULT_kappa2 = 1.0
DEFAULT_vommax = 1./np.sqrt(6) # 0.277
class pypngwtd(object):
    def __init__(self, **kwargs):
        self.__m1 = kwargs.get('m1', DEFAULT_m1)
        self.__m2 = kwargs.get('m2', DEFAULT_m2)
        self.__chi1 = kwargs.get('chi1', DEFAULT_chi1)
        self.__chi2 = kwargs.get('chi2', DEFAULT_chi2)
        self.__e0 = kwargs.get('e0', DEFAULT_e0)
        self.__zeta0 = kwargs.get('zeta0', DEFAULT_zeta0)
        self.__fmin = kwargs.get('fmin', DEFAULT_fmin)
        self.__Theta = kwargs.get('iota', DEFAULT_iota)
        self.__Phi = kwargs.get('phic', DEFAULT_phic)
        self.__dL = kwargs.get('distance', DEFAULT_dL)
        self.__kappa1 = kwargs.get('kappa1', DEFAULT_kappa1)
        self.__kappa2 = kwargs.get('kappa1', DEFAULT_kappa2)
        self.__vommax = kwargs.get('vommax', DEFAULT_vommax)
    @property
    def hPref(self):
        return 2.*(self.__m1 + self.__m2)*MSUN_RSCALE*self.eta / (self.__dL*MPARSEC)
    def __str__(self):
        return f'<bbh: (m1,m2,chi1,chi2) = ({self.__m1}, {self.__m2}, {self.__chi1},{self.__chi2})>'
    def __repr__(self):
        return self.__str__()
    @property
    def MT(self):
        return (self.m1+self.m2)*MSUN_TSCALE
    @property
    def fmin(self):
        return self.vom0**3 / (np.pi * self.MT)
    @property
    def fmax(self):
        return self.vommax**3 / (np.pi * self.MT)
    @property
    def vn0(self):
        return np.power(np.pi*(self.m1+self.m2)*MSUN_TSCALE*self.__fmin, 1./3.)
    @property
    def vom0(self):
        return self.calculate_vom_from_etvn(self.__e0, self.vn0)
    # @property
    # def vom0(self):
    #     return np.power(np.pi*self.MT*self.__fmin, 1./3.)
    @property
    def vommax(self):
        return self.__vommax
    @property
    def e0(self):
        return self.__e0
    @property
    def m1(self):
        return self.__m1
    @property
    def m2(self):
        return self.__m2
    @property
    def eta(self):
        return self.__m1*self.__m2 / (self.__m1 + self.__m2)**2
    @property
    def dm(self):
        return np.sqrt(1. - 4.*self.eta)
    @property
    def X1(self):
        return 0.5*(1. + self.dm)
    @property
    def X2(self):
        return 0.5*(1. - self.dm)
    @property
    def s1(self):
        return self.__chi1*self.X1**2
    @property
    def s2(self):
        return self.__chi2*self.X2**2
    @property
    def chi1(self):
        return self.__chi1
    @property
    def chi2(self):
        return self.__chi2
    @property
    def kappa1(self):
        return self.__kappa1
    @property
    def kappa2(self):
        return self.__kappa2
    @property
    def Theta(self):
        return self.__Theta
    @property
    def Phi(self):
        return self.__Phi
    @property
    def s(self):
        return self.s1 + self.s2
    @property
    def sigma(self):
        return self.__chi2*self.X2 - self.__chi1*self.X1
    @property
    def chis(self):
        return 0.5*(self.__chi1 + self.__chi2)
    @property
    def chia(self):
        return 0.5*(self.__chi1 - self.__chi2)
    def calculate_vom_from_etvn(self, et, vn):
        et2 = et*et
        denet = 1. - et2
        eta = self.eta
        eta2 = eta*eta
        eta3 = eta2*eta
        dm = self.dm
        sigx = self.sigma
        sx = self.s
        kappa1 = self.__kappa1
        kappa2 = self.__kappa2
        sigx2 = sigx*sigx
        sx2 = sx*sx
        vn3 = vn*vn*vn
        vn4 = vn3*vn
        vn5 = vn4*vn
        PN0 = vn
        PN2 = -vn3 / denet
        PN3 = (dm*sigx + 3.*sx)*vn4 / (3. * np.power(denet, 3./2.))
        PN4 = (-54 + 28*eta + et2*(-51 + 26*eta) + 12*eta*sigx2 - 3*kappa1*sigx2 + 3*dm*kappa1*sigx2 + 6*eta*kappa1*sigx2 - 3*kappa2*sigx2 -
          3*dm*kappa2*sigx2 + 6*eta*kappa2*sigx2 - 6*(2*dm + (-1 + dm)*kappa1 + kappa2 + dm*kappa2)*sigx*sx - 6*(2 + kappa1 + kappa2)*sx2)*vn5/(12.*denet*denet)
        return PN0 + PN2 + PN3 + PN4
    def chixByvom(self, vom):
        return self.chixBye(self.__e0)/np.power(vom/self.vom0, 2./3.)
    def etBychix(self, chix):
        X2 = chix*chix
        X3 = X2*chix
        X4 = X3*chix
        X5 = X4*chix
        return X5 / (1.947627405784601 - 3.2626522812518073*chix + 2.6617331910331887*X2 -\
         0.5402961833237743*X3 + 0.04198313682829807*X4 + X5)
    def chixBye(self, e):
        return np.power(e, 4./19.)*np.power(1. + 121.*e*e/304., 290./2299.) / np.power(1. - e*e, 1./3.)
    @property
    def vxPref(self):
        if self.__e0 <= 0.0:
            return np.inf
        return self.vxBye(self.__e0) / self.vom0
    def vxByvom(self, vom):
        if self.__e0 <= 0.0:
            if hasattr(vom, '__len__'):
                return np.ones(len(vom))*np.inf
            else:
                return np.inf
        return vom*self.vxPref
    def vxBye(self, e):
        return np.sqrt(1.-e*e) / (np.power(e, 6./19.)*np.power(1. + 121.*e*e/304, 435./2299.))
    def etByvx(self, vx):
        if hasattr(vx, '__len__'):
            slc_1 = np.where(~np.isinf(vx))[0]
            chi = np.power(vx[slc_1], 2./3.)
            chi2 = chi*chi
            chi3 = chi2*chi
            chi4 = chi3*chi
            chi5 = chi4*chi
            ret_1 = 0.5134452293235986 / (0.5134452293235987 + 0.02155604131652953*chi - 0.2774124977493404*\
                chi2 + 1.3666542086682698*chi3 -\
                1.6751932487504968*chi4 + 1.*chi5)
            ret = np.zeros(len(vx))
            ret[slc_1] = ret_1
            return ret
        else:
            if np.isinf(vx):
                return 0.0
            chi = np.power(vx, 2./3.)
            chi2 = chi*chi
            chi3 = chi2*chi
            chi4 = chi3*chi
            chi5 = chi4*chi
            ret = 0.5134452293235986 / (0.5134452293235987 + 0.02155604131652953*chi - 0.2774124977493404*\
                chi2 + 1.3666542086682698*chi3 -\
                1.6751932487504968*chi4 + 1.*chi5)
            return ret
    def dvomdt(self, et, vom):
        et2 = et*et
        et3 = et2*et
        et4 = et3*et
        et5 = et4*et
        et6 = et5*et
        et7 = et6*et
        et8 = et7*et
        vom9 = np.power(vom, 9)
        vom11 = vom9*vom*vom
        vom12 = vom11*vom
        vom13 = vom12*vom
        eta = self.eta
        eta2 = eta*eta
        eta3 = eta2*eta
        sigx = self.sigma
        sigx2 = sigx*sigx
        sx = self.s
        sx2 = sx*sx
        dm = self.dm
        kappa1 = self.__kappa1
        kappa2 = self.__kappa2
        denet = 1. - et2
        sqdenet = np.sqrt(denet)
        denet72 = np.power(denet, 7./2.)
        denet92 = denet72*denet
        denet5 = denet92*sqdenet
        denet112 = denet92*denet
        phiETail = 1 + (412420895437*et8*et2)/3185049600 + (1079*et2)/192 + \
            (1207*et4)/4608 + (569813*et6)/27648 - (91954991*et8)/2654208
        PN0 = (-96 - 292*et2 - 37*et4)*eta*vom9/(15.*denet72)
        PN2 = eta*(176*(-299 + 84*eta) + 40*et2*(-8801 + 3990*eta) +
            et6*(-11717 + 8288*eta) + 14*et4*(-15929 + 10122*eta))*vom11 / (840.*denet92)
        PN3 = (eta*(-2304*phiETail*np.pi +
            (sigx*(3984*dm*sqdenet + 24832*dm*et2*sqdenet +
            14218*dm*et4*sqdenet + 621*dm*et6*sqdenet))/denet112 -
            (6*(1952 + 10972*et2 + 5444*et4 + 201*et6)*sx)/(-denet5))*
            vom12)/90
        PN4 = eta*(3*et8*(1174371 - 1086660*eta + 654752*eta2) -
            16*et2*(-31159118 - 3843735*eta2 +
            1134*(-19 + 846*(-1 + dm)*kappa1 - 846*(1 + dm)*kappa2)*sigx2 -
            5405400*sqdenet + 126*eta*(186841 + 15228*(2 + kappa1 + kappa2)*
            sigx2 + 17160*sqdenet) - 1918728*(2*dm + (-1 + dm)*kappa1 +
            kappa2 + dm*kappa2)*sigx*sx - 1918728*(2 + kappa1 + kappa2)*
            sx2) - 12*et4*(-48770578 - 13921117*eta2 +
            126*(-207 + 5000*(-1 + dm)*kappa1 - 5000*(1 + dm)*kappa2)*sigx2 -
            6218100*sqdenet + 18*eta*(2846689 + 70000*(2 + kappa1 + kappa2)*
            sigx2 + 138180*sqdenet) - 1260000*(2*dm + (-1 + dm)*kappa1 +
            kappa2 + dm*kappa2)*sigx*sx - 1260000*(2 + kappa1 + kappa2)*
            sx2) - 32*(-1678295 - 59472*eta2 - 1134*sigx2 -
            81648*kappa1*sigx2 + 81648*dm*kappa1*sigx2 - 81648*kappa2*sigx2 -
            81648*dm*kappa2*sigx2 - 181440*sqdenet +
            9*eta*(104611 + 18144*(2 + kappa1 + kappa2)*sigx2 +
            8064*sqdenet) - 163296*(2*dm + (-1 + dm)*kappa1 + kappa2 +
            dm*kappa2)*sigx*sx - 163296*(2 + kappa1 + kappa2)*sx2) -
            6*et6*(-23398167 - 10827740*eta2 +
            378*(-9 + 118*(-1 + dm)*kappa1 - 118*(1 + dm)*kappa2)*sigx2 -
            441000*sqdenet + 21*eta*(1290319 + 4248*(2 + kappa1 + kappa2)*
            sigx2 + 8400*sqdenet) - 89208*(2*dm + (-1 + dm)*kappa1 +
            kappa2 + dm*kappa2)*sigx*sx - 89208*(2 + kappa1 + kappa2)*sx2))*vom13 / (-90720.*denet112)
        return -(PN0+PN2+PN3+PN4)

    def calculate_k(self, et, vom):
        vom2 = vom*vom
        et2 = et*et
        sx = self.s
        sx2 = sx*sx
        sigx = self.sigma
        sigx2 = sigx*sigx
        dm = self.dm
        eta = self.eta
        kappa1 = self.__kappa1
        kappa2 = self.__kappa2
        tmpe = (1. - et2)
        PN2 = 3.*vom2 / (1. - et2);
        PN3 = -vom2*vom*(3.*sx + dm*sigx)/np.power(tmpe, 1.5)
        PN4 = vom2*vom2 * (102 + et2*(51 - 26*eta) - 28*eta + 3*(kappa1 - dm*kappa1 + kappa2 + dm*kappa2 - 2*eta*(2 + kappa1 + kappa2))*sigx2 +
            6*sx*((-kappa1 + kappa2 + dm*(2 + kappa1 + kappa2))*sigx + (2 + kappa1 + kappa2)*sx)) / (4. * tmpe * tmpe);
        return PN2 + PN3 + PN4

    def dldvom(self, et, vom):
        vom2 = vom*vom
        vom4 = vom2*vom2
        vom6 = vom4*vom2
        dm = self.dm
        sigx = self.sigma
        sigx2 = sigx*sigx
        sx = self.s
        sx2 = sx*sx
        eta = self.eta
        eta2 = eta*eta
        et2 = et*et
        et4 = et2*et2
        et6 = et4*et2
        et8 = et6*et2
        et10 = et8*et2
        et12 = et10*et2
        et14 = et12*et2
        kappa1 = self.kappa1
        kappa2 = self.kappa2
        sqmet2p2 = 1. - et2
        sqmet2p = np.sqrt(sqmet2p2)
        sqmet2p5 = np.power(1. - et2, 5./2.)
        sqmet2p7 = sqmet2p5 * sqmet2p2

        pref = 5./(32.*eta*vom6)
        PN0 = (96*sqmet2p7)/(96 + 292*et2 + 37*et4)
        PN2 = (12*(16*(-2281 + 924*eta) + et6*(-11717 + 8288*eta) + 14*et4*(-15485 + 10122*eta) + 8*et2*(-37873 + 19950*eta))*sqmet2p5)/(7*(96 + 292*et2 + 37*et4)**2)
        PN3 = ((-1 + et2)**7*(179789679820800 + 1010380544409600*et2 + 47093347123200*et4 + 3705385446604800*et6 - 6228810398361600*et8 + 23280334705627776*et10 - 62023162920413520*et12 + 186636591503717147*et14)*np.pi + 78033715200*(-1 + et2)**2*(dm*(3408 + 23080*et2 + 13996*et4 + 621*et6)*sigx + 6*(1664 + 10096*et2 + 5333*et4 + 201*et6)*sx))/(4877107200*(96 + 292*et2 + 37*et4)**2)
        PN4 = -1/882*((-1 + et2)*(3*et12*(456876000 + 627268623*sqmet2p + 279056960*eta2*sqmet2p - 18648*eta*(9800 + 63551*sqmet2p)) - 252*et10*(-86266684*eta2*sqmet2p + eta*(76345920 + 362250425*sqmet2p - 1100232*(2 + kappa1 + kappa2)*sigx2*sqmet2p) - 14*(333*(-9 + 118*(-1 + dm)*kappa1 - 118*(1 + dm)*kappa2)*sigx2*sqmet2p + 7*(1947600 + 2165831*sqmet2p)) + 1100232*(2*dm + (-1 + dm)*kappa1 + kappa2 + dm*kappa2)*sigx*sqmet2p*sx + 1100232*(2 + kappa1 + kappa2)*sqmet2p*sx2) - 768*(10160640 + 555007*sqmet2p - 4353552*eta2*sqmet2p + 63504*sigx2*sqmet2p + 3810240*kappa1*sigx2*sqmet2p - 3810240*dm*kappa1*sigx2*sqmet2p + 3810240*kappa2*sigx2*sqmet2p + 3810240*dm*kappa2*sigx2*sqmet2p - 1008*eta*(4032 - 703*sqmet2p + 7560*(2 + kappa1 + kappa2)*sigx2*sqmet2p) + 7620480*(2*dm + (-1 + dm)*kappa1 + kappa2 + dm*kappa2)*sigx*sqmet2p*sx + 7620480*(2 + kappa1 + kappa2)*sqmet2p*sx2) - 256*et2*(516287520 - 73426552*sqmet2p - 144448668*eta2*sqmet2p - 7938*(-301 + 13656*(-1 + dm)*kappa1 - 13656*(1 + dm)*kappa2)*sigx2*sqmet2p - 441*eta*(468288 - 481793*sqmet2p + 491616*(2 + kappa1 + kappa2)*sigx2*sqmet2p) + 216802656*(2*dm + (-1 + dm)*kappa1 + kappa2 + dm*kappa2)*sigx*sqmet2p*sx + 216802656*(2 + kappa1 + kappa2)*sqmet2p*sx2) - 192*et4*(1650398400 - 4245699007*sqmet2p - 1687303730*eta2*sqmet2p + 9628794*sigx2*sqmet2p + 356241564*kappa1*sigx2*sqmet2p - 356241564*dm*kappa1*sigx2*sqmet2p + 356241564*kappa2*sigx2*sqmet2p + 356241564*dm*kappa2*sigx2*sqmet2p - 147*eta*(4490880 - 36951661*sqmet2p + 4846824*(2 + kappa1 + kappa2)*sigx2*sqmet2p) + 712483128*(2*dm + (-1 + dm)*kappa1 + kappa2 + dm*kappa2)*sigx*sqmet2p*sx + 712483128*(2 + kappa1 + kappa2)*sqmet2p*sx2) - 12*et8*(-25326894600 - 54752532769*sqmet2p - 21572009606*eta2*sqmet2p + 20464164*sigx2*sqmet2p + 410265828*kappa1*sigx2*sqmet2p - 410265828*dm*kappa1*sigx2*sqmet2p + 410265828*kappa2*sigx2*sqmet2p + 410265828*dm*kappa2*sigx2*sqmet2p - 84*eta*(-120604260 - 947872157*sqmet2p + 9768234*(2 + kappa1 + kappa2)*sigx2*sqmet2p) + 820531656*(2*dm + (-1 + dm)*kappa1 + kappa2 + dm*kappa2)*sigx*sqmet2p*sx + 820531656*(2 + kappa1 + kappa2)*sqmet2p*sx2) - 64*et6*(-1616534010 - 19063578740*sqmet2p - 6653542959*eta2*sqmet2p + 23210712*sigx2*sqmet2p + 591312204*kappa1*sigx2*sqmet2p - 591312204*dm*kappa1*sigx2*sqmet2p + 591312204*kappa2*sigx2*sqmet2p + 591312204*dm*kappa2*sigx2*sqmet2p - 126*eta*(-5131854 - 194324719*sqmet2p + 9385908*(2 + kappa1 + kappa2)*sigx2*sqmet2p) + 1182624408*(2*dm + (-1 + dm)*kappa1 + kappa2 + dm*kappa2)*sigx*sqmet2p*sx + 1182624408*(2 + kappa1 + kappa2)*sqmet2p*sx2)))/(96 + 292*et2 + 37*et4)**3
        return pref*(PN0 + vom2*PN2 + vom2*vom*PN3 + vom4*PN4)

    def dtdvom(self, et, vom):
        vom2 = vom*vom
        vom3 = vom2*vom
        vom4 = vom2*vom2
        vom9 = vom4*vom2*vom3
        dm = self.dm
        sigx = self.sigma
        sigx2 = sigx*sigx
        sx = self.s
        sx2 = sx*sx
        eta = self.eta
        eta2 = eta*eta
        et2 = et*et
        et4 = et2*et2
        et6 = et4*et2
        et8 = et6*et2
        et10 = et8*et2
        et12 = et10*et2
        et14 = et12*et2
        kappa1 = self.kappa1
        kappa2 = self.kappa2

        sqmet2p2 = 1. - et2
        sqmet2p = np.sqrt(sqmet2p2)
        sqmet2p5 = np.power(1. - et2, 5./2.)
        sqmet2p7 = sqmet2p5 * sqmet2p2
        pref = 5./(32.*vom9*eta)
        PN0 = (96*sqmet2p7)/(96 + 292*et2 + 37*et4)
        PN2 = (12*(176*(-299 + 84*eta) + 40*et2*(-8801 + 3990*eta) + et6*(-11717 + 8288*eta) + 14*et4*(-15929 + 10122*eta))*sqmet2p5)/(7*(96 + 292*et2 + 37*et4)**2)
        PN3 = ((-1 + et2)**7*(179789679820800 + 1010380544409600*et2 + 47093347123200*et4 + 3705385446604800*et6 - 6228810398361600*et8 + 23280334705627776*et10 - 62023162920413520*et12 + 186636591503717147*et14)*np.pi + 78033715200*(-1 + et2)**2*(dm*(3984 + 24832*et2 + 14218*et4 + 621*et6)*sigx + 6*(1952 + 10972*et2 + 5444*et4 + 201*et6)*sx))/(4877107200*(96 + 292*et2 + 37*et4)**2)
        PN4 = -1./882*((-1 + et2)*(3*et12*(456876000 + 627268623*sqmet2p + 279056960*eta2*sqmet2p - 18648*eta*(9800 + 63551*sqmet2p)) + 12*et8*(25326894600 + 21572009606*eta2*sqmet2p + 84*eta*(-120604260 + (-969754031 + 9940728*(2 + kappa1 + kappa2)*sigx2)*sqmet2p) + sqmet2p*(56974506733 + 1764*(-11601 + 236684*(-1 + dm)*kappa1 - 236684*(1 + dm)*kappa2)*sigx2 - 835021152*(-kappa1 + kappa2 + dm*(2 + kappa1 + kappa2))*sigx*sx - 835021152*(2 + kappa1 + kappa2)*sx2)) + 192*et4*(-1650398400 + 1687303730*eta2*sqmet2p + 147*eta*(4490880 + (-43682749 + 5262480*(2 + kappa1 + kappa2)*sigx2)*sqmet2p) + sqmet2p*(5872066309 + 2646*(-3639 + 146180*(-1 + dm)*kappa1 - 146180*(1 + dm)*kappa2)*sigx2 - 773584560*(-kappa1 + kappa2 + dm*(2 + kappa1 + kappa2))*sigx*sx - 773584560*(2 + kappa1 + kappa2)*sx2)) + 256*et2*(-516287520 + 144448668*eta2*sqmet2p + 441*eta*(468288 + (-931577 + 554688*(2 + kappa1 + kappa2)*sigx2)*sqmet2p) + 2*sqmet2p*(216400679 + 3969*(-301 + 15408*(-1 + dm)*kappa1 - 15408*(1 + dm)*kappa2)*sigx2 - 122308704*(-kappa1 + kappa2 + dm*(2 + kappa1 + kappa2))*sigx*sx - 122308704*(2 + kappa1 + kappa2)*sx2)) + 768*(-10160640 + 4353552*eta2*sqmet2p + 1008*eta*(4032 + (-1963 + 9072*(2 + kappa1 + kappa2)*sigx2)*sqmet2p) + sqmet2p*(3373169 + 63504*(-1 + 72*(-1 + dm)*kappa1 - 72*(1 + dm)*kappa2)*sigx2 - 9144576*(-kappa1 + kappa2 + dm*(2 + kappa1 + kappa2))*sigx*sx - 9144576*(2 + kappa1 + kappa2)*sx2)) + 252*et10*(190864800 - 76345920*eta + 86266684*eta2*sqmet2p + eta*(-364780337 + 1100232*(2 + kappa1 + kappa2)*sigx2)*sqmet2p + 2*sqmet2p*(107095082 + 2331*(-9 + 118*(-1 + dm)*kappa1 - 118*(1 + dm)*kappa2)*sigx2 - 550116*(-kappa1 + kappa2 + dm*(2 + kappa1 + kappa2))*sigx*sx - 550116*(2 + kappa1 + kappa2)*sx2)) + 64*et6*(6653542959*eta2*sqmet2p + 126*eta*(-5131854 + (-213477181 + 9726234*(2 + kappa1 + kappa2)*sigx2)*sqmet2p) + 2*(808267005 + sqmet2p*(11197318984 + 1323*(-8772 + 231577*(-1 + dm)*kappa1 - 231577*(1 + dm)*kappa2)*sigx2 - 612752742*(-kappa1 + kappa2 + dm*(2 + kappa1 + kappa2))*sigx*sx - 612752742*(2 + kappa1 + kappa2)*sx2)))))/(96 + 292*et2 + 37*et4)**3
        return pref * (PN0 + vom2*PN2 + vom3*PN3 + vom4*PN4)

    def evolve_ltbyv(self, max_step = np.inf):
        def dydt(v, y):
            chix = self.chixByvom(v)
            et = self.etBychix(chix)
            dldv = self.dldvom(et, v)
            dtdv = self.dtdvom(et, v)
            return dldv, dtdv
        v0 = self.vom0
        y0 = np.array([0, 0])
        ret_v = []
        ret_y = []
        solver = RK45(dydt, v0, y0, t_bound = np.inf, rtol=1e-13, atol=1e-13, max_step = max_step)
        while solver.status == 'running':
            ret_v.append(solver.t)
            ret_y.append(solver.y)
            #print((solver.t, solver.y))
            if solver.t > self.vommax:
                break
            solver.step()
        ret_y = np.asarray(ret_y)
        l_ret = ret_y[:,0]
        t_ret = ret_y[:,1]
        return np.asarray(ret_v), l_ret, t_ret

    def evolve(self, max_step = np.inf):
        def dydt(t, y):
            l, vom = y[0], y[1]
            chix = self.chixByvom(vom)
            et = self.etBychix(chix)
            k = self.calculate_k(et, vom)
            dldt = (1. + k)*vom*vom*vom
            dvomdt = self.dvomdt(et, vom)
            return np.array([dldt, dvomdt])
        t0 = 0.0
        y0 = np.array([0, self.vom0])
        t = []
        y = []
        solver = RK45(dydt, t0, y0, t_bound = np.inf, rtol=1e-13, atol=1e-13, max_step = max_step)
        while solver.status == 'running':
            t.append(solver.t)
            y.append(solver.y)
            #print((solver.t, solver.y))
            if solver.y[1] > self.vommax:
                break
            solver.step()
        return np.asarray(t), np.asarray(y)

    # def evolve(self):
    #     def dydt(t, y):
    #         l, vom = y[0], y[1]
    #         vx = self.vxByvom(vom)
    #         et = self.etByvx(vx)
    #         k = self.calculate_k(et, vom)
    #         dldt = (1. + k)*vom*vom*vom
    #         dvomdt = self.dvomdt(et, vom)
    #         return np.array([dldt, dvomdt])
    #     t0 = 0.0
    #     y0 = np.array([0, self.vom0])
    #     t = []
    #     y = []
    #     solver = RK45(dydt, t0, y0, t_bound = np.inf, rtol=1e-15, atol=1e-15)
    #     while solver.status == 'running':
    #         t.append(solver.t)
    #         y.append(solver.y)
    #         print((solver.t, solver.y))
    #         if solver.y[1] > self.vommax:
    #             break
    #         solver.step()
    #     return np.asarray(t), np.asarray(y)
