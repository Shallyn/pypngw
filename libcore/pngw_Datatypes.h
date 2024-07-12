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

#endif
