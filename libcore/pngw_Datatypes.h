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
    // angle terms
    REAL8 cos0Thp4Phi;
    REAL8 cos0Thp2Phi;
    REAL8 cosp2Th0Phi;
    REAL8 cosp4Th0Phi;

    REAL8 sin0Thp3Phi;
    REAL8 sin0Thp1Phi;
    REAL8 sinp1Th0Phi;
    REAL8 sinp1Th0PhiTO3;
    REAL8 sinp1Th0PhiTO2;
    REAL8 sinp1Th0PhiTO4;
}BBHDynParams;

#endif
