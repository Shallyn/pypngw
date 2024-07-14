/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#ifndef __INCLUDE_PNGW_DATATYPES__
#define __INCLUDE_PNGW_DATATYPES__
#include "../libbasic/basic.h"

#define CST_OMEGA_EARTH 7.27220521664303990384871153536921963934529954e-5

typedef struct {
    REAL8 e0;
    REAL8 e02;
    REAL8 e03;
    REAL8 e04;
    REAL8 e05;
    REAL8 e06;
    REAL8 e07;
    REAL8 e08;
    REAL8 e09;
    REAL8 e010;
    REAL8 e011;
    REAL8 e012;
    REAL8 e013;
    REAL8 e014;
    REAL8 e015;
    REAL8 vom;
    REAL8 vom2;
    REAL8 vom3;
    REAL8 vom4;
    REAL8 vom5;
    REAL8 vom6;
}BBHDynVariables;

typedef struct {
    REAL8 eta;
    REAL8 eta2;
    REAL8 eta3;
    REAL8 dm;
    REAL8 kappa1;
    REAL8 kappa2;
    REAL8 sx;
    REAL8 sx2;
    REAL8 sigx;
    REAL8 sigx2;

    REAL8 eini;
    REAL8 vomini;

    REAL8 hPlusU;
    REAL8 hPlusE;
    COMPLEX16 hPlusL;
    COMPLEX16 hPlusLE;

    // REAL8 hCrossU;
    // REAL8 hCrossE;
    COMPLEX16 hCrossL;
    COMPLEX16 hCrossLE;

    // angle terms
    REAL8 cos0Thp4Phi;
    REAL8 cos0Thp2Phi;
    REAL8 cosp2Th0Phi;
    REAL8 cosp4Th0Phi;
    REAL8 cos0Thp1Phi;
    REAL8 cosp1Th0Phi;
    REAL8 cos0Thp3Phi;

    REAL8 sin0Thp3Phi;
    REAL8 sin0Thp1Phi;
    REAL8 sinp1Th0Phi;
    REAL8 sinp1Th0PhiTO3;
    REAL8 sinp1Th0PhiTO2;
    REAL8 sinp1Th0PhiTO4;
    REAL8 sinp2Th0Phi;
    REAL8 sin0Thp2Phi;
    REAL8 sin0Thp4Phi;

    COMPLEX16 exp0Thp4Phi;
    COMPLEX16 expp8Thp4Phi;
    COMPLEX16 expp8Th0Phi;
    COMPLEX16 expm4Thm4Phi;
    COMPLEX16 expp2Th0Phi;
    COMPLEX16 expp4Th0Phi;
    COMPLEX16 expp6Thp4Phi;
    COMPLEX16 exp0Thp2Phi;
    COMPLEX16 exp0Thm3Phi;
    COMPLEX16 exp0Thm2Phi;
    COMPLEX16 expp2Thp4Phi;
    COMPLEX16 exp0Thp3Phi;
    COMPLEX16 expp6Th0Phi;
    COMPLEX16 expp4Thp4Phi;
    COMPLEX16 exp0Thp1Phi;
    COMPLEX16 exp0Thm1Phi;
}BBHDynParams;

typedef struct {
    BBHDynParams *pms;
    BBHDynVariables *var;
}BBHCore;

typedef struct {
    REAL8 psi;
    REAL8 alpha;
    REAL8 delta;

    REAL8 lbd;
    REAL8 varphi;
    REAL8 gamma;
    REAL8 zeta;

    REAL8 alphi;
    REAL8 sin_zeta;
    REAL8 sin_2psi;
    REAL8 cos_2psi;
    REAL8 sin_alphi;
    REAL8 cos_alphi;
    REAL8 sin_2alphi;
    REAL8 cos_2alphi;
    REAL8 sin_2gamma;
    REAL8 cos_2gamma;
    REAL8 sin_2delta;
    REAL8 cos_2delta;
    REAL8 sin_delta;
    REAL8 cos_delta;
    REAL8 sin_2lambda;
    REAL8 cos_2lambda;
    REAL8 sin_lambda;
    REAL8 cos_lambda;
    REAL8 MinusCos2LambdaPlus3;
    REAL8 MinusCos2DeltaPlus3;

    REAL8 Gplus;
    REAL8 Gcross;
    REAL8 Gplus_deriv_alpha;
    REAL8 Gplus_deriv_delta;

    REAL8 Gcross_deriv_alpha;
    REAL8 Gcross_deriv_delta;

    REAL8 Fplus;
    REAL8 Fcross;
    REAL8 barFplus;
    REAL8 barFcross;
}AntennaPatternF;

#endif
