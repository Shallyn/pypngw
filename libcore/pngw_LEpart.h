/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#ifndef __INCLUDE_PNGW_LEPART__
#define __INCLUDE_PNGW_LEPART__
#include "pngw.h"

COMPLEX16 calculate_QLEPart_waveform(REAL8 lval, BBHDynVariables *var, BBHDynParams *pms);



COMPLEX16 spart_LEPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 spart_LEPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms);
COMPLEX16 cpart_LEPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms);

#endif
