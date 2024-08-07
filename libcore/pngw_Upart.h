/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#ifndef __INCLUDE_PNGW_UPART__
#define __INCLUDE_PNGW_UPART__
#include "pngw.h"

REAL8 calculate_QUPart_waveform(REAL8 lval, BBHDynVariables *var, BBHDynParams *pms);
REAL8 calculate_QUPart_waveform_emode(INT ilk, REAL8 lval, BBHDynVariables *var, BBHDynParams *pms);
INT calculate_QUPart_waveform_ecoeff(INT ilk, REAL8 lval, BBHDynVariables *var, BBHDynParams *pms,
		COMPLEX16 *ret_QPlus, COMPLEX16 *ret_QMinus);

REAL8 spart_UPartsl1_km4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl1_km4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl1_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl1_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl1_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl1_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl1_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl1_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl1_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl2_km4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl2_km4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl2_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl2_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl2_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl2_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl2_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl2_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl2_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl3_km4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl3_km4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl3_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl3_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl3_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl3_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl3_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl3_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl3_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl4_km4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl4_km4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl4_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl4_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl4_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl4_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl4_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl4_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl4_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl5_km4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl5_km4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl5_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl5_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl5_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl5_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl5_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl5_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl5_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl6_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl6_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl6_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl6_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl6_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl6_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl6_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl7_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl7_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl7_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl7_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl7_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl7_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl7_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl7_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl7_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl8_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl8_km3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl8_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl8_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl8_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl8_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl8_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl8_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl8_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl9_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl9_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl9_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl9_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl9_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl9_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl9_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl9_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl9_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl10_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl10_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl10_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl10_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl10_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl10_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl10_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl10_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl10_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl11_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl11_km2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl11_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl11_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl11_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl11_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl11_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl11_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl11_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl11_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl11_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl12_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl12_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl12_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl12_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl12_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl12_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl12_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl12_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl12_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl13_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl13_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl13_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl13_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl13_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl13_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl13_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl13_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl13_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl13_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl13_k4(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl14_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl14_km1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl14_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl14_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl14_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl14_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl14_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl14_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl14_k3(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl15_k0(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl15_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl15_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl15_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl15_k2(BBHDynVariables *var, BBHDynParams *pms);
REAL8 spart_UPartsl16_k1(BBHDynVariables *var, BBHDynParams *pms);
REAL8 cpart_UPartsl16_k1(BBHDynVariables *var, BBHDynParams *pms);

#endif
