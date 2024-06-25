/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#ifndef __INCLUDE_PNGW_EPART__
#define __INCLUDE_PNGW_EPART__
#include "pngw.h"

REAL8 calculate_QEPart_waveform(REAL8 lval, BBHDynVariables *var, BBHDynParams *pms);


REAL8 spart_EPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_EPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_EPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms);

#endif
