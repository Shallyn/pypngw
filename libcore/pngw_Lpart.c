/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#include "pngw_Lpart.h"

size_t n_spart_LFunc = 169;
INT spart_LFunc_lkList[169][2]={{1,-6},{1,-5},{1,-4},{1,-3},{1,-2},{1,-1},{1,0},{1,1},{1,2},{1,3},
	{1,4},{1,5},{1,6},{2,-6},{2,-5},{2,-4},{2,-3},{2,-2},{2,-1},{2,0},
	{2,1},{2,2},{2,3},{2,4},{2,5},{2,6},{3,-6},{3,-5},{3,-4},{3,-3},
	{3,-2},{3,-1},{3,0},{3,1},{3,2},{3,3},{3,4},{3,5},{3,6},{4,-5},
	{4,-4},{4,-3},{4,-2},{4,-1},{4,0},{4,1},{4,2},{4,3},{4,4},{4,5},
	{4,6},{5,-5},{5,-4},{5,-3},{5,-2},{5,-1},{5,0},{5,1},{5,2},{5,3},
	{5,4},{5,5},{5,6},{6,-5},{6,-4},{6,-3},{6,-2},{6,-1},{6,0},{6,1},
	{6,2},{6,3},{6,4},{6,5},{6,6},{7,-4},{7,-3},{7,-2},{7,-1},{7,0},
	{7,1},{7,2},{7,3},{7,4},{7,5},{7,6},{8,-4},{8,-3},{8,-2},{8,-1},
	{8,0},{8,1},{8,2},{8,3},{8,4},{8,5},{8,6},{9,-4},{9,-3},{9,-2},
	{9,-1},{9,0},{9,1},{9,2},{9,3},{9,4},{9,5},{9,6},{10,-3},{10,-2},
	{10,-1},{10,0},{10,1},{10,2},{10,3},{10,4},{10,5},{10,6},{11,-3},{11,-2},
	{11,-1},{11,0},{11,1},{11,2},{11,3},{11,4},{11,5},{11,6},{12,-3},{12,-2},
	{12,-1},{12,0},{12,1},{12,2},{12,3},{12,4},{12,5},{12,6},{13,-2},{13,-1},
	{13,0},{13,1},{13,2},{13,3},{13,4},{13,5},{13,6},{14,-1},{14,1},{14,2},
	{14,3},{14,4},{14,5},{14,6},{15,1},{15,2},{15,3},{15,4},{15,5},{15,6},
	{16,1},{16,2},{16,3},{16,4},{16,5},{17,2},{17,3},{17,4},{18,3}};
COMPLEX16 (*spart_LFunc_fList[169])(BBHDynVariables*, BBHDynParams*)={
	spart_LPartsl1_km6,
	spart_LPartsl1_km5,
	spart_LPartsl1_km4,
	spart_LPartsl1_km3,
	spart_LPartsl1_km2,
	spart_LPartsl1_km1,
	spart_LPartsl1_k0,
	spart_LPartsl1_k1,
	spart_LPartsl1_k2,
	spart_LPartsl1_k3,
	spart_LPartsl1_k4,
	spart_LPartsl1_k5,
	spart_LPartsl1_k6,
	spart_LPartsl2_km6,
	spart_LPartsl2_km5,
	spart_LPartsl2_km4,
	spart_LPartsl2_km3,
	spart_LPartsl2_km2,
	spart_LPartsl2_km1,
	spart_LPartsl2_k0,
	spart_LPartsl2_k1,
	spart_LPartsl2_k2,
	spart_LPartsl2_k3,
	spart_LPartsl2_k4,
	spart_LPartsl2_k5,
	spart_LPartsl2_k6,
	spart_LPartsl3_km6,
	spart_LPartsl3_km5,
	spart_LPartsl3_km4,
	spart_LPartsl3_km3,
	spart_LPartsl3_km2,
	spart_LPartsl3_km1,
	spart_LPartsl3_k0,
	spart_LPartsl3_k1,
	spart_LPartsl3_k2,
	spart_LPartsl3_k3,
	spart_LPartsl3_k4,
	spart_LPartsl3_k5,
	spart_LPartsl3_k6,
	spart_LPartsl4_km5,
	spart_LPartsl4_km4,
	spart_LPartsl4_km3,
	spart_LPartsl4_km2,
	spart_LPartsl4_km1,
	spart_LPartsl4_k0,
	spart_LPartsl4_k1,
	spart_LPartsl4_k2,
	spart_LPartsl4_k3,
	spart_LPartsl4_k4,
	spart_LPartsl4_k5,
	spart_LPartsl4_k6,
	spart_LPartsl5_km5,
	spart_LPartsl5_km4,
	spart_LPartsl5_km3,
	spart_LPartsl5_km2,
	spart_LPartsl5_km1,
	spart_LPartsl5_k0,
	spart_LPartsl5_k1,
	spart_LPartsl5_k2,
	spart_LPartsl5_k3,
	spart_LPartsl5_k4,
	spart_LPartsl5_k5,
	spart_LPartsl5_k6,
	spart_LPartsl6_km5,
	spart_LPartsl6_km4,
	spart_LPartsl6_km3,
	spart_LPartsl6_km2,
	spart_LPartsl6_km1,
	spart_LPartsl6_k0,
	spart_LPartsl6_k1,
	spart_LPartsl6_k2,
	spart_LPartsl6_k3,
	spart_LPartsl6_k4,
	spart_LPartsl6_k5,
	spart_LPartsl6_k6,
	spart_LPartsl7_km4,
	spart_LPartsl7_km3,
	spart_LPartsl7_km2,
	spart_LPartsl7_km1,
	spart_LPartsl7_k0,
	spart_LPartsl7_k1,
	spart_LPartsl7_k2,
	spart_LPartsl7_k3,
	spart_LPartsl7_k4,
	spart_LPartsl7_k5,
	spart_LPartsl7_k6,
	spart_LPartsl8_km4,
	spart_LPartsl8_km3,
	spart_LPartsl8_km2,
	spart_LPartsl8_km1,
	spart_LPartsl8_k0,
	spart_LPartsl8_k1,
	spart_LPartsl8_k2,
	spart_LPartsl8_k3,
	spart_LPartsl8_k4,
	spart_LPartsl8_k5,
	spart_LPartsl8_k6,
	spart_LPartsl9_km4,
	spart_LPartsl9_km3,
	spart_LPartsl9_km2,
	spart_LPartsl9_km1,
	spart_LPartsl9_k0,
	spart_LPartsl9_k1,
	spart_LPartsl9_k2,
	spart_LPartsl9_k3,
	spart_LPartsl9_k4,
	spart_LPartsl9_k5,
	spart_LPartsl9_k6,
	spart_LPartsl10_km3,
	spart_LPartsl10_km2,
	spart_LPartsl10_km1,
	spart_LPartsl10_k0,
	spart_LPartsl10_k1,
	spart_LPartsl10_k2,
	spart_LPartsl10_k3,
	spart_LPartsl10_k4,
	spart_LPartsl10_k5,
	spart_LPartsl10_k6,
	spart_LPartsl11_km3,
	spart_LPartsl11_km2,
	spart_LPartsl11_km1,
	spart_LPartsl11_k0,
	spart_LPartsl11_k1,
	spart_LPartsl11_k2,
	spart_LPartsl11_k3,
	spart_LPartsl11_k4,
	spart_LPartsl11_k5,
	spart_LPartsl11_k6,
	spart_LPartsl12_km3,
	spart_LPartsl12_km2,
	spart_LPartsl12_km1,
	spart_LPartsl12_k0,
	spart_LPartsl12_k1,
	spart_LPartsl12_k2,
	spart_LPartsl12_k3,
	spart_LPartsl12_k4,
	spart_LPartsl12_k5,
	spart_LPartsl12_k6,
	spart_LPartsl13_km2,
	spart_LPartsl13_km1,
	spart_LPartsl13_k0,
	spart_LPartsl13_k1,
	spart_LPartsl13_k2,
	spart_LPartsl13_k3,
	spart_LPartsl13_k4,
	spart_LPartsl13_k5,
	spart_LPartsl13_k6,
	spart_LPartsl14_km1,
	spart_LPartsl14_k1,
	spart_LPartsl14_k2,
	spart_LPartsl14_k3,
	spart_LPartsl14_k4,
	spart_LPartsl14_k5,
	spart_LPartsl14_k6,
	spart_LPartsl15_k1,
	spart_LPartsl15_k2,
	spart_LPartsl15_k3,
	spart_LPartsl15_k4,
	spart_LPartsl15_k5,
	spart_LPartsl15_k6,
	spart_LPartsl16_k1,
	spart_LPartsl16_k2,
	spart_LPartsl16_k3,
	spart_LPartsl16_k4,
	spart_LPartsl16_k5,
	spart_LPartsl17_k2,
	spart_LPartsl17_k3,
	spart_LPartsl17_k4,
	spart_LPartsl18_k3
};
size_t n_cpart_LFunc = 169;
INT cpart_LFunc_lkList[169][2]={{1,-6},{1,-5},{1,-4},{1,-3},{1,-2},{1,-1},{1,0},{1,1},{1,2},{1,3},
	{1,4},{1,5},{1,6},{2,-6},{2,-5},{2,-4},{2,-3},{2,-2},{2,-1},{2,0},
	{2,1},{2,2},{2,3},{2,4},{2,5},{2,6},{3,-6},{3,-5},{3,-4},{3,-3},
	{3,-2},{3,-1},{3,0},{3,1},{3,2},{3,3},{3,4},{3,5},{3,6},{4,-5},
	{4,-4},{4,-3},{4,-2},{4,-1},{4,0},{4,1},{4,2},{4,3},{4,4},{4,5},
	{4,6},{5,-5},{5,-4},{5,-3},{5,-2},{5,-1},{5,0},{5,1},{5,2},{5,3},
	{5,4},{5,5},{5,6},{6,-5},{6,-4},{6,-3},{6,-2},{6,-1},{6,0},{6,1},
	{6,2},{6,3},{6,4},{6,5},{6,6},{7,-4},{7,-3},{7,-2},{7,-1},{7,0},
	{7,1},{7,2},{7,3},{7,4},{7,5},{7,6},{8,-4},{8,-3},{8,-2},{8,-1},
	{8,0},{8,1},{8,2},{8,3},{8,4},{8,5},{8,6},{9,-4},{9,-3},{9,-2},
	{9,-1},{9,0},{9,1},{9,2},{9,3},{9,4},{9,5},{9,6},{10,-3},{10,-2},
	{10,-1},{10,0},{10,1},{10,2},{10,3},{10,4},{10,5},{10,6},{11,-3},{11,-2},
	{11,-1},{11,0},{11,1},{11,2},{11,3},{11,4},{11,5},{11,6},{12,-3},{12,-2},
	{12,-1},{12,0},{12,1},{12,2},{12,3},{12,4},{12,5},{12,6},{13,-2},{13,-1},
	{13,0},{13,1},{13,2},{13,3},{13,4},{13,5},{13,6},{14,-1},{14,1},{14,2},
	{14,3},{14,4},{14,5},{14,6},{15,1},{15,2},{15,3},{15,4},{15,5},{15,6},
	{16,1},{16,2},{16,3},{16,4},{16,5},{17,2},{17,3},{17,4},{18,3}};
COMPLEX16 (*cpart_LFunc_fList[169])(BBHDynVariables*, BBHDynParams*)={
	cpart_LPartsl1_km6,
	cpart_LPartsl1_km5,
	cpart_LPartsl1_km4,
	cpart_LPartsl1_km3,
	cpart_LPartsl1_km2,
	cpart_LPartsl1_km1,
	cpart_LPartsl1_k0,
	cpart_LPartsl1_k1,
	cpart_LPartsl1_k2,
	cpart_LPartsl1_k3,
	cpart_LPartsl1_k4,
	cpart_LPartsl1_k5,
	cpart_LPartsl1_k6,
	cpart_LPartsl2_km6,
	cpart_LPartsl2_km5,
	cpart_LPartsl2_km4,
	cpart_LPartsl2_km3,
	cpart_LPartsl2_km2,
	cpart_LPartsl2_km1,
	cpart_LPartsl2_k0,
	cpart_LPartsl2_k1,
	cpart_LPartsl2_k2,
	cpart_LPartsl2_k3,
	cpart_LPartsl2_k4,
	cpart_LPartsl2_k5,
	cpart_LPartsl2_k6,
	cpart_LPartsl3_km6,
	cpart_LPartsl3_km5,
	cpart_LPartsl3_km4,
	cpart_LPartsl3_km3,
	cpart_LPartsl3_km2,
	cpart_LPartsl3_km1,
	cpart_LPartsl3_k0,
	cpart_LPartsl3_k1,
	cpart_LPartsl3_k2,
	cpart_LPartsl3_k3,
	cpart_LPartsl3_k4,
	cpart_LPartsl3_k5,
	cpart_LPartsl3_k6,
	cpart_LPartsl4_km5,
	cpart_LPartsl4_km4,
	cpart_LPartsl4_km3,
	cpart_LPartsl4_km2,
	cpart_LPartsl4_km1,
	cpart_LPartsl4_k0,
	cpart_LPartsl4_k1,
	cpart_LPartsl4_k2,
	cpart_LPartsl4_k3,
	cpart_LPartsl4_k4,
	cpart_LPartsl4_k5,
	cpart_LPartsl4_k6,
	cpart_LPartsl5_km5,
	cpart_LPartsl5_km4,
	cpart_LPartsl5_km3,
	cpart_LPartsl5_km2,
	cpart_LPartsl5_km1,
	cpart_LPartsl5_k0,
	cpart_LPartsl5_k1,
	cpart_LPartsl5_k2,
	cpart_LPartsl5_k3,
	cpart_LPartsl5_k4,
	cpart_LPartsl5_k5,
	cpart_LPartsl5_k6,
	cpart_LPartsl6_km5,
	cpart_LPartsl6_km4,
	cpart_LPartsl6_km3,
	cpart_LPartsl6_km2,
	cpart_LPartsl6_km1,
	cpart_LPartsl6_k0,
	cpart_LPartsl6_k1,
	cpart_LPartsl6_k2,
	cpart_LPartsl6_k3,
	cpart_LPartsl6_k4,
	cpart_LPartsl6_k5,
	cpart_LPartsl6_k6,
	cpart_LPartsl7_km4,
	cpart_LPartsl7_km3,
	cpart_LPartsl7_km2,
	cpart_LPartsl7_km1,
	cpart_LPartsl7_k0,
	cpart_LPartsl7_k1,
	cpart_LPartsl7_k2,
	cpart_LPartsl7_k3,
	cpart_LPartsl7_k4,
	cpart_LPartsl7_k5,
	cpart_LPartsl7_k6,
	cpart_LPartsl8_km4,
	cpart_LPartsl8_km3,
	cpart_LPartsl8_km2,
	cpart_LPartsl8_km1,
	cpart_LPartsl8_k0,
	cpart_LPartsl8_k1,
	cpart_LPartsl8_k2,
	cpart_LPartsl8_k3,
	cpart_LPartsl8_k4,
	cpart_LPartsl8_k5,
	cpart_LPartsl8_k6,
	cpart_LPartsl9_km4,
	cpart_LPartsl9_km3,
	cpart_LPartsl9_km2,
	cpart_LPartsl9_km1,
	cpart_LPartsl9_k0,
	cpart_LPartsl9_k1,
	cpart_LPartsl9_k2,
	cpart_LPartsl9_k3,
	cpart_LPartsl9_k4,
	cpart_LPartsl9_k5,
	cpart_LPartsl9_k6,
	cpart_LPartsl10_km3,
	cpart_LPartsl10_km2,
	cpart_LPartsl10_km1,
	cpart_LPartsl10_k0,
	cpart_LPartsl10_k1,
	cpart_LPartsl10_k2,
	cpart_LPartsl10_k3,
	cpart_LPartsl10_k4,
	cpart_LPartsl10_k5,
	cpart_LPartsl10_k6,
	cpart_LPartsl11_km3,
	cpart_LPartsl11_km2,
	cpart_LPartsl11_km1,
	cpart_LPartsl11_k0,
	cpart_LPartsl11_k1,
	cpart_LPartsl11_k2,
	cpart_LPartsl11_k3,
	cpart_LPartsl11_k4,
	cpart_LPartsl11_k5,
	cpart_LPartsl11_k6,
	cpart_LPartsl12_km3,
	cpart_LPartsl12_km2,
	cpart_LPartsl12_km1,
	cpart_LPartsl12_k0,
	cpart_LPartsl12_k1,
	cpart_LPartsl12_k2,
	cpart_LPartsl12_k3,
	cpart_LPartsl12_k4,
	cpart_LPartsl12_k5,
	cpart_LPartsl12_k6,
	cpart_LPartsl13_km2,
	cpart_LPartsl13_km1,
	cpart_LPartsl13_k0,
	cpart_LPartsl13_k1,
	cpart_LPartsl13_k2,
	cpart_LPartsl13_k3,
	cpart_LPartsl13_k4,
	cpart_LPartsl13_k5,
	cpart_LPartsl13_k6,
	cpart_LPartsl14_km1,
	cpart_LPartsl14_k1,
	cpart_LPartsl14_k2,
	cpart_LPartsl14_k3,
	cpart_LPartsl14_k4,
	cpart_LPartsl14_k5,
	cpart_LPartsl14_k6,
	cpart_LPartsl15_k1,
	cpart_LPartsl15_k2,
	cpart_LPartsl15_k3,
	cpart_LPartsl15_k4,
	cpart_LPartsl15_k5,
	cpart_LPartsl15_k6,
	cpart_LPartsl16_k1,
	cpart_LPartsl16_k2,
	cpart_LPartsl16_k3,
	cpart_LPartsl16_k4,
	cpart_LPartsl16_k5,
	cpart_LPartsl17_k2,
	cpart_LPartsl17_k3,
	cpart_LPartsl17_k4,
	cpart_LPartsl18_k3
};

COMPLEX16 calculate_QLPart_waveform(REAL8 lval, BBHDynVariables *var, BBHDynParams *pms)
{
    REAL8 k = calculate_k(var, pms);
    COMPLEX16 ret;
    INT nl, nk;
    ret = 0.0;
    for (INT i=0; i<n_spart_LFunc; i++) {
        nl = spart_LFunc_lkList[i][0];
        nk = spart_LFunc_lkList[i][1];
        // tmp = spart_LFunc_fList[i](var, pms);
        // print_debug("spart:(%d, %d) = (%e + I %e)\n", nl, nk, creal(tmp), cimag(tmp));
        ret += spart_LFunc_fList[i](var, pms)*sin((nl + nk*k)*lval);
    }
    for (INT i=0; i<n_cpart_LFunc; i++) {
        nl = cpart_LFunc_lkList[i][0];
        nk = cpart_LFunc_lkList[i][1];
        // tmp = cpart_LFunc_fList[i](var, pms);
        // print_debug("cpart:(%d, %d) = (%e + I %e)\n", nl, nk, creal(tmp), cimag(tmp));
        ret += cpart_LFunc_fList[i](var, pms)*cos((nl + nk*k)*lval);
    }

    // ret = spart_LPartsl2_k2(var, pms) * sin((2. + 2.*k)*lval) +
    //     cpart_LPartsl2_k2(var, pms) * cos((2. + 2.*k)*lval);
    return ret;
}

COMPLEX16 spart_LPartsl1_km6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/39636172800)*(9431904 + 4864553*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl1_km6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((9431904 + 4864553*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/39636172800;
	return PN4;
}

COMPLEX16 spart_LPartsl1_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/1981808640*(pms->dm*(3462592 + 2266016*var->e02 + 1344353*var->e04)*var->e06*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN3;
}

COMPLEX16 cpart_LPartsl1_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/1981808640)*pms->dm*(3462592 + 2266016*var->e02 + 1344353*var->e04)*var->e06*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl1_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/14863564800*I)*var->e05*(168*pms->cosp2Th0Phi*(-10704 + 17002*var->e02 + 21107*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 1344*(538977 - 2018780*pms->eta + 1042290*pms->eta2) + 56*var->e02*(-24816069 + 64833040*pms->eta + 25808490*pms->eta2) + 3*var->e04*(-1303597283 + 3745344930*pms->eta + 447519400*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/428070666240)*var->e05*(3976003584 + 2988582912*var->e02 + 2165522688*var->e04 + 1587282768*var->e06 + 1191376313*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl1_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/14863564800*(var->e05*(168*pms->cosp2Th0Phi*(-10704 + 17002*var->e02 + 21107*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 1344*(538977 - 2018780*pms->eta + 1042290*pms->eta2) + 56*var->e02*(-24816069 + 64833040*pms->eta + 25808490*pms->eta2) + 3*var->e04*(-1303597283 + 3745344930*pms->eta + 447519400*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	COMPLEX16 PN2=(var->e05*(3976003584 + 2988582912*var->e02 + 2165522688*var->e04 + 1587282768*var->e06 + 1191376313*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/428070666240;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e04*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((var->e04*(75009973 - 300174207*pms->eta) - 8640*(-3851 + 15489*pms->eta) - 768*var->e02*(-75301 + 301569*pms->eta))*pms->sigx + 3*pms->dm*(26274240 + 46602432*var->e02 + 60346871*var->e04)*pms->sx + 5*pms->cosp2Th0Phi*(-((146880 + 56064*var->e02 + 26863*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(72000 + 34368*var->e02 + 20117*var->e04)*pms->sx))*var->vom6)/141557760;
	COMPLEX16 PN3=(pms->dm*var->e04*(3*pms->cosp2Th0Phi*(201600 + 457632*var->e02 + 294777*var->e04 + 202880*var->e06)*(-1 + 2*pms->eta) + 40320*(-30341 + 4878*pms->eta) + 2016*var->e02*(-706135 + 110646*pms->eta) + 21*var->e04*(-69539329 + 11513850*pms->eta) + 4*var->e06*(-344494013 + 62458443*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/1486356480;
	COMPLEX16 PN1=-1.0/713451110400*(pms->dm*var->e04*(23688806400 + 8845920641*var->e010 + 18486558720*var->e02 + 15035328000*var->e04 + 12402892800*var->e06 + 10395831015*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e04*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*((var->e04*(75009973 - 300174207*pms->eta) - 8640*(-3851 + 15489*pms->eta) - 768*var->e02*(-75301 + 301569*pms->eta))*pms->sigx + 3*pms->dm*(26274240 + 46602432*var->e02 + 60346871*var->e04)*pms->sx + 5*pms->cosp2Th0Phi*(-((146880 + 56064*var->e02 + 26863*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(72000 + 34368*var->e02 + 20117*var->e04)*pms->sx))*var->vom6)/141557760;
	COMPLEX16 PN3=(pms->dm*var->e04*(3*pms->cosp2Th0Phi*(201600 + 457632*var->e02 + 294777*var->e04 + 202880*var->e06)*(-1 + 2*pms->eta) + 40320*(-30341 + 4878*pms->eta) + 2016*var->e02*(-706135 + 110646*pms->eta) + 21*var->e04*(-69539329 + 11513850*pms->eta) + 4*var->e06*(-344494013 + 62458443*pms->eta))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/1486356480;
	COMPLEX16 PN1=(I/713451110400)*pms->dm*var->e04*(23688806400 + 8845920641*var->e010 + 18486558720*var->e02 + 15035328000*var->e04 + 12402892800*var->e06 + 10395831015*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl1_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/101921587200)*var->e03*pms->expm4Thm4Phi*(36*(21646080 + 28872240*var->e02 + 34294548*var->e04 + 39083585*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 27*(9169920 + 13834560*var->e02 + 15857064*var->e04 + 17849767*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 144*(21646080 + 28872240*var->e02 + 34294548*var->e04 + 39083585*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 4*(46080*(30159 - 108725*pms->eta + 200625*pms->eta2) + 2880*var->e02*(-572523 + 1552525*pms->eta + 3167295*pms->eta2) + 72*var->e04*(-29412903 + 80559425*pms->eta + 150132315*pms->eta2) + var->e06*(-2470359393 + 6789887675*pms->eta + 12245645505*pms->eta2))*pms->expp2Thp4Phi + 216*(21646080 + 28872240*var->e02 + 34294548*var->e04 + 39083585*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 144*(21646080 + 28872240*var->e02 + 34294548*var->e04 + 39083585*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 4*(46080*(30159 - 108725*pms->eta + 200625*pms->eta2) + 2880*var->e02*(-572523 + 1552525*pms->eta + 3167295*pms->eta2) + 72*var->e04*(-29412903 + 80559425*pms->eta + 150132315*pms->eta2) + var->e06*(-2470359393 + 6789887675*pms->eta + 12245645505*pms->eta2))*pms->expp6Thp4Phi + 36*(21646080 + 28872240*var->e02 + 34294548*var->e04 + 39083585*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 27*(9169920 + 13834560*var->e02 + 15857064*var->e04 + 17849767*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 6*pms->expp4Thp4Phi*(46080*(-421163 + 232305*pms->eta2 - 5760*pms->sigx2 + 126720*pms->kappa1*pms->sigx2 - 126720*pms->dm*pms->kappa1*pms->sigx2 + 126720*pms->kappa2*pms->sigx2 + 126720*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(527021 + 4608*(21 + 11*pms->kappa1 + 11*pms->kappa2)*pms->sigx2) + 23040*(21*pms->dm + 11*(-1 + pms->dm)*pms->kappa1 + 11*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(21 + 11*pms->kappa1 + 11*pms->kappa2)*pms->sx2) + 2880*var->e02*(5154171 + 3896815*pms->eta2 - 63360*pms->sigx2 + 4080000*pms->kappa1*pms->sigx2 - 4080000*pms->dm*pms->kappa1*pms->sigx2 + 4080000*pms->kappa2*pms->sigx2 + 4080000*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(4584177 + 256*(4184 + 2125*pms->kappa1 + 2125*pms->kappa2)*pms->sigx2) + 3840*(4184*pms->dm + 2125*(-1 + pms->dm)*pms->kappa1 + 2125*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(4184 + 2125*pms->kappa1 + 2125*pms->kappa2)*pms->sx2) + 72*var->e04*(69262551 + 192382235*pms->eta2 - 5760*(313 + 42726*(-1 + pms->dm)*pms->kappa1 - 42726*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 15*pms->eta*(279700165 + 1536*(42413 + 21363*pms->kappa1 + 21363*pms->kappa2)*pms->sigx2) + 23040*(42413*pms->dm + 21363*(-1 + pms->dm)*pms->kappa1 + 21363*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(42413 + 21363*pms->kappa1 + 21363*pms->kappa2)*pms->sx2) + var->e06*(-28885588939 + 16270666065*pms->eta2 - 96624000*pms->sigx2 + 23641948800*pms->kappa1*pms->sigx2 - 23641948800*pms->dm*pms->kappa1*pms->sigx2 + 23641948800*pms->kappa2*pms->sigx2 + 23641948800*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(81374776333 + 11520*(1635092 + 820901*pms->kappa1 + 820901*pms->kappa2)*pms->sigx2) + 57600*(1635092*pms->dm + 820901*(-1 + pms->dm)*pms->kappa1 + 820901*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 57600*(1635092 + 820901*pms->kappa1 + 820901*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=(-1.0/5945425920*I)*var->e03*(3029483520*pms->dm*pms->sigx + 4558095360*pms->dm*var->e02*pms->sigx + 5688079488*pms->dm*var->e04*pms->sigx + 6578927824*pms->dm*var->e06*pms->sigx + 7326424691*pms->dm*var->e08*pms->sigx + 7818854400*pms->sx + 12170511360*var->e02*pms->sx + 15431713920*var->e04*pms->sx + 18035923920*var->e06*pms->sx + 20236576659*var->e08*pms->sx + 3*pms->cosp2Th0Phi*(56770560 + 19031040*var->e02 + 9217152*var->e04 + 5179216*var->e06 + 3264883*var->e08)*(pms->dm*pms->sigx + pms->sx) + (3*I)*(15482880 + 11289600*var->e02 + 8378496*var->e04 + 6373584*var->e06 + 5015083*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/951268147200*I)*var->e03*(pms->cosp2Th0Phi*(5780275200 + 1573754713*var->e010 + 5625446400*var->e02 + 3706859520*var->e04 + 2648629760*var->e06 + 1998844640*var->e08)*(-1 + 3*pms->eta) + 825753600*(-2241 + 127*pms->eta) + 51609600*var->e02*(-31791 + 1289*pms->eta) + 16773120*var->e04*(-94947 + 3653*pms->eta) + 17920*var->e06*(-86025609 + 3209159*pms->eta) + 160*var->e08*(-9377868813 + 341869699*pms->eta) + var->e010*(-1467281925651 + 52338250453*pms->eta))*var->vom4;
	COMPLEX16 PN0=(I/17122826649600)*var->e03*(1248539443200 + 108769492008*var->e010 + 86210055883*var->e012 + 523940659200*var->e02 + 304052797440*var->e04 + 199632384000*var->e06 + 143077812480*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl1_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e03*pms->expm4Thm4Phi*(-36*(21646080 + 28872240*var->e02 + 34294548*var->e04 + 39083585*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 27*(9169920 + 13834560*var->e02 + 15857064*var->e04 + 17849767*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 144*(21646080 + 28872240*var->e02 + 34294548*var->e04 + 39083585*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 4*(46080*(30159 - 108725*pms->eta + 200625*pms->eta2) + 2880*var->e02*(-572523 + 1552525*pms->eta + 3167295*pms->eta2) + 72*var->e04*(-29412903 + 80559425*pms->eta + 150132315*pms->eta2) + var->e06*(-2470359393 + 6789887675*pms->eta + 12245645505*pms->eta2))*pms->expp2Thp4Phi - 216*(21646080 + 28872240*var->e02 + 34294548*var->e04 + 39083585*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 144*(21646080 + 28872240*var->e02 + 34294548*var->e04 + 39083585*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 4*(46080*(30159 - 108725*pms->eta + 200625*pms->eta2) + 2880*var->e02*(-572523 + 1552525*pms->eta + 3167295*pms->eta2) + 72*var->e04*(-29412903 + 80559425*pms->eta + 150132315*pms->eta2) + var->e06*(-2470359393 + 6789887675*pms->eta + 12245645505*pms->eta2))*pms->expp6Thp4Phi - 36*(21646080 + 28872240*var->e02 + 34294548*var->e04 + 39083585*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 27*(9169920 + 13834560*var->e02 + 15857064*var->e04 + 17849767*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 6*pms->expp4Thp4Phi*(46080*(-421163 + 232305*pms->eta2 - 5760*pms->sigx2 + 126720*pms->kappa1*pms->sigx2 - 126720*pms->dm*pms->kappa1*pms->sigx2 + 126720*pms->kappa2*pms->sigx2 + 126720*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(527021 + 4608*(21 + 11*pms->kappa1 + 11*pms->kappa2)*pms->sigx2) + 23040*(21*pms->dm + 11*(-1 + pms->dm)*pms->kappa1 + 11*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(21 + 11*pms->kappa1 + 11*pms->kappa2)*pms->sx2) + 2880*var->e02*(5154171 + 3896815*pms->eta2 - 63360*pms->sigx2 + 4080000*pms->kappa1*pms->sigx2 - 4080000*pms->dm*pms->kappa1*pms->sigx2 + 4080000*pms->kappa2*pms->sigx2 + 4080000*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(4584177 + 256*(4184 + 2125*pms->kappa1 + 2125*pms->kappa2)*pms->sigx2) + 3840*(4184*pms->dm + 2125*(-1 + pms->dm)*pms->kappa1 + 2125*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(4184 + 2125*pms->kappa1 + 2125*pms->kappa2)*pms->sx2) + 72*var->e04*(69262551 + 192382235*pms->eta2 - 5760*(313 + 42726*(-1 + pms->dm)*pms->kappa1 - 42726*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 15*pms->eta*(279700165 + 1536*(42413 + 21363*pms->kappa1 + 21363*pms->kappa2)*pms->sigx2) + 23040*(42413*pms->dm + 21363*(-1 + pms->dm)*pms->kappa1 + 21363*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(42413 + 21363*pms->kappa1 + 21363*pms->kappa2)*pms->sx2) + var->e06*(-28885588939 + 16270666065*pms->eta2 - 96624000*pms->sigx2 + 23641948800*pms->kappa1*pms->sigx2 - 23641948800*pms->dm*pms->kappa1*pms->sigx2 + 23641948800*pms->kappa2*pms->sigx2 + 23641948800*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(81374776333 + 11520*(1635092 + 820901*pms->kappa1 + 820901*pms->kappa2)*pms->sigx2) + 57600*(1635092*pms->dm + 820901*(-1 + pms->dm)*pms->kappa1 + 820901*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 57600*(1635092 + 820901*pms->kappa1 + 820901*pms->kappa2)*pms->sx2)))*var->vom6)/101921587200;
	COMPLEX16 PN3=-1.0/5945425920*(var->e03*(3029483520*pms->dm*pms->sigx + 4558095360*pms->dm*var->e02*pms->sigx + 5688079488*pms->dm*var->e04*pms->sigx + 6578927824*pms->dm*var->e06*pms->sigx + 7326424691*pms->dm*var->e08*pms->sigx + 7818854400*pms->sx + 12170511360*var->e02*pms->sx + 15431713920*var->e04*pms->sx + 18035923920*var->e06*pms->sx + 20236576659*var->e08*pms->sx + 6*pms->cosp2Th0Phi*(25804800 + 13224960*var->e02 + 8588160*var->e04 + 6074992*var->e06 + 4577533*var->e08)*(pms->dm*pms->sigx + pms->sx) - (12*I)*(-5160960 - 967680*var->e02 - 104832*var->e04 + 149296*var->e06 + 218775*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5);
	COMPLEX16 PN2=-1.0/951268147200*(var->e03*(pms->cosp2Th0Phi*(5780275200 + 1573754713*var->e010 + 5625446400*var->e02 + 3706859520*var->e04 + 2648629760*var->e06 + 1998844640*var->e08)*(-1 + 3*pms->eta) + 825753600*(-2241 + 127*pms->eta) + 51609600*var->e02*(-31791 + 1289*pms->eta) + 16773120*var->e04*(-94947 + 3653*pms->eta) + 17920*var->e06*(-86025609 + 3209159*pms->eta) + 160*var->e08*(-9377868813 + 341869699*pms->eta) + var->e010*(-1467281925651 + 52338250453*pms->eta))*var->vom4);
	COMPLEX16 PN0=(var->e03*(1248539443200 + 108769492008*var->e010 + 86210055883*var->e012 + 523940659200*var->e02 + 304052797440*var->e04 + 199632384000*var->e06 + 143077812480*var->e08)*var->vom2)/17122826649600;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e02*pms->exp0Thm3Phi*pms->sinp1Th0Phi*((-((2891520 + 3872640*var->e02 + 4679550*var->e04 + 5356313*var->e06)*(-1 + 3*pms->eta)) + 10*(2304*(-4213 + 15023*pms->eta) + 384*var->e02*(-32003 + 113593*pms->eta) + 6*var->e04*(-2650495 + 9000141*pms->eta) + var->e06*(-19172423 + 63155653*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(-126720 - 13440*var->e02 - 7950*var->e04 - 4523*var->e06 + (211345920 + 257775360*var->e02 + 318527460*var->e04 + 372647722*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(2891520 + 3872640*var->e02 + 4679550*var->e04 + 5356313*var->e06 + 2*(541440 + 785280*var->e02 + 946950*var->e04 + 1079801*var->e06)*pms->exp0Thp2Phi)*pms->sigx + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/35389440;
	COMPLEX16 PN3=(pms->dm*var->e02*pms->exp0Thm3Phi*(3*(238141440 + 229294080*var->e02 + 217680000*var->e04 + 213626624*var->e06 + 211694073*var->e08)*(-1 + 2*pms->eta) + 2*(var->e08*(8006797439 - 12861414*pms->eta) + 15482880*(719 + 42*pms->eta) + 368640*var->e02*(15077 + 54*pms->eta) + 11520*var->e04*(599167 + 4950*pms->eta) + 192*var->e06*(38926175 + 91986*pms->eta))*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-238141440 - 229294080*var->e02 - 217680000*var->e04 - 213626624*var->e06 - 211694073*var->e08 + 2*(112803840 + 105799680*var->e02 + 99175680*var->e04 + 97771968*var->e06 + 96975893*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/6794772480;
	COMPLEX16 PN1=-1.0/1902536294400*(pms->dm*var->e02*(297271296000 + 16213814400*var->e010 + 12858012581*var->e012 + 69363302400*var->e02 + 45364838400*var->e04 + 29691002880*var->e06 + 21310598400*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/35389440*I)*var->e02*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(((2891520 + 3872640*var->e02 + 4679550*var->e04 + 5356313*var->e06)*(-1 + 3*pms->eta) + 10*(2304*(-4213 + 15023*pms->eta) + 384*var->e02*(-32003 + 113593*pms->eta) + 6*var->e04*(-2650495 + 9000141*pms->eta) + var->e06*(-19172423 + 63155653*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06 + (211345920 + 257775360*var->e02 + 318527460*var->e04 + 372647722*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(-2891520 - 3872640*var->e02 - 4679550*var->e04 - 5356313*var->e06 + 2*(541440 + 785280*var->e02 + 946950*var->e04 + 1079801*var->e06)*pms->exp0Thp2Phi)*pms->sigx + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(-1.0/6794772480*I)*pms->dm*var->e02*pms->exp0Thm3Phi*(-3*(238141440 + 229294080*var->e02 + 217680000*var->e04 + 213626624*var->e06 + 211694073*var->e08)*(-1 + 2*pms->eta) + 2*(var->e08*(8006797439 - 12861414*pms->eta) + 15482880*(719 + 42*pms->eta) + 368640*var->e02*(15077 + 54*pms->eta) + 11520*var->e04*(599167 + 4950*pms->eta) + 192*var->e06*(38926175 + 91986*pms->eta))*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(238141440 + 229294080*var->e02 + 217680000*var->e04 + 213626624*var->e06 + 211694073*var->e08 + 2*(112803840 + 105799680*var->e02 + 99175680*var->e04 + 97771968*var->e06 + 96975893*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e02*(297271296000 + 16213814400*var->e010 + 12858012581*var->e012 + 69363302400*var->e02 + 45364838400*var->e04 + 29691002880*var->e06 + 21310598400*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/1902536294400;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl1_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/283115520*I)*var->e0*(pms->cosp2Th0Phi*(-30228480 + 6543360*var->e02 + 1194240*var->e04 + 399280*var->e06 + 239479*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 737280*(183 - 607*pms->eta + 491*pms->eta2) + 92160*var->e02*(-3207 + 8119*pms->eta + 5501*pms->eta2) + 3840*var->e04*(-24375 + 62287*pms->eta + 27557*pms->eta2) + 80*var->e06*(-1271391 + 3332159*pms->eta + 1428629*pms->eta2) + var->e08*(-88963863 + 234237983*pms->eta + 96849877*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/33973862400)*var->e0*(-14863564800 + 338496648*var->e010 + 256941635*var->e012 + 9289728000*var->e02 + 851558400*var->e04 + 737049600*var->e06 + 473336640*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl1_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e0*(var->e08*(7900343829 - 19712584007*pms->eta - 8221054233*pms->eta2) + 3*pms->cosp2Th0Phi*(210419712 + 232740864*var->e02 + 286647552*var->e04 + 329119984*var->e06 + 366496671*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 147456*(-18561 + 42715*pms->eta + 27045*pms->eta2) - 18432*var->e02*(-288261 + 717755*pms->eta + 354045*pms->eta2) - 768*var->e04*(-7674357 + 18982015*pms->eta + 8428785*pms->eta2) - 16*var->e06*(-437459217 + 1088601335*pms->eta + 465534225*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6)/849346560;
	COMPLEX16 PN2=-1.0/713451110400*(var->e0*(698587545600 + 118769003304*var->e010 + 109661623391*var->e012 + 91039334400*var->e02 + 178285363200*var->e04 + 146469657600*var->e06 + 130577751360*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->exp0Thm3Phi*pms->sinp1Th0Phi*((6045696 + 2506752*var->e02 + 6541056*var->e04 + 7502848*var->e06 + 8585293*var->e08)*(-1 + 3*pms->eta)*pms->sigx - 2*(147456*var->e02*(-637 + 1199*pms->eta) + 147456*(417 + 1277*pms->eta) + 2304*var->e04*(-58145 + 131587*pms->eta) + 512*var->e06*(-322647 + 742505*pms->eta) + var->e08*(-193746971 + 452452657*pms->eta))*pms->exp0Thp2Phi*pms->sigx + pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08 + 2*(106020864 + 83460096*var->e02 + 165945600*var->e04 + 210926848*var->e06 + 254281243*var->e08)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(6045696 + 2506752*var->e02 + 6541056*var->e04 + 7502848*var->e06 + 8585293*var->e08 + (-884736 - 294912*var->e02 + 2962944*var->e04 + 2982912*var->e06 + 3423842*var->e08)*pms->exp0Thp2Phi)*pms->sigx) + pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/56623104;
	COMPLEX16 PN3=-1.0/2831155200*(pms->dm*pms->exp0Thm3Phi*(50*(11796480 + 5104847*var->e010 - 6930432*var->e02 + 8179200*var->e04 + 4870144*var->e06 + 5091572*var->e08)*(-1 + 2*pms->eta) + (-22118400*(-103 + 30*pms->eta) + 3686400*var->e02*(-409 + 450*pms->eta) - 115200*var->e04*(-26801 + 1266*pms->eta) + 19200*var->e06*(210239 + 5298*pms->eta) + 50*var->e08*(96113549 + 776502*pms->eta) + var->e010*(5406055883 + 6339450*pms->eta))*pms->exp0Thp2Phi + 5*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-10*(11796480 + 5104847*var->e010 - 6930432*var->e02 + 8179200*var->e04 + 4870144*var->e06 + 5091572*var->e08) + (66355200 + 47910183*var->e010 + 46448640*var->e02 + 51079680*var->e04 + 48257280*var->e06 + 48064050*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(pms->dm*var->e02*(14863564800 + 444866562*var->e010 + 358892311*var->e012 + 464486400*var->e02 + 1161216000*var->e04 + 768902400*var->e06 + 571273920*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/59454259200;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/56623104)*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(-(((6045696 + 2506752*var->e02 + 6541056*var->e04 + 7502848*var->e06 + 8585293*var->e08)*(-1 + 3*pms->eta) + 2*(147456*var->e02*(-637 + 1199*pms->eta) + 147456*(417 + 1277*pms->eta) + 2304*var->e04*(-58145 + 131587*pms->eta) + 512*var->e06*(-322647 + 742505*pms->eta) + var->e08*(-193746971 + 452452657*pms->eta))*pms->exp0Thp2Phi)*pms->sigx) + pms->dm*(147456 + 294912*var->e02 - 94464*var->e04 - 9472*var->e06 - 7307*var->e08 + 2*(106020864 + 83460096*var->e02 + 165945600*var->e04 + 210926848*var->e06 + 254281243*var->e08)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-6045696 - 2506752*var->e02 - 6541056*var->e04 - 7502848*var->e06 - 8585293*var->e08 + (-884736 - 294912*var->e02 + 2962944*var->e04 + 2982912*var->e06 + 3423842*var->e08)*pms->exp0Thp2Phi)*pms->sigx) + pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08)*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(-1.0/2831155200*I)*pms->dm*pms->exp0Thm3Phi*(-50*(11796480 + 5104847*var->e010 - 6930432*var->e02 + 8179200*var->e04 + 4870144*var->e06 + 5091572*var->e08)*(-1 + 2*pms->eta) + (-22118400*(-103 + 30*pms->eta) + 3686400*var->e02*(-409 + 450*pms->eta) - 115200*var->e04*(-26801 + 1266*pms->eta) + 19200*var->e06*(210239 + 5298*pms->eta) + 50*var->e08*(96113549 + 776502*pms->eta) + var->e010*(5406055883 + 6339450*pms->eta))*pms->exp0Thp2Phi + 5*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(10*(11796480 + 5104847*var->e010 - 6930432*var->e02 + 8179200*var->e04 + 4870144*var->e06 + 5091572*var->e08) + (66355200 + 47910183*var->e010 + 46448640*var->e02 + 51079680*var->e04 + 48257280*var->e06 + 48064050*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e02*(14863564800 + 444866562*var->e010 + 358892311*var->e012 + 464486400*var->e02 + 1161216000*var->e04 + 768902400*var->e06 + 571273920*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/59454259200;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl1_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/45298483200*I)*var->e0*pms->expm4Thm4Phi*(5*(-44384256 + 164100096*var->e02 + 66706176*var->e04 + 109904080*var->e06 + 124298723*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) + 72*(4423680 + 2718720*var->e02 + 2512000*var->e04 + 2891840*var->e06 + 3155517*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 20*(-44384256 + 164100096*var->e02 + 66706176*var->e04 + 109904080*var->e06 + 124298723*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 16*(737280*(-5041 + 14850*pms->eta + 1260*pms->eta2) + 92160*var->e02*(-8122 + 22135*pms->eta + 15615*pms->eta2) + 19200*var->e04*(-68126 + 202191*pms->eta + 45039*pms->eta2) + 80*var->e06*(-15359153 + 44986190*pms->eta + 15644280*pms->eta2) + var->e08*(-1203224387 + 3514716860*pms->eta + 1416007170*pms->eta2))*pms->expp2Thp4Phi + 30*(-44384256 + 164100096*var->e02 + 66706176*var->e04 + 109904080*var->e06 + 124298723*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 20*(-44384256 + 164100096*var->e02 + 66706176*var->e04 + 109904080*var->e06 + 124298723*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 16*(737280*(-5041 + 14850*pms->eta + 1260*pms->eta2) + 92160*var->e02*(-8122 + 22135*pms->eta + 15615*pms->eta2) + 19200*var->e04*(-68126 + 202191*pms->eta + 45039*pms->eta2) + 80*var->e06*(-15359153 + 44986190*pms->eta + 15644280*pms->eta2) + var->e08*(-1203224387 + 3514716860*pms->eta + 1416007170*pms->eta2))*pms->expp6Thp4Phi + 5*(-44384256 + 164100096*var->e02 + 66706176*var->e04 + 109904080*var->e06 + 124298723*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 72*(4423680 + 2718720*var->e02 + 2512000*var->e04 + 2891840*var->e06 + 3155517*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 16*pms->expp4Thp4Phi*(1474560*(805*pms->eta2 - 5*pms->eta*(5731 + 288*(16 + 7*pms->kappa1 + 7*pms->kappa2)*pms->sigx2) + 36*(6039 - 20*(-1 + 7*(-1 + pms->dm)*pms->kappa1 - 7*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 1440*(16*pms->dm + 7*(-1 + pms->dm)*pms->kappa1 + 7*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1440*(16 + 7*pms->kappa1 + 7*pms->kappa2)*pms->sx2) + 46080*var->e02*(3272677 - 19875*pms->eta2 - 2880*pms->sigx2 + 153600*pms->kappa1*pms->sigx2 - 153600*pms->dm*pms->kappa1*pms->sigx2 + 153600*pms->kappa2*pms->sigx2 + 153600*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(303457 + 768*(157 + 80*pms->kappa1 + 80*pms->kappa2)*pms->sigx2) + 3840*(157*pms->dm + 80*(-1 + pms->dm)*pms->kappa1 + 80*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(157 + 80*pms->kappa1 + 80*pms->kappa2)*pms->sx2) + 9600*var->e04*(4038645 + 20925*pms->eta2 + 2880*pms->sigx2 + 800832*pms->kappa1*pms->sigx2 - 800832*pms->dm*pms->kappa1*pms->sigx2 + 800832*pms->kappa2*pms->sigx2 + 800832*pms->dm*pms->kappa2*pms->sigx2 - pms->eta*(9049765 + 384*(8372 + 4171*pms->kappa1 + 4171*pms->kappa2)*pms->sigx2) + 384*(8372*pms->dm + 4171*(-1 + pms->dm)*pms->kappa1 + 4171*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 384*(8372 + 4171*pms->kappa1 + 4171*pms->kappa2)*pms->sx2) + 160*var->e06*(-364275843 + 3229910*pms->eta2 + 102960*pms->sigx2 + 51111360*pms->kappa1*pms->sigx2 - 51111360*pms->dm*pms->kappa1*pms->sigx2 + 51111360*pms->kappa2*pms->sigx2 + 51111360*pms->dm*pms->kappa2*pms->sigx2 - 40*pms->eta*(15117841 + 72*(71131 + 35494*pms->kappa1 + 35494*pms->kappa2)*pms->sigx2) + 2880*(71131*pms->dm + 35494*(-1 + pms->dm)*pms->kappa1 + 35494*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 2880*(71131 + 35494*pms->kappa1 + 35494*pms->kappa2)*pms->sx2) + var->e08*(-152537305499 + 751440075*pms->eta2 + 13099680*pms->sigx2 + 8606127840*pms->kappa1*pms->sigx2 - 8606127840*pms->dm*pms->kappa1*pms->sigx2 + 8606127840*pms->kappa2*pms->sigx2 + 8606127840*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(21059562355 + 192*(35913448 + 17929433*pms->kappa1 + 17929433*pms->kappa2)*pms->sigx2) + 960*(35913448*pms->dm + 17929433*(-1 + pms->dm)*pms->kappa1 + 17929433*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 960*(35913448 + 17929433*pms->kappa1 + 17929433*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=(I/4246732800)*var->e0*(15659827200*pms->dm*pms->sigx + 4929005017*pms->dm*var->e010*pms->sigx + 5850316800*pms->dm*var->e02*pms->sigx + 5990860800*pms->dm*var->e04*pms->sigx + 5496393600*pms->dm*var->e06*pms->sigx + 5175759480*pms->dm*var->e08*pms->sigx + 45386956800*pms->sx + 16227324249*var->e010*pms->sx + 20006092800*var->e02*pms->sx + 19401984000*var->e04*pms->sx + 17950896000*var->e06*pms->sx + 16974775800*var->e08*pms->sx + 9*pms->cosp2Th0Phi*(-206438400 + 3611939*var->e010 + 121651200*var->e02 + 5068800*var->e04 + 7414400*var->e06 + 4904040*var->e08)*(pms->dm*pms->sigx + pms->sx) - (3*I)*(-88473600 + 4921471*var->e010 + 77414400*var->e02 + 10598400*var->e04 + 9168000*var->e06 + 6468360*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/59454259200*I)*var->e0*(3*pms->cosp2Th0Phi*(-2477260800 + 12489988*var->e010 + 9291675*var->e012 + 1548288000*var->e02 - 103219200*var->e04 + 32793600*var->e06 + 17663520*var->e08)*(-1 + 3*pms->eta) + 7431782400*(77 + 3*pms->eta) + 309657600*var->e02*(-141 + 125*pms->eta) + 25804800*var->e04*(1563 + 266*pms->eta) + 1612800*var->e06*(19349 + 4966*pms->eta) + 3360*var->e08*(8037933 + 1970695*pms->eta) + 28*var->e010*(843160065 + 206435651*pms->eta) + var->e012*(20891433658 + 5174224915*pms->eta))*var->vom4;
	COMPLEX16 PN0=(I/13317754060800)*var->e0*(-9988315545600 + 111284334336*var->e010 + 84598482528*var->e012 + 67052265745*var->e014 + 5410337587200*var->e02 + 86704128000*var->e04 + 246022963200*var->e06 + 155114588160*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl1_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e0*pms->expm4Thm4Phi*(-5*(-44384256 + 164100096*var->e02 + 66706176*var->e04 + 109904080*var->e06 + 124298723*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) + 72*(4423680 + 2718720*var->e02 + 2512000*var->e04 + 2891840*var->e06 + 3155517*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 20*(-44384256 + 164100096*var->e02 + 66706176*var->e04 + 109904080*var->e06 + 124298723*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 16*(737280*(-5041 + 14850*pms->eta + 1260*pms->eta2) + 92160*var->e02*(-8122 + 22135*pms->eta + 15615*pms->eta2) + 19200*var->e04*(-68126 + 202191*pms->eta + 45039*pms->eta2) + 80*var->e06*(-15359153 + 44986190*pms->eta + 15644280*pms->eta2) + var->e08*(-1203224387 + 3514716860*pms->eta + 1416007170*pms->eta2))*pms->expp2Thp4Phi - 30*(-44384256 + 164100096*var->e02 + 66706176*var->e04 + 109904080*var->e06 + 124298723*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 20*(-44384256 + 164100096*var->e02 + 66706176*var->e04 + 109904080*var->e06 + 124298723*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 16*(737280*(-5041 + 14850*pms->eta + 1260*pms->eta2) + 92160*var->e02*(-8122 + 22135*pms->eta + 15615*pms->eta2) + 19200*var->e04*(-68126 + 202191*pms->eta + 45039*pms->eta2) + 80*var->e06*(-15359153 + 44986190*pms->eta + 15644280*pms->eta2) + var->e08*(-1203224387 + 3514716860*pms->eta + 1416007170*pms->eta2))*pms->expp6Thp4Phi - 5*(-44384256 + 164100096*var->e02 + 66706176*var->e04 + 109904080*var->e06 + 124298723*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 72*(4423680 + 2718720*var->e02 + 2512000*var->e04 + 2891840*var->e06 + 3155517*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 16*pms->expp4Thp4Phi*(1474560*(805*pms->eta2 - 5*pms->eta*(5731 + 288*(16 + 7*pms->kappa1 + 7*pms->kappa2)*pms->sigx2) + 36*(6039 - 20*(-1 + 7*(-1 + pms->dm)*pms->kappa1 - 7*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 1440*(16*pms->dm + 7*(-1 + pms->dm)*pms->kappa1 + 7*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1440*(16 + 7*pms->kappa1 + 7*pms->kappa2)*pms->sx2) + 46080*var->e02*(3272677 - 19875*pms->eta2 - 2880*pms->sigx2 + 153600*pms->kappa1*pms->sigx2 - 153600*pms->dm*pms->kappa1*pms->sigx2 + 153600*pms->kappa2*pms->sigx2 + 153600*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(303457 + 768*(157 + 80*pms->kappa1 + 80*pms->kappa2)*pms->sigx2) + 3840*(157*pms->dm + 80*(-1 + pms->dm)*pms->kappa1 + 80*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(157 + 80*pms->kappa1 + 80*pms->kappa2)*pms->sx2) + 9600*var->e04*(4038645 + 20925*pms->eta2 + 2880*pms->sigx2 + 800832*pms->kappa1*pms->sigx2 - 800832*pms->dm*pms->kappa1*pms->sigx2 + 800832*pms->kappa2*pms->sigx2 + 800832*pms->dm*pms->kappa2*pms->sigx2 - pms->eta*(9049765 + 384*(8372 + 4171*pms->kappa1 + 4171*pms->kappa2)*pms->sigx2) + 384*(8372*pms->dm + 4171*(-1 + pms->dm)*pms->kappa1 + 4171*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 384*(8372 + 4171*pms->kappa1 + 4171*pms->kappa2)*pms->sx2) + 160*var->e06*(-364275843 + 3229910*pms->eta2 + 102960*pms->sigx2 + 51111360*pms->kappa1*pms->sigx2 - 51111360*pms->dm*pms->kappa1*pms->sigx2 + 51111360*pms->kappa2*pms->sigx2 + 51111360*pms->dm*pms->kappa2*pms->sigx2 - 40*pms->eta*(15117841 + 72*(71131 + 35494*pms->kappa1 + 35494*pms->kappa2)*pms->sigx2) + 2880*(71131*pms->dm + 35494*(-1 + pms->dm)*pms->kappa1 + 35494*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 2880*(71131 + 35494*pms->kappa1 + 35494*pms->kappa2)*pms->sx2) + var->e08*(-152537305499 + 751440075*pms->eta2 + 13099680*pms->sigx2 + 8606127840*pms->kappa1*pms->sigx2 - 8606127840*pms->dm*pms->kappa1*pms->sigx2 + 8606127840*pms->kappa2*pms->sigx2 + 8606127840*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(21059562355 + 192*(35913448 + 17929433*pms->kappa1 + 17929433*pms->kappa2)*pms->sigx2) + 960*(35913448*pms->dm + 17929433*(-1 + pms->dm)*pms->kappa1 + 17929433*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 960*(35913448 + 17929433*pms->kappa1 + 17929433*pms->kappa2)*pms->sx2)))*var->vom6)/45298483200;
	COMPLEX16 PN3=(var->e0*(-(pms->dm*(15659827200 + 4929005017*var->e010 + 5850316800*var->e02 + 5990860800*var->e04 + 5496393600*var->e06 + 5175759480*var->e08)*pms->sigx) - 3*(15128985600 + 5409108083*var->e010 + 6668697600*var->e02 + 6467328000*var->e04 + 5983632000*var->e06 + 5658258600*var->e08)*pms->sx + 18*pms->cosp2Th0Phi*(29491200 + 327383*var->e010 - 11059200*var->e02 + 1382400*var->e04 + 438400*var->e06 + 391080*var->e08)*(pms->dm*pms->sigx + pms->sx) - (12*I)*(-88473600 + 1969661*var->e010 + 55296000*var->e02 + 3225600*var->e04 + 3926400*var->e06 + 2647560*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/4246732800;
	COMPLEX16 PN2=(var->e0*(3*pms->cosp2Th0Phi*(-2477260800 + 12489988*var->e010 + 9291675*var->e012 + 1548288000*var->e02 - 103219200*var->e04 + 32793600*var->e06 + 17663520*var->e08)*(-1 + 3*pms->eta) + 7431782400*(77 + 3*pms->eta) + 309657600*var->e02*(-141 + 125*pms->eta) + 25804800*var->e04*(1563 + 266*pms->eta) + 1612800*var->e06*(19349 + 4966*pms->eta) + 3360*var->e08*(8037933 + 1970695*pms->eta) + 28*var->e010*(843160065 + 206435651*pms->eta) + var->e012*(20891433658 + 5174224915*pms->eta))*var->vom4)/59454259200;
	COMPLEX16 PN0=-1.0/13317754060800*(var->e0*(-9988315545600 + 111284334336*var->e010 + 84598482528*var->e012 + 67052265745*var->e014 + 5410337587200*var->e02 + 86704128000*var->e04 + 246022963200*var->e06 + 155114588160*var->e08)*var->vom2);
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e02*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((-57600*(-1217 + 4803*pms->eta) + 9600*var->e02*(-2077 + 8103*pms->eta) + 30*var->e04*(-1138237 + 4553463*pms->eta) + var->e06*(-47058389 + 188172591*pms->eta))*pms->sigx - 3*pms->dm*(-67818240 + 12236160*var->e02 + 27492450*var->e04 + 39612317*var->e06)*pms->sx + 5*pms->cosp2Th0Phi*(-((-748800 + 393600*var->e02 - 3090*var->e04 + 12193*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(-218880 + 124800*var->e02 + 570*var->e04 + 5273*var->e06)*pms->sx))*var->vom6)/35389440;
	COMPLEX16 PN3=-1.0/6794772480*(pms->dm*var->e02*(27*pms->cosp2Th0Phi*(-11059200 + 12042240*var->e02 + 1678720*var->e04 + 1797632*var->e06 + 1352323*var->e08)*(-1 + 2*pms->eta) - 2211840*(-17249 + 690*pms->eta) + 3686400*var->e02*(-8491 + 1446*pms->eta) + 5760*var->e04*(-3720859 + 345510*pms->eta) + 1536*var->e06*(-13232879 + 1311126*pms->eta) + var->e08*(-18626444743 + 1831622622*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(pms->dm*var->e02*(-237817036800 + 19194551808*var->e010 + 15479224913*var->e012 + 257635123200*var->e02 + 38242713600*var->e04 + 34119106560*var->e06 + 24737502720*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/951268147200;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/35389440)*var->e02*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((-57600*(-1217 + 4803*pms->eta) + 9600*var->e02*(-2077 + 8103*pms->eta) + 30*var->e04*(-1138237 + 4553463*pms->eta) + var->e06*(-47058389 + 188172591*pms->eta))*pms->sigx - 3*pms->dm*(-67818240 + 12236160*var->e02 + 27492450*var->e04 + 39612317*var->e06)*pms->sx + 5*pms->cosp2Th0Phi*(-((-748800 + 393600*var->e02 - 3090*var->e04 + 12193*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(-218880 + 124800*var->e02 + 570*var->e04 + 5273*var->e06)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(pms->dm*var->e02*(27*pms->cosp2Th0Phi*(-11059200 + 12042240*var->e02 + 1678720*var->e04 + 1797632*var->e06 + 1352323*var->e08)*(-1 + 2*pms->eta) - 2211840*(-17249 + 690*pms->eta) + 3686400*var->e02*(-8491 + 1446*pms->eta) + 5760*var->e04*(-3720859 + 345510*pms->eta) + 1536*var->e06*(-13232879 + 1311126*pms->eta) + var->e08*(-18626444743 + 1831622622*pms->eta))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/6794772480;
	COMPLEX16 PN1=(I/951268147200)*pms->dm*var->e02*(-237817036800 + 19194551808*var->e010 + 15479224913*var->e012 + 257635123200*var->e02 + 38242713600*var->e04 + 34119106560*var->e06 + 24737502720*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl1_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/707788800)*var->e03*(var->e06*(-588173652 + 1800955305*pms->eta - 109243255*pms->eta2) + pms->cosp2Th0Phi*(21888000 - 4643520*var->e02 + 2657832*var->e04 + 1736003*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 76800*(47754 - 145253*pms->eta + 6015*pms->eta2) - 960*var->e02*(817462 - 2664205*pms->eta + 688015*pms->eta2) - 24*var->e04*(19624052 - 60713965*pms->eta + 5253635*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/317089382400)*var->e03*(-43764940800 + 600560093*var->e010 + 28540108800*var->e02 + 1900523520*var->e04 + 1781875200*var->e06 + 994420320*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl1_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/707788800*(var->e03*(var->e06*(-588173652 + 1800955305*pms->eta - 109243255*pms->eta2) + pms->cosp2Th0Phi*(21888000 - 4643520*var->e02 + 2657832*var->e04 + 1736003*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 76800*(47754 - 145253*pms->eta + 6015*pms->eta2) - 960*var->e02*(817462 - 2664205*pms->eta + 688015*pms->eta2) - 24*var->e04*(19624052 - 60713965*pms->eta + 5253635*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	COMPLEX16 PN2=-1.0/317089382400*(var->e03*(-43764940800 + 600560093*var->e010 + 28540108800*var->e02 + 1900523520*var->e04 + 1781875200*var->e06 + 994420320*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl1_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(pms->dm*var->e04*(-53827200 + 30383808*var->e02 + 5656210*var->e04 + 5142731*var->e06)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/990904320;
	return PN3;
}

COMPLEX16 cpart_LPartsl1_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/990904320)*pms->dm*var->e04*(-53827200 + 30383808*var->e02 + 5656210*var->e04 + 5142731*var->e06)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl1_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/309657600*I)*(5873196 - 1765463*var->e02 + 60896*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl1_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((5873196 - 1765463*var->e02 + 60896*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/309657600;
	return PN4;
}

COMPLEX16 spart_LPartsl2_km6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((60359*I)/154828800)*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl2_km6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(60359*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/154828800;
	return PN4;
}

COMPLEX16 spart_LPartsl2_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/1114767360*(pms->dm*(2957904 + 1424016*var->e02 + 438325*var->e04)*var->e07*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN3;
}

COMPLEX16 cpart_LPartsl2_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/1114767360)*pms->dm*(2957904 + 1424016*var->e02 + 438325*var->e04)*var->e07*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl2_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/19353600)*var->e06*(pms->cosp2Th0Phi*(64491 + 38720*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 10*var->e02*(-228497 + 612788*pms->eta + 195628*pms->eta2) - 7*(231657 - 829265*pms->eta + 344385*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/23224320)*var->e06*(252000 + 166464*var->e02 + 118125*var->e04 + 83969*var->e06)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl2_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e06*(pms->cosp2Th0Phi*(64491 + 38720*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 10*var->e02*(-228497 + 612788*pms->eta + 195628*pms->eta2) - 7*(231657 - 829265*pms->eta + 344385*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/19353600;
	COMPLEX16 PN2=(var->e06*(252000 + 166464*var->e02 + 118125*var->e04 + 83969*var->e06)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/23224320;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e05*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((var->e04*(6694840 - 26805225*pms->eta) + 336*(10388 - 42117*pms->eta) - 28*var->e02*(-192179 + 770901*pms->eta))*pms->sigx + 3*pms->dm*(2598288 + 4147696*var->e02 + 5145365*var->e04)*pms->sx + 5*pms->cosp2Th0Phi*(-7*(5424 + 1748*var->e02 + 739*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 12*pms->dm*(4368 + 1792*var->e02 + 1007*var->e04)*pms->sx))*var->vom6)/15482880;
	COMPLEX16 PN3=-1.0/743178240*(pms->dm*var->e05*(var->e06*(504337177 - 108536898*pms->eta) + 9*pms->cosp2Th0Phi*(463680 + 152208*var->e02 + 156116*var->e04 + 137033*var->e06)*(-1 + 2*pms->eta) - 4032*(-152335 + 27606*pms->eta) - 336*var->e02*(-1664365 + 291354*pms->eta) - 12*var->e04*(-46046347 + 8770302*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=-1.0/27869184000*(pms->dm*var->e05*(841881600 + 292422253*var->e010 + 567302400*var->e02 + 470793600*var->e04 + 394819200*var->e06 + 337477100*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e05*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*((var->e04*(6694840 - 26805225*pms->eta) + 336*(10388 - 42117*pms->eta) - 28*var->e02*(-192179 + 770901*pms->eta))*pms->sigx + 3*pms->dm*(2598288 + 4147696*var->e02 + 5145365*var->e04)*pms->sx + 5*pms->cosp2Th0Phi*(-7*(5424 + 1748*var->e02 + 739*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 12*pms->dm*(4368 + 1792*var->e02 + 1007*var->e04)*pms->sx))*var->vom6)/15482880;
	COMPLEX16 PN3=(I/743178240)*pms->dm*var->e05*(var->e06*(504337177 - 108536898*pms->eta) + 9*pms->cosp2Th0Phi*(463680 + 152208*var->e02 + 156116*var->e04 + 137033*var->e06)*(-1 + 2*pms->eta) - 4032*(-152335 + 27606*pms->eta) - 336*var->e02*(-1664365 + 291354*pms->eta) - 12*var->e04*(-46046347 + 8770302*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(I/27869184000)*pms->dm*var->e05*(841881600 + 292422253*var->e010 + 567302400*var->e02 + 470793600*var->e04 + 394819200*var->e06 + 337477100*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl2_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/707788800)*var->e04*pms->expm4Thm4Phi*((7260720 + 8217408*var->e02 + 9367997*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 6*(115920 + 449856*var->e02 + 481075*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 4*(7260720 + 8217408*var->e02 + 9367997*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(192*var->e02*(16982 - 59390*pms->eta + 172125*pms->eta2) + 240*(130697 - 418245*pms->eta + 215325*pms->eta2) + 5*var->e04*(1233877 - 4222113*pms->eta + 8413545*pms->eta2))*pms->expp2Thp4Phi + 6*(7260720 + 8217408*var->e02 + 9367997*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 4*(7260720 + 8217408*var->e02 + 9367997*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(192*var->e02*(16982 - 59390*pms->eta + 172125*pms->eta2) + 240*(130697 - 418245*pms->eta + 215325*pms->eta2) + 5*var->e04*(1233877 - 4222113*pms->eta + 8413545*pms->eta2))*pms->expp6Thp4Phi + (7260720 + 8217408*var->e02 + 9367997*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 6*(115920 + 449856*var->e02 + 481075*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 4*pms->expp4Thp4Phi*(240*(-6199557 + 723175*pms->eta2 - 5760*(4 + 41*(-1 + pms->dm)*pms->kappa1 - 41*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(1217179 + 2304*(74 + 41*pms->kappa1 + 41*pms->kappa2)*pms->sigx2) + 11520*(74*pms->dm + 41*(-1 + pms->dm)*pms->kappa1 + 41*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 11520*(74 + 41*pms->kappa1 + 41*pms->kappa2)*pms->sx2) + 192*var->e02*(-8832557 + 599835*pms->eta2 - 20160*pms->sigx2 + 531600*pms->kappa1*pms->sigx2 - 531600*pms->dm*pms->kappa1*pms->sigx2 + 531600*pms->kappa2*pms->sigx2 + 531600*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(1482931 + 96*(4262 + 2215*pms->kappa1 + 2215*pms->kappa2)*pms->sigx2) + 480*(4262*pms->dm + 2215*(-1 + pms->dm)*pms->kappa1 + 2215*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 480*(4262 + 2215*pms->kappa1 + 2215*pms->kappa2)*pms->sx2) + 5*var->e04*(-586122417 + 29536971*pms->eta2 - 384*(1572 + 76481*(-1 + pms->dm)*pms->kappa1 - 76481*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - pms->eta*(433685803 + 768*(149818 + 76481*pms->kappa1 + 76481*pms->kappa2)*pms->sigx2) + 768*(149818*pms->dm + 76481*(-1 + pms->dm)*pms->kappa1 + 76481*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 768*(149818 + 76481*pms->kappa1 + 76481*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=(-1.0/967680*I)*var->e04*(463680*pms->dm*pms->sigx + 604464*pms->dm*var->e02*pms->sigx + 724024*pms->dm*var->e04*pms->sigx + 804915*pms->dm*var->e06*pms->sigx + 1149120*pms->sx + 1569456*var->e02*pms->sx + 1908816*var->e04*pms->sx + 2144859*var->e06*pms->sx + pms->cosp2Th0Phi*(50400 + 15120*var->e02 + 8694*var->e04 + 4859*var->e06)*(pms->dm*pms->sigx + pms->sx) + I*(10080 + 7056*var->e02 + 5838*var->e04 + 4699*var->e06)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/23224320*I)*var->e04*(3*pms->cosp2Th0Phi*(-20160 + 32256*var->e02 + 18732*var->e04 + 14612*var->e06 + 11291*var->e08)*(-1 + 3*pms->eta) + 302400*(-149 + 11*pms->eta) + 8064*var->e02*(-3702 + 157*pms->eta) + 84*var->e04*(-345291 + 14749*pms->eta) + 12*var->e06*(-2214239 + 90079*pms->eta) + var->e08*(-24597024 + 989105*pms->eta))*var->vom4;
	COMPLEX16 PN0=(I/43545600)*var->e04*(2721600 + 229706*var->e010 + 997920*var->e02 + 653940*var->e04 + 430110*var->e06 + 305955*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl2_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e04*pms->expm4Thm4Phi*(-((7260720 + 8217408*var->e02 + 9367997*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)) + 6*(115920 + 449856*var->e02 + 481075*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 4*(7260720 + 8217408*var->e02 + 9367997*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(192*var->e02*(16982 - 59390*pms->eta + 172125*pms->eta2) + 240*(130697 - 418245*pms->eta + 215325*pms->eta2) + 5*var->e04*(1233877 - 4222113*pms->eta + 8413545*pms->eta2))*pms->expp2Thp4Phi - 6*(7260720 + 8217408*var->e02 + 9367997*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 4*(7260720 + 8217408*var->e02 + 9367997*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(192*var->e02*(16982 - 59390*pms->eta + 172125*pms->eta2) + 240*(130697 - 418245*pms->eta + 215325*pms->eta2) + 5*var->e04*(1233877 - 4222113*pms->eta + 8413545*pms->eta2))*pms->expp6Thp4Phi - (7260720 + 8217408*var->e02 + 9367997*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 6*(115920 + 449856*var->e02 + 481075*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 4*pms->expp4Thp4Phi*(240*(-6199557 + 723175*pms->eta2 - 5760*(4 + 41*(-1 + pms->dm)*pms->kappa1 - 41*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(1217179 + 2304*(74 + 41*pms->kappa1 + 41*pms->kappa2)*pms->sigx2) + 11520*(74*pms->dm + 41*(-1 + pms->dm)*pms->kappa1 + 41*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 11520*(74 + 41*pms->kappa1 + 41*pms->kappa2)*pms->sx2) + 192*var->e02*(-8832557 + 599835*pms->eta2 - 20160*pms->sigx2 + 531600*pms->kappa1*pms->sigx2 - 531600*pms->dm*pms->kappa1*pms->sigx2 + 531600*pms->kappa2*pms->sigx2 + 531600*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(1482931 + 96*(4262 + 2215*pms->kappa1 + 2215*pms->kappa2)*pms->sigx2) + 480*(4262*pms->dm + 2215*(-1 + pms->dm)*pms->kappa1 + 2215*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 480*(4262 + 2215*pms->kappa1 + 2215*pms->kappa2)*pms->sx2) + 5*var->e04*(-586122417 + 29536971*pms->eta2 - 384*(1572 + 76481*(-1 + pms->dm)*pms->kappa1 - 76481*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - pms->eta*(433685803 + 768*(149818 + 76481*pms->kappa1 + 76481*pms->kappa2)*pms->sigx2) + 768*(149818*pms->dm + 76481*(-1 + pms->dm)*pms->kappa1 + 76481*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 768*(149818 + 76481*pms->kappa1 + 76481*pms->kappa2)*pms->sx2)))*var->vom6)/707788800;
	COMPLEX16 PN3=-1.0/967680*(var->e04*(463680*pms->dm*pms->sigx + 604464*pms->dm*var->e02*pms->sigx + 724024*pms->dm*var->e04*pms->sigx + 804915*pms->dm*var->e06*pms->sigx + 1149120*pms->sx + 1569456*var->e02*pms->sx + 1908816*var->e04*pms->sx + 2144859*var->e06*pms->sx + 14*pms->cosp2Th0Phi*(2880 + 1296*var->e02 + 936*var->e04 + 677*var->e06)*(pms->dm*pms->sigx + pms->sx) + (4*I)*(5040 + 1008*var->e02 + 357*var->e04 + 20*var->e06)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5);
	COMPLEX16 PN2=-1.0/23224320*(var->e04*(3*pms->cosp2Th0Phi*(-20160 + 32256*var->e02 + 18732*var->e04 + 14612*var->e06 + 11291*var->e08)*(-1 + 3*pms->eta) + 302400*(-149 + 11*pms->eta) + 8064*var->e02*(-3702 + 157*pms->eta) + 84*var->e04*(-345291 + 14749*pms->eta) + 12*var->e06*(-2214239 + 90079*pms->eta) + var->e08*(-24597024 + 989105*pms->eta))*var->vom4);
	COMPLEX16 PN0=(var->e04*(2721600 + 229706*var->e010 + 997920*var->e02 + 653940*var->e04 + 430110*var->e06 + 305955*var->e08)*var->vom2)/43545600;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e03*pms->exp0Thm3Phi*pms->sinp1Th0Phi*((-((701280 + 785520*var->e02 + 939726*var->e04 + 1059769*var->e06)*(-1 + 3*pms->eta)) + (2880*(-8835 + 32371*pms->eta) + 720*var->e02*(-32045 + 125026*pms->eta) + 36*var->e04*(-843917 + 3109435*pms->eta) + var->e06*(-35945013 + 128174126*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(-4*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06) + (58469760 + 53482320*var->e02 + 66809808*var->e04 + 76364357*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(701280 + 785520*var->e02 + 939726*var->e04 + 1059769*var->e06 + 18*(15840 + 18160*var->e02 + 21638*var->e04 + 24137*var->e06)*pms->exp0Thp2Phi)*pms->sigx + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/6635520;
	COMPLEX16 PN3=(pms->dm*var->e03*pms->exp0Thm3Phi*((100920960 + 78341760*var->e02 + 74487672*var->e04 + 72245824*var->e06 + 70995143*var->e08)*(-1 + 2*pms->eta) + (var->e08*(1857674483 - 7627014*pms->eta) + 362880*(11651 + 618*pms->eta) - 40320*var->e02*(-17609 + 1854*pms->eta) - 336*var->e06*(-5215019 + 11628*pms->eta) + 504*var->e04*(3473933 + 20406*pms->eta))*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-100920960 - 78341760*var->e02 - 74487672*var->e04 - 72245824*var->e06 - 70995143*var->e08 + 9*(7539840 + 8346240*var->e02 + 7032984*var->e04 + 7119392*var->e06 + 7058843*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/743178240;
	COMPLEX16 PN1=-1.0/2786918400*(pms->dm*var->e03*(435456000 + 22191930*var->e010 + 17850139*var->e012 + 29030400*var->e02 + 60238080*var->e04 + 38223360*var->e06 + 28571040*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/6635520*I)*var->e03*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(((701280 + 785520*var->e02 + 939726*var->e04 + 1059769*var->e06)*(-1 + 3*pms->eta) + (2880*(-8835 + 32371*pms->eta) + 720*var->e02*(-32045 + 125026*pms->eta) + 36*var->e04*(-843917 + 3109435*pms->eta) + var->e06*(-35945013 + 128174126*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(4*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06) + (58469760 + 53482320*var->e02 + 66809808*var->e04 + 76364357*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(-701280 - 785520*var->e02 - 939726*var->e04 - 1059769*var->e06 + 18*(15840 + 18160*var->e02 + 21638*var->e04 + 24137*var->e06)*pms->exp0Thp2Phi)*pms->sigx + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(-1.0/743178240*I)*pms->dm*var->e03*pms->exp0Thm3Phi*(-((100920960 + 78341760*var->e02 + 74487672*var->e04 + 72245824*var->e06 + 70995143*var->e08)*(-1 + 2*pms->eta)) + (var->e08*(1857674483 - 7627014*pms->eta) + 362880*(11651 + 618*pms->eta) - 40320*var->e02*(-17609 + 1854*pms->eta) - 336*var->e06*(-5215019 + 11628*pms->eta) + 504*var->e04*(3473933 + 20406*pms->eta))*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(100920960 + 78341760*var->e02 + 74487672*var->e04 + 72245824*var->e06 + 70995143*var->e08 + 9*(7539840 + 8346240*var->e02 + 7032984*var->e04 + 7119392*var->e06 + 7058843*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e03*(435456000 + 22191930*var->e010 + 17850139*var->e012 + 29030400*var->e02 + 60238080*var->e04 + 38223360*var->e06 + 28571040*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/2786918400;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl2_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/276480)*var->e02*(var->e06*(185838 - 493865*pms->eta - 208765*pms->eta2) + pms->cosp2Th0Phi*(53280 - 10320*var->e02 - 4110*var->e04 + 437*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 1440*(-132 + 287*pms->eta + 871*pms->eta2) + 30*var->e04*(-3246 + 9773*pms->eta + 5953*pms->eta2) - 240*var->e02*(-4404 + 11689*pms->eta + 7153*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/1382400)*var->e02*(-1209600 + 20129*var->e010 + 1008000*var->e02 - 100800*var->e04 + 53760*var->e06 + 26530*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl2_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e02*(var->e06*(15062367 - 37757779*pms->eta - 15573129*pms->eta2) + 9*pms->cosp2Th0Phi*(227088 + 152336*var->e02 + 200451*var->e04 + 226961*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 144*(-47823 + 105395*pms->eta + 56505*pms->eta2) - 48*var->e02*(-336513 + 878605*pms->eta + 402615*pms->eta2) - 3*var->e04*(-3792663 + 9275515*pms->eta + 3838065*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6)/1658880;
	COMPLEX16 PN2=-1.0/58060800*(var->e02*(91324800 + 9258118*var->e010 - 22579200*var->e02 + 19189800*var->e04 + 10610040*var->e06 + 10115245*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e0*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(2*(365760 - 144720*var->e02 + 201900*var->e04 + 149815*var->e06 + 177636*var->e08)*(-1 + 3*pms->eta)*pms->sigx - (2880*var->e02*(-3931 + 435*pms->eta) + 11520*(1363 + 3355*pms->eta) + 240*var->e04*(-46207 + 117833*pms->eta) + 100*var->e06*(-129041 + 300379*pms->eta) + var->e08*(-15151933 + 35745324*pms->eta))*pms->exp0Thp2Phi*pms->sigx + pms->dm*(4*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08) + (22579200 - 3300480*var->e02 + 15893760*var->e04 + 16154560*var->e06 + 19675407*var->e08)*pms->exp0Thp2Phi)*pms->sx + 2*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(365760 - 144720*var->e02 + 201900*var->e04 + 149815*var->e06 + 177636*var->e08 + 2*(54720 - 113040*var->e02 + 75900*var->e04 + 24955*var->e06 + 35462*var->e08)*pms->exp0Thp2Phi)*pms->sigx) + 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/2211840;
	COMPLEX16 PN3=-1.0/530841600*(pms->dm*var->e0*pms->exp0Thm3Phi*((386726400 + 47510449*var->e010 - 492048000*var->e02 + 285588000*var->e04 + 8375400*var->e06 + 50971380*var->e08)*(-1 + 2*pms->eta) + (-345600*(-1699 + 1494*pms->eta) - 60*var->e08*(-13546667 + 7182*pms->eta) + 86400*var->e02*(-14003 + 12150*pms->eta) - 7200*var->e04*(-105613 + 55626*pms->eta) + 600*var->e06*(1080731 + 130266*pms->eta) + var->e010*(921315797 + 202326*pms->eta))*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-386726400 - 47510449*var->e010 + 492048000*var->e02 - 285588000*var->e04 - 8375400*var->e06 - 50971380*var->e08 + 9*(19468800 + 4939453*var->e010 - 3484800*var->e02 + 7236000*var->e04 + 4640200*var->e06 + 4959620*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(pms->dm*var->e0*(812851200 + 101008992*var->e010 + 81357290*var->e012 + 67457281*var->e014 + 4064256000*var->e02 - 1032998400*var->e04 + 324576000*var->e06 + 117835200*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/13005619200;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/2211840)*var->e0*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(-((2*(365760 - 144720*var->e02 + 201900*var->e04 + 149815*var->e06 + 177636*var->e08)*(-1 + 3*pms->eta) + (2880*var->e02*(-3931 + 435*pms->eta) + 11520*(1363 + 3355*pms->eta) + 240*var->e04*(-46207 + 117833*pms->eta) + 100*var->e06*(-129041 + 300379*pms->eta) + var->e08*(-15151933 + 35745324*pms->eta))*pms->exp0Thp2Phi)*pms->sigx) + pms->dm*(-4*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08) + (22579200 - 3300480*var->e02 + 15893760*var->e04 + 16154560*var->e06 + 19675407*var->e08)*pms->exp0Thp2Phi)*pms->sx + 2*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-365760 + 144720*var->e02 - 201900*var->e04 - 149815*var->e06 - 177636*var->e08 + 2*(54720 - 113040*var->e02 + 75900*var->e04 + 24955*var->e06 + 35462*var->e08)*pms->exp0Thp2Phi)*pms->sigx) + 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(-1.0/530841600*I)*pms->dm*var->e0*pms->exp0Thm3Phi*(-((386726400 + 47510449*var->e010 - 492048000*var->e02 + 285588000*var->e04 + 8375400*var->e06 + 50971380*var->e08)*(-1 + 2*pms->eta)) + (-345600*(-1699 + 1494*pms->eta) - 60*var->e08*(-13546667 + 7182*pms->eta) + 86400*var->e02*(-14003 + 12150*pms->eta) - 7200*var->e04*(-105613 + 55626*pms->eta) + 600*var->e06*(1080731 + 130266*pms->eta) + var->e010*(921315797 + 202326*pms->eta))*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(386726400 + 47510449*var->e010 - 492048000*var->e02 + 285588000*var->e04 + 8375400*var->e06 + 50971380*var->e08 + 9*(19468800 + 4939453*var->e010 - 3484800*var->e02 + 7236000*var->e04 + 4640200*var->e06 + 4959620*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e0*(812851200 + 101008992*var->e010 + 81357290*var->e012 + 67457281*var->e014 + 4064256000*var->e02 - 1032998400*var->e04 + 324576000*var->e06 + 117835200*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/13005619200;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl2_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/424673280*I)*pms->expm4Thm4Phi*(3*(4644864 - 14937984*var->e02 + 18150336*var->e04 - 4863384*var->e06 + 2820167*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) + 18*(-221184 + 441216*var->e02 + 205632*var->e04 + 45144*var->e06 + 130793*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 12*(4644864 - 14937984*var->e02 + 18150336*var->e04 - 4863384*var->e06 + 2820167*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(-73728*(-639 + 1745*pms->eta + 435*pms->eta2) + 1152*var->e02*(-219849 + 655165*pms->eta + 4155*pms->eta2) + 576*var->e04*(100749 - 331205*pms->eta + 173805*pms->eta2) - 8*var->e06*(6411069 - 20067425*pms->eta + 2808105*pms->eta2) + var->e08*(-32637759 + 95346595*pms->eta + 30409125*pms->eta2))*pms->expp2Thp4Phi + 18*(4644864 - 14937984*var->e02 + 18150336*var->e04 - 4863384*var->e06 + 2820167*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 12*(4644864 - 14937984*var->e02 + 18150336*var->e04 - 4863384*var->e06 + 2820167*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(-73728*(-639 + 1745*pms->eta + 435*pms->eta2) + 1152*var->e02*(-219849 + 655165*pms->eta + 4155*pms->eta2) + 576*var->e04*(100749 - 331205*pms->eta + 173805*pms->eta2) - 8*var->e06*(6411069 - 20067425*pms->eta + 2808105*pms->eta2) + var->e08*(-32637759 + 95346595*pms->eta + 30409125*pms->eta2))*pms->expp6Thp4Phi + 3*(4644864 - 14937984*var->e02 + 18150336*var->e04 - 4863384*var->e06 + 2820167*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 18*(-221184 + 441216*var->e02 + 205632*var->e04 + 45144*var->e06 + 130793*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 12*pms->expp4Thp4Phi*(-73728*(6983 + 555*pms->eta2 + 360*pms->sigx2 + 540*pms->kappa1*pms->sigx2 - 540*pms->dm*pms->kappa1*pms->sigx2 + 540*pms->kappa2*pms->sigx2 + 540*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(463 + 72*(10 + 3*pms->kappa1 + 3*pms->kappa2)*pms->sigx2) + 360*(10*pms->dm + 3*(-1 + pms->dm)*pms->kappa1 + 3*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 360*(10 + 3*pms->kappa1 + 3*pms->kappa2)*pms->sx2) + 1152*var->e02*(11635*pms->eta2 - 15*pms->eta*(79869 + 256*(278 + 109*pms->kappa1 + 109*pms->kappa2)*pms->sigx2) + 3*(3983741 - 640*(-30 + 109*(-1 + pms->dm)*pms->kappa1 - 109*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 3840*(278*pms->dm + 109*(-1 + pms->dm)*pms->kappa1 + 109*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(278 + 109*pms->kappa1 + 109*pms->kappa2)*pms->sx2) + 576*var->e04*(11785197 - 22415*pms->eta2 - 37440*pms->sigx2 + 306720*pms->kappa1*pms->sigx2 - 306720*pms->dm*pms->kappa1*pms->sigx2 + 306720*pms->kappa2*pms->sigx2 + 306720*pms->dm*pms->kappa2*pms->sigx2 - 45*pms->eta*(73525 + 64*(374 + 213*pms->kappa1 + 213*pms->kappa2)*pms->sigx2) + 2880*(374*pms->dm + 213*(-1 + pms->dm)*pms->kappa1 + 213*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 2880*(374 + 213*pms->kappa1 + 213*pms->kappa2)*pms->sx2) + 8*var->e06*(838995683 + 234255*pms->eta2 + 403200*pms->sigx2 + 26294400*pms->kappa1*pms->sigx2 - 26294400*pms->dm*pms->kappa1*pms->sigx2 + 26294400*pms->kappa2*pms->sigx2 + 26294400*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(65971939 + 11520*(1854 + 913*pms->kappa1 + 913*pms->kappa2)*pms->sigx2) + 57600*(1854*pms->dm + 913*(-1 + pms->dm)*pms->kappa1 + 913*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 57600*(1854 + 913*pms->kappa1 + 913*pms->kappa2)*pms->sx2) + var->e08*(6187179633 + 11949685*pms->eta2 - 1920*(-120 + 120049*(-1 + pms->dm)*pms->kappa1 - 120049*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 15*pms->eta*(194838811 + 256*(240338 + 120049*pms->kappa1 + 120049*pms->kappa2)*pms->sigx2) + 3840*(240338*pms->dm + 120049*(-1 + pms->dm)*pms->kappa1 + 120049*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(240338 + 120049*pms->kappa1 + 120049*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=(I/691200)*(-1152000*pms->dm*pms->sigx + 2300689*pms->dm*var->e010*pms->sigx + 7891200*pms->dm*var->e02*pms->sigx + 1022400*pms->dm*var->e04*pms->sigx + 2529200*pms->dm*var->e06*pms->sigx + 2304700*pms->dm*var->e08*pms->sigx - 3801600*pms->sx + 6990141*var->e010*pms->sx + 21600000*var->e02*pms->sx + 4298400*var->e04*pms->sx + 7474800*var->e06*pms->sx + 7015800*var->e08*pms->sx + 3*pms->cosp2Th0Phi*(230400 + 3939*var->e010 - 633600*var->e02 + 388800*var->e04 - 58000*var->e06 + 12050*var->e08)*(pms->dm*pms->sigx + pms->sx) - (75*I)*var->e02*(-2304 + 2304*var->e02 - 240*var->e04 + 142*var->e06 + 77*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/49766400*I)*(pms->cosp2Th0Phi*(16588800 - 11862*var->e010 + 12197*var->e012 - 34732800*var->e02 + 21124800*var->e04 - 4618800*var->e06 + 524700*var->e08)*(-1 + 3*pms->eta) - 8294400*(9 + 7*pms->eta) + 518400*var->e02*(2829 + 25*pms->eta) + 129600*var->e04*(-2937 + 691*pms->eta) - 3600*var->e06*(-51597 + 5639*pms->eta) + 900*var->e08*(116511 + 9359*pms->eta) + 18*var->e010*(5810541 + 229909*pms->eta) + 5*var->e012*(19912626 + 758245*pms->eta))*var->vom4;
	COMPLEX16 PN0=(I/203212800)*(203212800 + 1776348*var->e010 + 1435700*var->e012 + 1071769*var->e014 - 508032000*var->e02 + 292118400*var->e04 - 45864000*var->e06 + 7497000*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
	// return PN0;
}

COMPLEX16 cpart_LPartsl2_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->expm4Thm4Phi*(-3*(4644864 - 14937984*var->e02 + 18150336*var->e04 - 4863384*var->e06 + 2820167*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) + 18*(-221184 + 441216*var->e02 + 205632*var->e04 + 45144*var->e06 + 130793*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 12*(4644864 - 14937984*var->e02 + 18150336*var->e04 - 4863384*var->e06 + 2820167*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(-73728*(-639 + 1745*pms->eta + 435*pms->eta2) + 1152*var->e02*(-219849 + 655165*pms->eta + 4155*pms->eta2) + 576*var->e04*(100749 - 331205*pms->eta + 173805*pms->eta2) - 8*var->e06*(6411069 - 20067425*pms->eta + 2808105*pms->eta2) + var->e08*(-32637759 + 95346595*pms->eta + 30409125*pms->eta2))*pms->expp2Thp4Phi - 18*(4644864 - 14937984*var->e02 + 18150336*var->e04 - 4863384*var->e06 + 2820167*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 12*(4644864 - 14937984*var->e02 + 18150336*var->e04 - 4863384*var->e06 + 2820167*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(-73728*(-639 + 1745*pms->eta + 435*pms->eta2) + 1152*var->e02*(-219849 + 655165*pms->eta + 4155*pms->eta2) + 576*var->e04*(100749 - 331205*pms->eta + 173805*pms->eta2) - 8*var->e06*(6411069 - 20067425*pms->eta + 2808105*pms->eta2) + var->e08*(-32637759 + 95346595*pms->eta + 30409125*pms->eta2))*pms->expp6Thp4Phi - 3*(4644864 - 14937984*var->e02 + 18150336*var->e04 - 4863384*var->e06 + 2820167*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 18*(-221184 + 441216*var->e02 + 205632*var->e04 + 45144*var->e06 + 130793*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 12*pms->expp4Thp4Phi*(-73728*(6983 + 555*pms->eta2 + 360*pms->sigx2 + 540*pms->kappa1*pms->sigx2 - 540*pms->dm*pms->kappa1*pms->sigx2 + 540*pms->kappa2*pms->sigx2 + 540*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(463 + 72*(10 + 3*pms->kappa1 + 3*pms->kappa2)*pms->sigx2) + 360*(10*pms->dm + 3*(-1 + pms->dm)*pms->kappa1 + 3*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 360*(10 + 3*pms->kappa1 + 3*pms->kappa2)*pms->sx2) + 1152*var->e02*(11635*pms->eta2 - 15*pms->eta*(79869 + 256*(278 + 109*pms->kappa1 + 109*pms->kappa2)*pms->sigx2) + 3*(3983741 - 640*(-30 + 109*(-1 + pms->dm)*pms->kappa1 - 109*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 3840*(278*pms->dm + 109*(-1 + pms->dm)*pms->kappa1 + 109*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(278 + 109*pms->kappa1 + 109*pms->kappa2)*pms->sx2) + 576*var->e04*(11785197 - 22415*pms->eta2 - 37440*pms->sigx2 + 306720*pms->kappa1*pms->sigx2 - 306720*pms->dm*pms->kappa1*pms->sigx2 + 306720*pms->kappa2*pms->sigx2 + 306720*pms->dm*pms->kappa2*pms->sigx2 - 45*pms->eta*(73525 + 64*(374 + 213*pms->kappa1 + 213*pms->kappa2)*pms->sigx2) + 2880*(374*pms->dm + 213*(-1 + pms->dm)*pms->kappa1 + 213*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 2880*(374 + 213*pms->kappa1 + 213*pms->kappa2)*pms->sx2) + 8*var->e06*(838995683 + 234255*pms->eta2 + 403200*pms->sigx2 + 26294400*pms->kappa1*pms->sigx2 - 26294400*pms->dm*pms->kappa1*pms->sigx2 + 26294400*pms->kappa2*pms->sigx2 + 26294400*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(65971939 + 11520*(1854 + 913*pms->kappa1 + 913*pms->kappa2)*pms->sigx2) + 57600*(1854*pms->dm + 913*(-1 + pms->dm)*pms->kappa1 + 913*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 57600*(1854 + 913*pms->kappa1 + 913*pms->kappa2)*pms->sx2) + var->e08*(6187179633 + 11949685*pms->eta2 - 1920*(-120 + 120049*(-1 + pms->dm)*pms->kappa1 - 120049*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 15*pms->eta*(194838811 + 256*(240338 + 120049*pms->kappa1 + 120049*pms->kappa2)*pms->sigx2) + 3840*(240338*pms->dm + 120049*(-1 + pms->dm)*pms->kappa1 + 120049*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(240338 + 120049*pms->kappa1 + 120049*pms->kappa2)*pms->sx2)))*var->vom6)/424673280;
	COMPLEX16 PN3=((1152000*pms->dm*pms->sigx - 2300689*pms->dm*var->e010*pms->sigx - 7891200*pms->dm*var->e02*pms->sigx - 1022400*pms->dm*var->e04*pms->sigx - 2529200*pms->dm*var->e06*pms->sigx - 2304700*pms->dm*var->e08*pms->sigx + 3801600*pms->sx - 6990141*var->e010*pms->sx - 21600000*var->e02*pms->sx - 4298400*var->e04*pms->sx - 7474800*var->e06*pms->sx - 7015800*var->e08*pms->sx + 6*pms->cosp2Th0Phi*(-57600 + 459*var->e010 + 115200*var->e02 - 54000*var->e04 + 10000*var->e06 - 350*var->e08)*(pms->dm*pms->sigx + pms->sx) - (12*I)*(28800 + 733*var->e010 - 86400*var->e02 + 55800*var->e04 - 8000*var->e06 + 1950*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/691200;
	COMPLEX16 PN2=((pms->cosp2Th0Phi*(16588800 - 11862*var->e010 + 12197*var->e012 - 34732800*var->e02 + 21124800*var->e04 - 4618800*var->e06 + 524700*var->e08)*(-1 + 3*pms->eta) - 8294400*(9 + 7*pms->eta) + 518400*var->e02*(2829 + 25*pms->eta) + 129600*var->e04*(-2937 + 691*pms->eta) - 3600*var->e06*(-51597 + 5639*pms->eta) + 900*var->e08*(116511 + 9359*pms->eta) + 18*var->e010*(5810541 + 229909*pms->eta) + 5*var->e012*(19912626 + 758245*pms->eta))*var->vom4)/49766400;
	COMPLEX16 PN0=-1.0/203212800*((203212800 + 1776348*var->e010 + 1435700*var->e012 + 1071769*var->e014 - 508032000*var->e02 + 292118400*var->e04 - 45864000*var->e06 + 7497000*var->e08)*var->vom2);
	return PN4+PN3+PN2+PN0;
	// return PN0;
}

COMPLEX16 spart_LPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e0*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((397440*(-29 + 111*pms->eta) + 2580*var->e06*(-679 + 2841*pms->eta) + 2040*var->e04*(-3379 + 12561*pms->eta) - 7200*var->e02*(-3277 + 12579*pms->eta) + 13*var->e08*(-271223 + 1081992*pms->eta))*pms->sigx - 9*pms->dm*(3824640 - 7009920*var->e02 + 1616320*var->e04 + 510160*var->e06 + 993969*var->e08)*pms->sx + 20*pms->cosp2Th0Phi*(-5*(19872 - 38088*var->e02 + 19482*var->e04 - 3225*var->e06 + 377*var->e08)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(34560 - 63360*var->e02 + 31920*var->e04 - 5280*var->e06 + 629*var->e08)*pms->sx))*var->vom6)/2211840;
	COMPLEX16 PN3=-1.0/1061683200*(pms->dm*var->e0*(9*pms->cosp2Th0Phi*(34790400 + 788309*var->e010 - 70560000*var->e02 + 45835200*var->e04 - 7794400*var->e06 + 2056000*var->e08)*(-1 + 2*pms->eta) + 5*(-691200*(3335 + 162*pms->eta) - 34560*var->e02*(-199709 + 15786*pms->eta) - 5280*var->e06*(99167 + 17010*pms->eta) + 2880*var->e04*(-1428721 + 291282*pms->eta) + 96*var->e08*(-9048803 + 1020204*pms->eta) + var->e010*(-759637919 + 67544814*pms->eta)))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(pms->dm*var->e0*(6096384000 + 171119760*var->e010 + 137822559*var->e012 + 110207935*var->e014 - 13615257600*var->e02 + 9186912000*var->e04 - 1236211200*var->e06 + 386033760*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/6502809600;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/2211840)*var->e0*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((397440*(-29 + 111*pms->eta) + 2580*var->e06*(-679 + 2841*pms->eta) + 2040*var->e04*(-3379 + 12561*pms->eta) - 7200*var->e02*(-3277 + 12579*pms->eta) + 13*var->e08*(-271223 + 1081992*pms->eta))*pms->sigx - 9*pms->dm*(3824640 - 7009920*var->e02 + 1616320*var->e04 + 510160*var->e06 + 993969*var->e08)*pms->sx + 20*pms->cosp2Th0Phi*(-5*(19872 - 38088*var->e02 + 19482*var->e04 - 3225*var->e06 + 377*var->e08)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(34560 - 63360*var->e02 + 31920*var->e04 - 5280*var->e06 + 629*var->e08)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(pms->dm*var->e0*(9*pms->cosp2Th0Phi*(34790400 + 788309*var->e010 - 70560000*var->e02 + 45835200*var->e04 - 7794400*var->e06 + 2056000*var->e08)*(-1 + 2*pms->eta) + 5*(-691200*(3335 + 162*pms->eta) - 34560*var->e02*(-199709 + 15786*pms->eta) - 5280*var->e06*(99167 + 17010*pms->eta) + 2880*var->e04*(-1428721 + 291282*pms->eta) + 96*var->e08*(-9048803 + 1020204*pms->eta) + var->e010*(-759637919 + 67544814*pms->eta)))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/1061683200;
	COMPLEX16 PN1=(I/6502809600)*pms->dm*var->e0*(6096384000 + 171119760*var->e010 + 137822559*var->e012 + 110207935*var->e014 - 13615257600*var->e02 + 9186912000*var->e04 - 1236211200*var->e06 + 386033760*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl2_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/8294400)*var->e02*(3*pms->cosp2Th0Phi*(-768600 + 1411680*var->e02 - 670080*var->e04 + 141809*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 1800*(-102891 + 307883*pms->eta + 1305*pms->eta2) + 240*var->e02*(1442781 - 4420330*pms->eta + 314100*pms->eta2) - 180*var->e04*(710873 - 2261730*pms->eta + 447755*pms->eta2) + var->e06*(4324047 - 16396345*pms->eta + 13812165*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/232243200)*var->e02*(216518400 + 1044849*var->e010 - 421344000*var->e02 + 235418400*var->e04 - 36345120*var->e06 + 5685155*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl2_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/8294400*(var->e02*(3*pms->cosp2Th0Phi*(-768600 + 1411680*var->e02 - 670080*var->e04 + 141809*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 1800*(-102891 + 307883*pms->eta + 1305*pms->eta2) + 240*var->e02*(1442781 - 4420330*pms->eta + 314100*pms->eta2) - 180*var->e04*(710873 - 2261730*pms->eta + 447755*pms->eta2) + var->e06*(4324047 - 16396345*pms->eta + 13812165*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	COMPLEX16 PN2=-1.0/232243200*(var->e02*(216518400 + 1044849*var->e010 - 421344000*var->e02 + 235418400*var->e04 - 36345120*var->e06 + 5685155*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl2_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(pms->dm*var->e03*(421827840 - 819483840*var->e02 + 427595616*var->e04 - 58511012*var->e06 + 13524815*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/743178240;
	return PN3;
}

COMPLEX16 cpart_LPartsl2_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/743178240)*pms->dm*var->e03*(421827840 - 819483840*var->e02 + 427595616*var->e04 - 58511012*var->e06 + 13524815*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl2_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/44236800)*var->e04*(13916880 - 24910872*var->e02 + 11470519*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl2_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/44236800*(var->e04*(13916880 - 24910872*var->e02 + 11470519*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

COMPLEX16 spart_LPartsl3_km6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((268263*I)/367001600)*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl3_km6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(268263*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/367001600;
	return PN4;
}

COMPLEX16 spart_LPartsl3_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-9*pms->dm*(61942 + 25313*var->e02)*var->e08*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/146800640;
	return PN3;
}

COMPLEX16 cpart_LPartsl3_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=((9*I)/146800640)*pms->dm*(61942 + 25313*var->e02)*var->e08*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl3_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/2202009600)*var->e07*(var->e02*(249751928 - 664915995*pms->eta - 229108275*pms->eta2) + 27*pms->cosp2Th0Phi*(567520 + 277069*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 800*(426740 - 1463751*pms->eta + 467865*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=((3*I)/5872025600)*(25118720 + 14014400*var->e02 + 10196920*var->e04 + 7149447*var->e06)*var->e07*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl3_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e07*(var->e02*(249751928 - 664915995*pms->eta - 229108275*pms->eta2) + 27*pms->cosp2Th0Phi*(567520 + 277069*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 800*(426740 - 1463751*pms->eta + 467865*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/2202009600;
	COMPLEX16 PN2=(3*(25118720 + 14014400*var->e02 + 10196920*var->e04 + 7149447*var->e06)*var->e07*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/5872025600;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(9*var->e06*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((263438 + var->e02*(357833 - 1436747*pms->eta) - 1075242*pms->eta)*pms->sigx + 3*pms->dm*(190666 + 272865*var->e02)*pms->sx + 5*pms->cosp2Th0Phi*(-((4298 + 1083*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(1918 + 627*var->e02)*pms->sx))*var->vom6)/9175040;
	COMPLEX16 PN3=(-27*pms->dm*var->e06*(var->e04*(30414613 - 5843738*pms->eta) + pms->cosp2Th0Phi*(496384 + 112640*var->e02 + 151757*var->e04)*(-1 + 2*pms->eta) - 8192*var->e02*(-3621 + 631*pms->eta) - 8960*(-4761 + 898*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/1174405120;
	COMPLEX16 PN1=(-9*pms->dm*var->e06*(40140800 + 21872640*var->e02 + 19276800*var->e04 + 16158080*var->e06 + 13941963*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/11744051200;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(9*var->e06*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*((263438 + var->e02*(357833 - 1436747*pms->eta) - 1075242*pms->eta)*pms->sigx + 3*pms->dm*(190666 + 272865*var->e02)*pms->sx + 5*pms->cosp2Th0Phi*(-((4298 + 1083*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(1918 + 627*var->e02)*pms->sx))*var->vom6)/9175040;
	COMPLEX16 PN3=((27*I)/1174405120)*pms->dm*var->e06*(var->e04*(30414613 - 5843738*pms->eta) + pms->cosp2Th0Phi*(496384 + 112640*var->e02 + 151757*var->e04)*(-1 + 2*pms->eta) - 8192*var->e02*(-3621 + 631*pms->eta) - 8960*(-4761 + 898*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=((9*I)/11744051200)*pms->dm*var->e06*(40140800 + 21872640*var->e02 + 19276800*var->e04 + 16158080*var->e06 + 13941963*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl3_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/17616076800)*var->e05*pms->expm4Thm4Phi*(3*(79914688 + 73961832*var->e02 + 84068097*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 2592*(-4312 + 32788*var->e02 + 26431*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 12*(79914688 + 73961832*var->e02 + 84068097*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 16*(448*(1748524 - 5551565*pms->eta + 2203215*pms->eta2) + 56*var->e02*(-420793 + 1290930*pms->eta + 5800860*pms->eta2) + var->e04*(195019819 - 628071690*pms->eta + 592294680*pms->eta2))*pms->expp2Thp4Phi + 18*(79914688 + 73961832*var->e02 + 84068097*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 12*(79914688 + 73961832*var->e02 + 84068097*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 16*(448*(1748524 - 5551565*pms->eta + 2203215*pms->eta2) + 56*var->e02*(-420793 + 1290930*pms->eta + 5800860*pms->eta2) + var->e04*(195019819 - 628071690*pms->eta + 592294680*pms->eta2))*pms->expp6Thp4Phi + 3*(79914688 + 73961832*var->e02 + 84068097*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 2592*(-4312 + 32788*var->e02 + 26431*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 96*pms->expp4Thp4Phi*(112*(-21671473 + 2437295*pms->eta2 - 77760*pms->sigx2 + 573120*pms->kappa1*pms->sigx2 - 573120*pms->dm*pms->kappa1*pms->sigx2 + 573120*pms->kappa2*pms->sigx2 + 573120*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(3711115 + 1152*(344 + 199*pms->kappa1 + 199*pms->kappa2)*pms->sigx2) + 5760*(344*pms->dm + 199*(-1 + pms->dm)*pms->kappa1 + 199*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 5760*(344 + 199*pms->kappa1 + 199*pms->kappa2)*pms->sx2) + 56*var->e02*(1670655*pms->eta2 - 5*pms->eta*(3731753 + 1728*(803 + 424*pms->kappa1 + 424*pms->kappa2)*pms->sigx2) - 4*(8873179 + 540*(45 + 848*(-1 + pms->dm)*pms->kappa1 - 848*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 8640*(803*pms->dm + 424*(-1 + pms->dm)*pms->kappa1 + 424*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 8640*(803 + 424*pms->kappa1 + 424*pms->kappa2)*pms->sx2) + var->e04*(-3425377657 + 167120790*pms->eta2 - 4646160*pms->sigx2 + 144270000*pms->kappa1*pms->sigx2 - 144270000*pms->dm*pms->kappa1*pms->sigx2 + 144270000*pms->kappa2*pms->sigx2 + 144270000*pms->dm*pms->kappa2*pms->sigx2 - 60*pms->eta*(34068679 + 24*(387844 + 200375*pms->kappa1 + 200375*pms->kappa2)*pms->sigx2) + 1440*(387844*pms->dm + 200375*(-1 + pms->dm)*pms->kappa1 + 200375*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1440*(387844 + 200375*pms->kappa1 + 200375*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=((-3*I)/146800640)*var->e05*(25675776*pms->dm*pms->sigx + 28322560*pms->dm*var->e02*pms->sigx + 34037920*pms->dm*var->e04*pms->sigx + 37317563*pms->dm*var->e06*pms->sigx + 62146560*pms->sx + 72936192*var->e02*pms->sx + 88587936*var->e04*pms->sx + 98216955*var->e06*pms->sx + 9*pms->cosp2Th0Phi*(415744 + 84224*var->e02 + 71648*var->e04 + 40025*var->e06)*(pms->dm*pms->sigx + pms->sx) + (9*I)*(71680 + 41216*var->e02 + 38624*var->e04 + 31985*var->e06)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=((-3*I)/587202560)*var->e05*(pms->cosp2Th0Phi*(-1835008 + 974848*var->e02 + 239872*var->e04 + 274168*var->e06 + 214503*var->e08)*(-1 + 3*pms->eta) + 229376*(-1881 + 158*pms->eta) + 28672*var->e02*(-6774 + 215*pms->eta) + 256*var->e04*(-873201 + 40349*pms->eta) + 8*var->e06*(-24775125 + 1018453*pms->eta) + 3*var->e08*(-60523954 + 2436303*pms->eta))*var->vom4;
	COMPLEX16 PN0=((9*I)/117440512000)*var->e05*(779878400 + 62704497*var->e010 + 200704000*var->e02 + 176435200*var->e04 + 115216000*var->e06 + 83277000*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl3_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e05*pms->expm4Thm4Phi*(-3*(79914688 + 73961832*var->e02 + 84068097*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 2592*(-4312 + 32788*var->e02 + 26431*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 12*(79914688 + 73961832*var->e02 + 84068097*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 16*(448*(1748524 - 5551565*pms->eta + 2203215*pms->eta2) + 56*var->e02*(-420793 + 1290930*pms->eta + 5800860*pms->eta2) + var->e04*(195019819 - 628071690*pms->eta + 592294680*pms->eta2))*pms->expp2Thp4Phi - 18*(79914688 + 73961832*var->e02 + 84068097*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 12*(79914688 + 73961832*var->e02 + 84068097*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 16*(448*(1748524 - 5551565*pms->eta + 2203215*pms->eta2) + 56*var->e02*(-420793 + 1290930*pms->eta + 5800860*pms->eta2) + var->e04*(195019819 - 628071690*pms->eta + 592294680*pms->eta2))*pms->expp6Thp4Phi - 3*(79914688 + 73961832*var->e02 + 84068097*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 2592*(-4312 + 32788*var->e02 + 26431*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 96*pms->expp4Thp4Phi*(112*(-21671473 + 2437295*pms->eta2 - 77760*pms->sigx2 + 573120*pms->kappa1*pms->sigx2 - 573120*pms->dm*pms->kappa1*pms->sigx2 + 573120*pms->kappa2*pms->sigx2 + 573120*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(3711115 + 1152*(344 + 199*pms->kappa1 + 199*pms->kappa2)*pms->sigx2) + 5760*(344*pms->dm + 199*(-1 + pms->dm)*pms->kappa1 + 199*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 5760*(344 + 199*pms->kappa1 + 199*pms->kappa2)*pms->sx2) + 56*var->e02*(1670655*pms->eta2 - 5*pms->eta*(3731753 + 1728*(803 + 424*pms->kappa1 + 424*pms->kappa2)*pms->sigx2) - 4*(8873179 + 540*(45 + 848*(-1 + pms->dm)*pms->kappa1 - 848*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 8640*(803*pms->dm + 424*(-1 + pms->dm)*pms->kappa1 + 424*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 8640*(803 + 424*pms->kappa1 + 424*pms->kappa2)*pms->sx2) + var->e04*(-3425377657 + 167120790*pms->eta2 - 4646160*pms->sigx2 + 144270000*pms->kappa1*pms->sigx2 - 144270000*pms->dm*pms->kappa1*pms->sigx2 + 144270000*pms->kappa2*pms->sigx2 + 144270000*pms->dm*pms->kappa2*pms->sigx2 - 60*pms->eta*(34068679 + 24*(387844 + 200375*pms->kappa1 + 200375*pms->kappa2)*pms->sigx2) + 1440*(387844*pms->dm + 200375*(-1 + pms->dm)*pms->kappa1 + 200375*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1440*(387844 + 200375*pms->kappa1 + 200375*pms->kappa2)*pms->sx2)))*var->vom6)/17616076800;
	COMPLEX16 PN3=(-3*var->e05*(25675776*pms->dm*pms->sigx + 28322560*pms->dm*var->e02*pms->sigx + 34037920*pms->dm*var->e04*pms->sigx + 37317563*pms->dm*var->e06*pms->sigx + 62146560*pms->sx + 72936192*var->e02*pms->sx + 88587936*var->e04*pms->sx + 98216955*var->e06*pms->sx + 18*pms->cosp2Th0Phi*(157696 + 51968*var->e02 + 46880*var->e04 + 33995*var->e06)*(pms->dm*pms->sigx + pms->sx) + (108*I)*(14336 + 1792*var->e02 + 1376*var->e04 + 335*var->e06)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/146800640;
	COMPLEX16 PN2=(-3*var->e05*(pms->cosp2Th0Phi*(-1835008 + 974848*var->e02 + 239872*var->e04 + 274168*var->e06 + 214503*var->e08)*(-1 + 3*pms->eta) + 229376*(-1881 + 158*pms->eta) + 28672*var->e02*(-6774 + 215*pms->eta) + 256*var->e04*(-873201 + 40349*pms->eta) + 8*var->e06*(-24775125 + 1018453*pms->eta) + 3*var->e08*(-60523954 + 2436303*pms->eta))*var->vom4)/587202560;
	COMPLEX16 PN0=(9*var->e05*(779878400 + 62704497*var->e010 + 200704000*var->e02 + 176435200*var->e04 + 115216000*var->e06 + 83277000*var->e08)*var->vom2)/117440512000;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e04*pms->exp0Thm3Phi*pms->sinp1Th0Phi*((-((2191040 + 1918464*var->e02 + 2377587*var->e04)*(-1 + 3*pms->eta)) + (768*var->e02*(-64483 + 273317*pms->eta) + 640*(-133161 + 485467*pms->eta) + 6*var->e04*(-12596615 + 48049269*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(-81*(2240 - 576*var->e02 + 147*var->e04) + 2*(98957120 + 61279296*var->e02 + 86664621*var->e04)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(2191040 + 1918464*var->e02 + 2377587*var->e04 + 2*(479680 + 398208*var->e02 + 504159*var->e04)*pms->exp0Thp2Phi)*pms->sigx + 81*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/15728640;
	COMPLEX16 PN3=(pms->dm*var->e04*pms->exp0Thm3Phi*(6*(6482560 + 3622528*var->e02 + 3806320*var->e04 + 3644015*var->e06)*(-1 + 2*pms->eta) + (var->e06*(511068439 - 4072734*pms->eta) + 4480*(432653 + 23382*pms->eta) - 448*var->e02*(570763 + 144666*pms->eta) + 14*var->e04*(47082751 + 889650*pms->eta))*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-2*(6482560 + 3622528*var->e02 + 3806320*var->e04 + 3644015*var->e06) + (6267520 + 8830528*var->e02 + 5667382*var->e04 + 6411365*var->e06)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/220200960;
	COMPLEX16 PN1=(-9*pms->dm*var->e04*(11468800 + 490353*var->e010 - 1605632*var->e02 + 1648640*var->e04 + 756224*var->e06 + 622550*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/587202560;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/15728640*I)*var->e04*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(((2191040 + 1918464*var->e02 + 2377587*var->e04)*(-1 + 3*pms->eta) + (768*var->e02*(-64483 + 273317*pms->eta) + 640*(-133161 + 485467*pms->eta) + 6*var->e04*(-12596615 + 48049269*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(81*(2240 - 576*var->e02 + 147*var->e04) + 2*(98957120 + 61279296*var->e02 + 86664621*var->e04)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(-2191040 - 1918464*var->e02 - 2377587*var->e04 + 2*(479680 + 398208*var->e02 + 504159*var->e04)*pms->exp0Thp2Phi)*pms->sigx + 81*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(-1.0/220200960*I)*pms->dm*var->e04*pms->exp0Thm3Phi*(-6*(6482560 + 3622528*var->e02 + 3806320*var->e04 + 3644015*var->e06)*(-1 + 2*pms->eta) + (var->e06*(511068439 - 4072734*pms->eta) + 4480*(432653 + 23382*pms->eta) - 448*var->e02*(570763 + 144666*pms->eta) + 14*var->e04*(47082751 + 889650*pms->eta))*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(12965120 + 7245056*var->e02 + 7612640*var->e04 + 7288030*var->e06 + (6267520 + 8830528*var->e02 + 5667382*var->e04 + 6411365*var->e06)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(9*pms->dm*var->e04*(11468800 + 490353*var->e010 - 1605632*var->e02 + 1648640*var->e04 + 756224*var->e06 + 622550*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/587202560;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl3_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/5242880)*var->e03*(var->e06*(8834493 - 24114773*pms->eta - 10396711*pms->eta2) + pms->cosp2Th0Phi*(1448960 - 144960*var->e02 - 339816*var->e04 + 107459*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 5120*(-3963 + 10475*pms->eta + 11065*pms->eta2) - 960*var->e02*(-58359 + 158543*pms->eta + 90277*pms->eta2) + 24*var->e04*(-847281 + 2374481*pms->eta + 1188763*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=((27*I)/1677721600)*var->e03*(-91750400 + 1102001*var->e010 + 97484800*var->e02 - 25948160*var->e04 + 6540800*var->e06 + 967520*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl3_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e03*(9*pms->cosp2Th0Phi*(49433600 + 17818560*var->e02 + 30580632*var->e04 + 34198639*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 25600*(-35271 + 62041*pms->eta + 35151*pms->eta2) - 320*var->e02*(-12258987 + 33557185*pms->eta + 14607375*pms->eta2) - 24*var->e04*(-39062157 + 81103355*pms->eta + 28675245*pms->eta2) - 3*var->e06*(-830367717 + 2112199895*pms->eta + 857722185*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6)/235929600;
	COMPLEX16 PN2=-1.0/35232153600*(var->e03*(84318617600 + 5382858681*var->e010 - 48071475200*var->e02 + 23477637120*var->e04 + 3861419520*var->e06 + 6079329120*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e02*pms->exp0Thm3Phi*pms->sinp1Th0Phi*((2914560 - 2469760*var->e02 + 1690890*var->e04 + 363963*var->e06)*(-1 + 3*pms->eta)*pms->sigx - 2*(3840*(7511 + 18251*pms->eta) - 640*var->e02*(30375 + 52507*pms->eta) + 30*var->e04*(-333109 + 1334415*pms->eta) + 9*var->e06*(-1236497 + 2693571*pms->eta))*pms->exp0Thp2Phi*pms->sigx + pms->dm*(-81*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06) + (84426240 - 55781120*var->e02 + 49789740*var->e04 + 23990526*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(-2914560 + 2469760*var->e02 - 1690890*var->e04 - 363963*var->e06 + 2*(-779520 + 1512320*var->e02 - 929730*var->e04 + 65349*var->e06)*pms->exp0Thp2Phi)*pms->sigx - 81*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/3932160;
	COMPLEX16 PN3=-1.0/251658240*(pms->dm*var->e02*pms->exp0Thm3Phi*(3*(147374080 - 243875840*var->e02 + 158139520*var->e04 - 32878336*var->e06 + 13580789*var->e08)*(-1 + 2*pms->eta) + 2*(var->e08*(174979447 - 13846518*pms->eta) - 245760*(-849 + 1226*pms->eta) + 40960*var->e02*(-16135 + 15822*pms->eta) - 1280*var->e04*(-282715 + 294498*pms->eta) + 64*var->e06*(1472717 + 1596246*pms->eta))*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-147374080 + 243875840*var->e02 - 158139520*var->e04 + 32878336*var->e06 - 13580789*var->e08 + (52592640 - 31866880*var->e02 + 21639680*var->e04 + 3914624*var->e06 + 7350394*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(3*pms->dm*var->e02*(734003200 + 55012992*var->e010 + 41957429*var->e012 + 3303014400*var->e02 - 1840742400*var->e04 + 518963200*var->e06 + 5832960*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/23488102400;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/3932160*I)*var->e02*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(((2914560 - 2469760*var->e02 + 1690890*var->e04 + 363963*var->e06)*(-1 + 3*pms->eta) + 2*(3840*(7511 + 18251*pms->eta) - 640*var->e02*(30375 + 52507*pms->eta) + 30*var->e04*(-333109 + 1334415*pms->eta) + 9*var->e06*(-1236497 + 2693571*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(81*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06) + (84426240 - 55781120*var->e02 + 49789740*var->e04 + 23990526*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(2914560 - 2469760*var->e02 + 1690890*var->e04 + 363963*var->e06 + 2*(-779520 + 1512320*var->e02 - 929730*var->e04 + 65349*var->e06)*pms->exp0Thp2Phi)*pms->sigx) + 81*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(-1.0/251658240*I)*pms->dm*var->e02*pms->exp0Thm3Phi*(-3*(147374080 - 243875840*var->e02 + 158139520*var->e04 - 32878336*var->e06 + 13580789*var->e08)*(-1 + 2*pms->eta) + 2*(var->e08*(174979447 - 13846518*pms->eta) - 245760*(-849 + 1226*pms->eta) + 40960*var->e02*(-16135 + 15822*pms->eta) - 1280*var->e04*(-282715 + 294498*pms->eta) + 64*var->e06*(1472717 + 1596246*pms->eta))*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(147374080 - 243875840*var->e02 + 158139520*var->e04 - 32878336*var->e06 + 13580789*var->e08 + (52592640 - 31866880*var->e02 + 21639680*var->e04 + 3914624*var->e06 + 7350394*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(3*pms->dm*var->e02*(734003200 + 55012992*var->e010 + 41957429*var->e012 + 3303014400*var->e02 - 1840742400*var->e04 + 518963200*var->e06 + 5832960*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/23488102400;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl3_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/7549747200*I)*var->e0*pms->expm4Thm4Phi*(18*(66682880 - 213550080*var->e02 + 254104960*var->e04 - 119484240*var->e06 + 36577747*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) + 27*(-2703360 + 4044800*var->e02 + 8723200*var->e04 - 3555760*var->e06 + 2790643*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 72*(66682880 - 213550080*var->e02 + 254104960*var->e04 - 119484240*var->e06 + 36577747*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 4*(-81920*(-96327 + 277805*pms->eta + 17175*pms->eta2) - 51200*var->e02*(483849 - 1457491*pms->eta + 93495*pms->eta2) + 6400*var->e04*(2049855 - 6517153*pms->eta + 2194005*pms->eta2) - 240*var->e06*(22294769 - 73045815*pms->eta + 32356755*pms->eta2) + 3*var->e08*(-232203919 + 549066605*pms->eta + 1045705575*pms->eta2))*pms->expp2Thp4Phi + 108*(66682880 - 213550080*var->e02 + 254104960*var->e04 - 119484240*var->e06 + 36577747*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 72*(66682880 - 213550080*var->e02 + 254104960*var->e04 - 119484240*var->e06 + 36577747*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 4*(-81920*(-96327 + 277805*pms->eta + 17175*pms->eta2) - 51200*var->e02*(483849 - 1457491*pms->eta + 93495*pms->eta2) + 6400*var->e04*(2049855 - 6517153*pms->eta + 2194005*pms->eta2) - 240*var->e06*(22294769 - 73045815*pms->eta + 32356755*pms->eta2) + 3*var->e08*(-232203919 + 549066605*pms->eta + 1045705575*pms->eta2))*pms->expp6Thp4Phi + 18*(66682880 - 213550080*var->e02 + 254104960*var->e04 - 119484240*var->e06 + 36577747*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 27*(-2703360 + 4044800*var->e02 + 8723200*var->e04 - 3555760*var->e06 + 2790643*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 6*pms->expp4Thp4Phi*(-81920*(2025699 + 18855*pms->eta2 + 40320*pms->sigx2 + 74880*pms->kappa1*pms->sigx2 - 74880*pms->dm*pms->kappa1*pms->sigx2 + 74880*pms->kappa2*pms->sigx2 + 74880*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(65419 + 2304*(40 + 13*pms->kappa1 + 13*pms->kappa2)*pms->sigx2) + 11520*(40*pms->dm + 13*(-1 + pms->dm)*pms->kappa1 + 13*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 11520*(40 + 13*pms->kappa1 + 13*pms->kappa2)*pms->sx2) + 51200*var->e02*(20038125 - 57687*pms->eta2 + 141696*pms->sigx2 + 311040*pms->kappa1*pms->sigx2 - 311040*pms->dm*pms->kappa1*pms->sigx2 + 311040*pms->kappa2*pms->sigx2 + 311040*pms->dm*pms->kappa2*pms->sigx2 - pms->eta*(1584409 + 13824*(131 + 45*pms->kappa1 + 45*pms->kappa2)*pms->sigx2) + 13824*(131*pms->dm + 45*(-1 + pms->dm)*pms->kappa1 + 45*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 13824*(131 + 45*pms->kappa1 + 45*pms->kappa2)*pms->sx2) + 240*var->e06*(1620484913 - 6291955*pms->eta2 + 3384960*pms->sigx2 + 38572800*pms->kappa1*pms->sigx2 - 38572800*pms->dm*pms->kappa1*pms->sigx2 + 38572800*pms->kappa2*pms->sigx2 + 38572800*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(35656339 + 20992*(533 + 245*pms->kappa1 + 245*pms->kappa2)*pms->sigx2) + 314880*(533*pms->dm + 245*(-1 + pms->dm)*pms->kappa1 + 245*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 314880*(533 + 245*pms->kappa1 + 245*pms->kappa2)*pms->sx2) + 6400*var->e04*(34760745 + 433029*pms->eta2 - 3456*(163 + 265*(-1 + pms->dm)*pms->kappa1 - 265*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - pms->eta*(10041173 + 6912*(204 + 265*pms->kappa1 + 265*pms->kappa2)*pms->sigx2) + 6912*(204*pms->dm + 265*(-1 + pms->dm)*pms->kappa1 + 265*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 6912*(204 + 265*pms->kappa1 + 265*pms->kappa2)*pms->sx2) + 3*var->e08*(120909145043 + 360278775*pms->eta2 - 25971840*pms->sigx2 + 3270049920*pms->kappa1*pms->sigx2 - 3270049920*pms->dm*pms->kappa1*pms->sigx2 + 3270049920*pms->kappa2*pms->sigx2 + 3270049920*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(8151568859 + 6912*(375472 + 189239*pms->kappa1 + 189239*pms->kappa2)*pms->sigx2) + 34560*(375472*pms->dm + 189239*(-1 + pms->dm)*pms->kappa1 + 189239*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 34560*(375472 + 189239*pms->kappa1 + 189239*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=(-1.0/52428800*I)*var->e0*(5*pms->cosp2Th0Phi*(-36044800 + 32019*var->e010 + 91504640*var->e02 - 67471360*var->e04 + 18913920*var->e06 - 3396600*var->e08)*(pms->dm*pms->sigx + pms->sx) + I*(3276800 + 402423*var->e010 - 37273600*var->e02 + 41523200*var->e04 - 11798400*var->e06 + 2897640*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx) - 3*(5*pms->dm*(-26869760 + 14038757*var->e010 + 87408640*var->e02 - 16250880*var->e04 + 20638080*var->e06 + 13223928*var->e08)*pms->sigx + (-396492800 + 210488601*var->e010 + 1157939200*var->e02 - 131225600*var->e04 + 277987200*var->e06 + 203370840*var->e08)*pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/8808038400*I)*var->e0*(pms->cosp2Th0Phi*(7523532800 - 81718392*var->e010 + 6800111*var->e012 - 16492134400*var->e02 + 12366233600*var->e04 - 4143283200*var->e06 + 750966720*var->e08)*(-1 + 3*pms->eta) + 3*(-711065600*var->e02*(-269 + 3*pms->eta) - 2018508800*(19 + 3*pms->eta) + 2867200*var->e04*(-33281 + 4983*pms->eta) - 537600*var->e06*(-61047 + 12545*pms->eta) + 168*var->e010*(45356855 + 194327*pms->eta) + 6720*var->e08*(638369 + 264065*pms->eta) + var->e012*(7023648505 + 206073297*pms->eta)))*var->vom4;
	COMPLEX16 PN0=((9*I)/164416716800)*var->e0*(41104179200 - 130670848*var->e010 + 135815904*var->e012 + 86866881*var->e014 - 97622425600*var->e02 + 68721049600*var->e04 - 19227443200*var->e06 + 3271976960*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl3_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e0*pms->expm4Thm4Phi*(-18*(66682880 - 213550080*var->e02 + 254104960*var->e04 - 119484240*var->e06 + 36577747*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) + 27*(-2703360 + 4044800*var->e02 + 8723200*var->e04 - 3555760*var->e06 + 2790643*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 72*(66682880 - 213550080*var->e02 + 254104960*var->e04 - 119484240*var->e06 + 36577747*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 4*(-81920*(-96327 + 277805*pms->eta + 17175*pms->eta2) - 51200*var->e02*(483849 - 1457491*pms->eta + 93495*pms->eta2) + 6400*var->e04*(2049855 - 6517153*pms->eta + 2194005*pms->eta2) - 240*var->e06*(22294769 - 73045815*pms->eta + 32356755*pms->eta2) + 3*var->e08*(-232203919 + 549066605*pms->eta + 1045705575*pms->eta2))*pms->expp2Thp4Phi - 108*(66682880 - 213550080*var->e02 + 254104960*var->e04 - 119484240*var->e06 + 36577747*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 72*(66682880 - 213550080*var->e02 + 254104960*var->e04 - 119484240*var->e06 + 36577747*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 4*(-81920*(-96327 + 277805*pms->eta + 17175*pms->eta2) - 51200*var->e02*(483849 - 1457491*pms->eta + 93495*pms->eta2) + 6400*var->e04*(2049855 - 6517153*pms->eta + 2194005*pms->eta2) - 240*var->e06*(22294769 - 73045815*pms->eta + 32356755*pms->eta2) + 3*var->e08*(-232203919 + 549066605*pms->eta + 1045705575*pms->eta2))*pms->expp6Thp4Phi - 18*(66682880 - 213550080*var->e02 + 254104960*var->e04 - 119484240*var->e06 + 36577747*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 27*(-2703360 + 4044800*var->e02 + 8723200*var->e04 - 3555760*var->e06 + 2790643*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 6*pms->expp4Thp4Phi*(-81920*(2025699 + 18855*pms->eta2 + 40320*pms->sigx2 + 74880*pms->kappa1*pms->sigx2 - 74880*pms->dm*pms->kappa1*pms->sigx2 + 74880*pms->kappa2*pms->sigx2 + 74880*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(65419 + 2304*(40 + 13*pms->kappa1 + 13*pms->kappa2)*pms->sigx2) + 11520*(40*pms->dm + 13*(-1 + pms->dm)*pms->kappa1 + 13*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 11520*(40 + 13*pms->kappa1 + 13*pms->kappa2)*pms->sx2) + 51200*var->e02*(20038125 - 57687*pms->eta2 + 141696*pms->sigx2 + 311040*pms->kappa1*pms->sigx2 - 311040*pms->dm*pms->kappa1*pms->sigx2 + 311040*pms->kappa2*pms->sigx2 + 311040*pms->dm*pms->kappa2*pms->sigx2 - pms->eta*(1584409 + 13824*(131 + 45*pms->kappa1 + 45*pms->kappa2)*pms->sigx2) + 13824*(131*pms->dm + 45*(-1 + pms->dm)*pms->kappa1 + 45*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 13824*(131 + 45*pms->kappa1 + 45*pms->kappa2)*pms->sx2) + 240*var->e06*(1620484913 - 6291955*pms->eta2 + 3384960*pms->sigx2 + 38572800*pms->kappa1*pms->sigx2 - 38572800*pms->dm*pms->kappa1*pms->sigx2 + 38572800*pms->kappa2*pms->sigx2 + 38572800*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(35656339 + 20992*(533 + 245*pms->kappa1 + 245*pms->kappa2)*pms->sigx2) + 314880*(533*pms->dm + 245*(-1 + pms->dm)*pms->kappa1 + 245*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 314880*(533 + 245*pms->kappa1 + 245*pms->kappa2)*pms->sx2) + 6400*var->e04*(34760745 + 433029*pms->eta2 - 3456*(163 + 265*(-1 + pms->dm)*pms->kappa1 - 265*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - pms->eta*(10041173 + 6912*(204 + 265*pms->kappa1 + 265*pms->kappa2)*pms->sigx2) + 6912*(204*pms->dm + 265*(-1 + pms->dm)*pms->kappa1 + 265*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 6912*(204 + 265*pms->kappa1 + 265*pms->kappa2)*pms->sx2) + 3*var->e08*(120909145043 + 360278775*pms->eta2 - 25971840*pms->sigx2 + 3270049920*pms->kappa1*pms->sigx2 - 3270049920*pms->dm*pms->kappa1*pms->sigx2 + 3270049920*pms->kappa2*pms->sigx2 + 3270049920*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(8151568859 + 6912*(375472 + 189239*pms->kappa1 + 189239*pms->kappa2)*pms->sigx2) + 34560*(375472*pms->dm + 189239*(-1 + pms->dm)*pms->kappa1 + 189239*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 34560*(375472 + 189239*pms->kappa1 + 189239*pms->kappa2)*pms->sx2)))*var->vom6)/7549747200;
	COMPLEX16 PN3=(var->e0*(2*pms->cosp2Th0Phi*(-42598400 + 341841*var->e010 + 86425600*var->e02 - 53196800*var->e04 + 14793600*var->e06 - 2072520*var->e08)*(pms->dm*pms->sigx + pms->sx) - (4*I)*(22937600 + 30291*var->e010 - 61849600*var->e02 + 47360000*var->e04 - 13296000*var->e06 + 2485080*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx) - 3*(5*pms->dm*(-26869760 + 14038757*var->e010 + 87408640*var->e02 - 16250880*var->e04 + 20638080*var->e06 + 13223928*var->e08)*pms->sigx + (-396492800 + 210488601*var->e010 + 1157939200*var->e02 - 131225600*var->e04 + 277987200*var->e06 + 203370840*var->e08)*pms->sx))*var->vom5)/52428800;
	COMPLEX16 PN2=(var->e0*(pms->cosp2Th0Phi*(7523532800 - 81718392*var->e010 + 6800111*var->e012 - 16492134400*var->e02 + 12366233600*var->e04 - 4143283200*var->e06 + 750966720*var->e08)*(-1 + 3*pms->eta) + 3*(-711065600*var->e02*(-269 + 3*pms->eta) - 2018508800*(19 + 3*pms->eta) + 2867200*var->e04*(-33281 + 4983*pms->eta) - 537600*var->e06*(-61047 + 12545*pms->eta) + 168*var->e010*(45356855 + 194327*pms->eta) + 6720*var->e08*(638369 + 264065*pms->eta) + var->e012*(7023648505 + 206073297*pms->eta)))*var->vom4)/8808038400;
	COMPLEX16 PN0=(-9*var->e0*(41104179200 - 130670848*var->e010 + 135815904*var->e012 + 86866881*var->e014 - 97622425600*var->e02 + 68721049600*var->e04 - 19227443200*var->e06 + 3271976960*var->e08)*var->vom2)/164416716800;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/6291456*(pms->exp0Thp1Phi*pms->sinp1Th0Phi*((81920*(-169 + 603*pms->eta) - 147456*var->e02*(-1127 + 4253*pms->eta) - 2048*var->e06*(-54164 + 199071*pms->eta) + 768*var->e04*(-327833 + 1233387*pms->eta) + 15*var->e08*(-739783 + 2310261*pms->eta))*pms->sigx - 3*pms->dm*(15319040 - 157974528*var->e02 + 217008384*var->e04 - 83544832*var->e06 + 5565387*var->e08)*pms->sx + 5*pms->cosp2Th0Phi*(-((1196032 - 7520256*var->e02 + 11972352*var->e04 - 7202816*var->e06 + 1946613*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(16384 - 98304*var->e02 + 151296*var->e04 - 89344*var->e06 + 23997*var->e08)*pms->sx))*var->vom6);
	COMPLEX16 PN3=-1.0/78643200*(pms->dm*(15*pms->cosp2Th0Phi*(-2048000 + 620139*var->e010 + 9502720*var->e02 - 14965760*var->e04 + 10293120*var->e06 - 3139335*var->e08)*(-1 + 2*pms->eta) - 1638400*var->e02*(2540 + 9*pms->eta) + 409600*(277 + 222*pms->eta) - 25600*var->e04*(-355813 + 37836*pms->eta) + 9600*var->e06*(-617501 + 133378*pms->eta) - 225*var->e08*(-3680359 + 1949606*pms->eta) + 3*var->e010*(-187600949 + 41751774*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(3*pms->dm*(-1284505600 + 482517504*var->e010 + 7403851*var->e012 + 39928869*var->e014 + 7707033600*var->e02 - 13427097600*var->e04 + 9372876800*var->e06 - 2587905600*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/5138022400;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/6291456*I)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((81920*(-169 + 603*pms->eta) - 147456*var->e02*(-1127 + 4253*pms->eta) - 2048*var->e06*(-54164 + 199071*pms->eta) + 768*var->e04*(-327833 + 1233387*pms->eta) + 15*var->e08*(-739783 + 2310261*pms->eta))*pms->sigx - 3*pms->dm*(15319040 - 157974528*var->e02 + 217008384*var->e04 - 83544832*var->e06 + 5565387*var->e08)*pms->sx + 5*pms->cosp2Th0Phi*(-((1196032 - 7520256*var->e02 + 11972352*var->e04 - 7202816*var->e06 + 1946613*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(16384 - 98304*var->e02 + 151296*var->e04 - 89344*var->e06 + 23997*var->e08)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(pms->dm*(15*pms->cosp2Th0Phi*(-2048000 + 620139*var->e010 + 9502720*var->e02 - 14965760*var->e04 + 10293120*var->e06 - 3139335*var->e08)*(-1 + 2*pms->eta) - 1638400*var->e02*(2540 + 9*pms->eta) + 409600*(277 + 222*pms->eta) - 25600*var->e04*(-355813 + 37836*pms->eta) + 9600*var->e06*(-617501 + 133378*pms->eta) - 225*var->e08*(-3680359 + 1949606*pms->eta) + 3*var->e010*(-187600949 + 41751774*pms->eta))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/78643200;
	COMPLEX16 PN1=((3*I)/5138022400)*pms->dm*(-1284505600 + 482517504*var->e010 + 7403851*var->e012 + 39928869*var->e014 + 7707033600*var->e02 - 13427097600*var->e04 + 9372876800*var->e06 - 2587905600*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl3_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/471859200)*var->e0*(36*pms->cosp2Th0Phi*(10485760 - 37632000*var->e02 + 48544640*var->e04 - 27313960*var->e06 + 7851037*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 245760*(-42921 + 124270*pms->eta + 11520*pms->eta2) - 51200*var->e02*(1376619 - 4139318*pms->eta + 86964*pms->eta2) + 3840*var->e04*(26191401 - 80584040*pms->eta + 7652790*pms->eta2) - 80*var->e06*(621796857 - 1966573000*pms->eta + 374117430*pms->eta2) + 3*var->e08*(3106381429 - 10212964930*pms->eta + 3444535860*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(-1.0/2202009600*I)*var->e0*(4128768000 - 598072720*var->e010 + 38514649*var->e012 - 16767385600*var->e02 + 23310336000*var->e04 - 13886297600*var->e06 + 3724523040*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl3_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/471859200*(var->e0*(36*pms->cosp2Th0Phi*(10485760 - 37632000*var->e02 + 48544640*var->e04 - 27313960*var->e06 + 7851037*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 245760*(-42921 + 124270*pms->eta + 11520*pms->eta2) - 51200*var->e02*(1376619 - 4139318*pms->eta + 86964*pms->eta2) + 3840*var->e04*(26191401 - 80584040*pms->eta + 7652790*pms->eta2) - 80*var->e06*(621796857 - 1966573000*pms->eta + 374117430*pms->eta2) + 3*var->e08*(3106381429 - 10212964930*pms->eta + 3444535860*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	COMPLEX16 PN2=(var->e0*(4128768000 - 598072720*var->e010 + 38514649*var->e012 - 16767385600*var->e02 + 23310336000*var->e04 - 13886297600*var->e06 + 3724523040*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/2202009600;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl3_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/655360*(pms->dm*var->e02*(1438720 - 5041920*var->e02 + 6395700*var->e04 - 3536114*var->e06 + 904713*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN3;
}

COMPLEX16 cpart_LPartsl3_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-1.0/655360*I)*pms->dm*var->e02*(1438720 - 5041920*var->e02 + 6395700*var->e04 - 3536114*var->e06 + 904713*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl3_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/52428800)*var->e03*(-98247680 + 320892480*var->e02 - 377443896*var->e04 + 194080131*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl3_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/52428800*(var->e03*(-98247680 + 320892480*var->e02 - 377443896*var->e04 + 194080131*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

COMPLEX16 spart_LPartsl4_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/87091200*(pms->dm*(449900 + 149119*var->e02)*var->e09*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN3;
}

COMPLEX16 cpart_LPartsl4_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/87091200)*pms->dm*(449900 + 149119*var->e02)*var->e09*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl4_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/11612160)*var->e08*(-2930763 + 9854561*pms->eta - 2700000*pms->eta2 + 133872*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/43545600)*(664920 + 291080*var->e02 + 234081*var->e04)*var->e08*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl4_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e08*(-2930763 + 9854561*pms->eta - 2700000*pms->eta2 + 133872*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/11612160;
	COMPLEX16 PN2=((664920 + 291080*var->e02 + 234081*var->e04)*var->e08*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/43545600;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e07*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((9646152 - 39583008*pms->eta - 5*var->e02*(-2246603 + 9015852*pms->eta))*pms->sigx + 153*pms->dm*(134296 + 168109*var->e02)*pms->sx + 640*pms->cosp2Th0Phi*(-10*(156 + 23*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(684 + 145*var->e02)*pms->sx))*var->vom6)/30965760;
	COMPLEX16 PN3=-1.0/1114767360*(pms->dm*var->e07*(var->e04*(787280743 - 149979840*pms->eta) + 288*pms->cosp2Th0Phi*(70320 + 5028*var->e02 + 19459*var->e04)*(-1 + 2*pms->eta) - 288*(-4705163 + 908640*pms->eta) - 36*var->e02*(-18250777 + 3009600*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=-1.0/1916006400*(pms->dm*var->e07*(63296640 + 25043040*var->e02 + 26058120*var->e04 + 21362616*var->e06 + 18587717*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e07*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*((9646152 - 39583008*pms->eta - 5*var->e02*(-2246603 + 9015852*pms->eta))*pms->sigx + 153*pms->dm*(134296 + 168109*var->e02)*pms->sx + 640*pms->cosp2Th0Phi*(-10*(156 + 23*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(684 + 145*var->e02)*pms->sx))*var->vom6)/30965760;
	COMPLEX16 PN3=(I/1114767360)*pms->dm*var->e07*(var->e04*(787280743 - 149979840*pms->eta) + 288*pms->cosp2Th0Phi*(70320 + 5028*var->e02 + 19459*var->e04)*(-1 + 2*pms->eta) - 288*(-4705163 + 908640*pms->eta) - 36*var->e02*(-18250777 + 3009600*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(I/1916006400)*pms->dm*var->e07*(63296640 + 25043040*var->e02 + 26058120*var->e04 + 21362616*var->e06 + 18587717*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl4_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/7431782400)*var->e06*pms->expm4Thm4Phi*(3*(44685858 + 31660817*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 18*(-1183266 + 2944751*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 12*(44685858 + 31660817*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(98*(11388591 - 36079555*pms->eta + 12711315*pms->eta2) + var->e02*(-264831153 + 844913725*pms->eta + 47507235*pms->eta2))*pms->expp2Thp4Phi + 18*(44685858 + 31660817*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 12*(44685858 + 31660817*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(98*(11388591 - 36079555*pms->eta + 12711315*pms->eta2) + var->e02*(-264831153 + 844913725*pms->eta + 47507235*pms->eta2))*pms->expp6Thp4Phi + 3*(44685858 + 31660817*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 18*(-1183266 + 2944751*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 12*pms->expp4Thp4Phi*(14*(-843278719 + 97875045*pms->eta2 - 2949120*pms->sigx2 + 17925120*pms->kappa1*pms->sigx2 - 17925120*pms->dm*pms->kappa1*pms->sigx2 + 17925120*pms->kappa2*pms->sigx2 + 17925120*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(142666273 + 18432*(650 + 389*pms->kappa1 + 389*pms->kappa2)*pms->sigx2) + 92160*(650*pms->dm + 389*(-1 + pms->dm)*pms->kappa1 + 389*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 92160*(650 + 389*pms->kappa1 + 389*pms->kappa2)*pms->sx2) + var->e02*(-6063023289 + 65121475*pms->eta2 - 20643840*pms->sigx2 + 346368000*pms->kappa1*pms->sigx2 - 346368000*pms->dm*pms->kappa1*pms->sigx2 + 346368000*pms->kappa2*pms->sigx2 + 346368000*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(76888845 + 4096*(21206 + 11275*pms->kappa1 + 11275*pms->kappa2)*pms->sigx2) + 61440*(21206*pms->dm + 11275*(-1 + pms->dm)*pms->kappa1 + 11275*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 61440*(21206 + 11275*pms->kappa1 + 11275*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=(-1.0/241920*I)*var->e06*(147280*pms->dm*pms->sigx + 130376*pms->dm*var->e02*pms->sigx + 164141*pms->dm*var->e04*pms->sigx + 350448*pms->sx + 336984*var->e02*pms->sx + 423447*var->e04*pms->sx + 12*pms->cosp2Th0Phi*(2128 + 136*var->e02 + 369*var->e04)*(pms->dm*pms->sigx + pms->sx) + (12*I)*(336 + 136*var->e02 + 161*var->e04)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/26127360*I)*var->e06*(pms->cosp2Th0Phi*(-429408 + 222480*var->e02 - 13662*var->e04 + 31711*var->e06)*(-1 + 3*pms->eta) - 432*var->e02*(36177 + 605*pms->eta) + 6048*(-11349 + 1033*pms->eta) + 54*var->e04*(-554811 + 29459*pms->eta) + var->e06*(-24477327 + 988831*pms->eta))*var->vom4;
	COMPLEX16 PN0=(I/21772800)*var->e06*(1330560 + 146880*var->e02 + 286200*var->e04 + 170980*var->e06 + 128567*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl4_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e06*pms->expm4Thm4Phi*(-3*(44685858 + 31660817*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 18*(-1183266 + 2944751*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 12*(44685858 + 31660817*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(98*(11388591 - 36079555*pms->eta + 12711315*pms->eta2) + var->e02*(-264831153 + 844913725*pms->eta + 47507235*pms->eta2))*pms->expp2Thp4Phi - 18*(44685858 + 31660817*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 12*(44685858 + 31660817*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(98*(11388591 - 36079555*pms->eta + 12711315*pms->eta2) + var->e02*(-264831153 + 844913725*pms->eta + 47507235*pms->eta2))*pms->expp6Thp4Phi - 3*(44685858 + 31660817*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 18*(-1183266 + 2944751*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 12*pms->expp4Thp4Phi*(14*(-843278719 + 97875045*pms->eta2 - 2949120*pms->sigx2 + 17925120*pms->kappa1*pms->sigx2 - 17925120*pms->dm*pms->kappa1*pms->sigx2 + 17925120*pms->kappa2*pms->sigx2 + 17925120*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(142666273 + 18432*(650 + 389*pms->kappa1 + 389*pms->kappa2)*pms->sigx2) + 92160*(650*pms->dm + 389*(-1 + pms->dm)*pms->kappa1 + 389*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 92160*(650 + 389*pms->kappa1 + 389*pms->kappa2)*pms->sx2) + var->e02*(-6063023289 + 65121475*pms->eta2 - 20643840*pms->sigx2 + 346368000*pms->kappa1*pms->sigx2 - 346368000*pms->dm*pms->kappa1*pms->sigx2 + 346368000*pms->kappa2*pms->sigx2 + 346368000*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(76888845 + 4096*(21206 + 11275*pms->kappa1 + 11275*pms->kappa2)*pms->sigx2) + 61440*(21206*pms->dm + 11275*(-1 + pms->dm)*pms->kappa1 + 11275*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 61440*(21206 + 11275*pms->kappa1 + 11275*pms->kappa2)*pms->sx2)))*var->vom6)/7431782400;
	COMPLEX16 PN3=-1.0/241920*(var->e06*(147280*pms->dm*pms->sigx + 130376*pms->dm*var->e02*pms->sigx + 164141*pms->dm*var->e04*pms->sigx + 350448*pms->sx + 336984*var->e02*pms->sx + 423447*var->e04*pms->sx + 24*pms->cosp2Th0Phi*(784 + 136*var->e02 + 213*var->e04)*(pms->dm*pms->sigx + pms->sx) + (96*I)*(112 + 13*var->e04)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5);
	COMPLEX16 PN2=-1.0/26127360*(var->e06*(pms->cosp2Th0Phi*(-429408 + 222480*var->e02 - 13662*var->e04 + 31711*var->e06)*(-1 + 3*pms->eta) - 432*var->e02*(36177 + 605*pms->eta) + 6048*(-11349 + 1033*pms->eta) + 54*var->e04*(-554811 + 29459*pms->eta) + var->e06*(-24477327 + 988831*pms->eta))*var->vom4);
	COMPLEX16 PN0=(var->e06*(1330560 + 146880*var->e02 + 286200*var->e04 + 170980*var->e06 + 128567*var->e08)*var->vom2)/21772800;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e05*pms->exp0Thm3Phi*pms->sinp1Th0Phi*((-((1436316 + 891982*var->e02 + 1261941*var->e04)*(-1 + 3*pms->eta)) + 2*(84*(-352864 + 1272803*pms->eta) + 29*var->e04*(-710102 + 2724633*pms->eta) + 7*var->e02*(-1173527 + 5976238*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - 2*pms->dm*(-32*(2184 - 1022*var->e02 + 289*var->e04) + (68880084 + 22853005*var->e02 + 48068313*var->e04)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(1436316 + 891982*var->e02 + 1261941*var->e04 + 14*(47796 + 24922*var->e02 + 39431*var->e04)*pms->exp0Thp2Phi)*pms->sigx + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/7741440;
	COMPLEX16 PN3=(pms->dm*var->e05*pms->exp0Thm3Phi*(2*(43049160 + 14015232*var->e02 + 20471115*var->e04 + 18635221*var->e06)*(-1 + 2*pms->eta) + (var->e06*(735376339 - 20499684*pms->eta) - 8736*var->e02*(232567 + 27360*pms->eta) + 1008*(4836739 + 269850*pms->eta) + 6*var->e04*(293277893 + 12212838*pms->eta))*pms->exp0Thp2Phi + 2*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-43049160 - 14015232*var->e02 - 20471115*var->e04 - 18635221*var->e06 + 9*(1569960 + 3256064*var->e02 + 1145023*var->e04 + 1913313*var->e06)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/371589120;
	COMPLEX16 PN1=-1.0/174182400*(pms->dm*var->e05*(36288000 + 1232207*var->e010 - 13184640*var->e02 + 6886080*var->e04 + 1294200*var->e06 + 1604980*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/7741440*I)*var->e05*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(((1436316 + 891982*var->e02 + 1261941*var->e04)*(-1 + 3*pms->eta) + 2*(84*(-352864 + 1272803*pms->eta) + 29*var->e04*(-710102 + 2724633*pms->eta) + 7*var->e02*(-1173527 + 5976238*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - 2*pms->dm*(32*(2184 - 1022*var->e02 + 289*var->e04) + (68880084 + 22853005*var->e02 + 48068313*var->e04)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(-1436316 - 891982*var->e02 - 1261941*var->e04 + 14*(47796 + 24922*var->e02 + 39431*var->e04)*pms->exp0Thp2Phi)*pms->sigx + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(-1.0/371589120*I)*pms->dm*var->e05*pms->exp0Thm3Phi*(-2*(43049160 + 14015232*var->e02 + 20471115*var->e04 + 18635221*var->e06)*(-1 + 2*pms->eta) + (var->e06*(735376339 - 20499684*pms->eta) - 8736*var->e02*(232567 + 27360*pms->eta) + 1008*(4836739 + 269850*pms->eta) + 6*var->e04*(293277893 + 12212838*pms->eta))*pms->exp0Thp2Phi + 2*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(43049160 + 14015232*var->e02 + 20471115*var->e04 + 18635221*var->e06 + 9*(1569960 + 3256064*var->e02 + 1145023*var->e04 + 1913313*var->e06)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e05*(36288000 + 1232207*var->e010 - 13184640*var->e02 + 6886080*var->e04 + 1294200*var->e06 + 1604980*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/174182400;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl4_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/138240*I)*var->e04*(var->e04*(2009514 - 5617183*pms->eta - 2694587*pms->eta2) + pms->cosp2Th0Phi*(-48120 - 7944*var->e02 + 31363*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 120*(-11922 + 32507*pms->eta + 25223*pms->eta2) + 24*var->e02*(-147738 + 406567*pms->eta + 219299*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(-1.0/17280*I)*var->e04*(40320 - 52416*var->e02 + 21840*var->e04 - 5912*var->e06 + 377*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl4_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e04*(9*pms->cosp2Th0Phi*(1278700 + 130083*var->e02 + 586841*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 300*(-19257 - 34843*pms->eta + 4383*pms->eta2) + var->e04*(-23519211 + 83141855*pms->eta + 37765245*pms->eta2) - 3*var->e02*(-41918319 + 119031635*pms->eta + 49743705*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6)/4147200;
	COMPLEX16 PN2=-1.0/92897280*(var->e04*(329575680 - 286328448*var->e02 + 143508288*var->e04 - 12798496*var->e06 + 18947387*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e03*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(-(((-4805280 + 5793300*var->e02 - 3812418*var->e04 + 417359*var->e06)*(-1 + 3*pms->eta) + 2*(1440*(29898 + 75649*pms->eta) - 180*var->e02*(182710 + 528169*pms->eta) + 9*var->e04*(-747115 + 7974926*pms->eta) + var->e06*(-8544744 + 9978457*pms->eta))*pms->exp0Thp2Phi)*pms->sigx) + 2*pms->dm*(-32*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06) + (67229280 - 70476660*var->e02 + 48777759*var->e04 + 1731523*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(-4805280 + 5793300*var->e02 - 3812418*var->e04 + 417359*var->e06 + 6*(-551520 + 1142700*var->e02 - 805182*var->e04 + 209281*var->e06)*pms->exp0Thp2Phi)*pms->sigx - 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/3317760;
	COMPLEX16 PN3=(pms->dm*var->e03*pms->exp0Thm3Phi*(-((2673296640 - 5263866720*var->e02 + 4056627456*var->e04 - 1405423348*var->e06 + 386554915*var->e08)*(-1 + 2*pms->eta)) + (725760*(-2891 + 5062*pms->eta) - 10080*var->e02*(-758741 + 855018*pms->eta) + 4032*var->e04*(-1223501 + 1607352*pms->eta) + 55*var->e08*(-19911481 + 9235602*pms->eta) - 84*var->e06*(-5027381 + 28431354*pms->eta))*pms->exp0Thp2Phi - pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-2673296640 + 5263866720*var->e02 - 4056627456*var->e04 + 1405423348*var->e06 - 386554915*var->e08 + 27*(29326080 - 27945120*var->e02 + 17387776*var->e04 - 2059148*var->e06 + 3064317*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/743178240;
	COMPLEX16 PN1=(pms->dm*var->e03*(609638400 + 54930456*var->e010 + 24143975*var->e012 + 3338496000*var->e02 - 2848608000*var->e04 + 1038804480*var->e06 - 156483720*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/5573836800;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/3317760*I)*var->e03*pms->exp0Thm3Phi*pms->sinp1Th0Phi*((-((-4805280 + 5793300*var->e02 - 3812418*var->e04 + 417359*var->e06)*(-1 + 3*pms->eta)) + 2*(1440*(29898 + 75649*pms->eta) - 180*var->e02*(182710 + 528169*pms->eta) + 9*var->e04*(-747115 + 7974926*pms->eta) + var->e06*(-8544744 + 9978457*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - 2*pms->dm*(32*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06) + (67229280 - 70476660*var->e02 + 48777759*var->e04 + 1731523*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(4805280 - 5793300*var->e02 + 3812418*var->e04 - 417359*var->e06 + 6*(-551520 + 1142700*var->e02 - 805182*var->e04 + 209281*var->e06)*pms->exp0Thp2Phi)*pms->sigx) + 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(-1.0/743178240*I)*pms->dm*var->e03*pms->exp0Thm3Phi*(-((2673296640 - 5263866720*var->e02 + 4056627456*var->e04 - 1405423348*var->e06 + 386554915*var->e08)*(-1 + 2*pms->eta)) + (-725760*(-2891 + 5062*pms->eta) + 10080*var->e02*(-758741 + 855018*pms->eta) - 4032*var->e04*(-1223501 + 1607352*pms->eta) - 55*var->e08*(-19911481 + 9235602*pms->eta) + 84*var->e06*(-5027381 + 28431354*pms->eta))*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(2673296640 - 5263866720*var->e02 + 4056627456*var->e04 - 1405423348*var->e06 + 386554915*var->e08 + 27*(29326080 - 27945120*var->e02 + 17387776*var->e04 - 2059148*var->e06 + 3064317*var->e08)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e03*(609638400 + 54930456*var->e010 + 24143975*var->e012 + 3338496000*var->e02 - 2848608000*var->e04 + 1038804480*var->e06 - 156483720*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/5573836800;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl4_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/353894400)*var->e02*pms->expm4Thm4Phi*((-173852640 + 583626000*var->e02 - 749355690*var->e04 + 448818119*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 6*(-260640 + 1828080*var->e02 - 6528150*var->e04 + 4148857*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 4*(-173852640 + 583626000*var->e02 - 749355690*var->e04 + 448818119*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(-1440*(343319 - 1009995*pms->eta + 13155*pms->eta2) + 240*var->e02*(5857963 - 17811295*pms->eta + 2156295*pms->eta2) - 150*var->e04*(6981307 - 22143487*pms->eta + 7278831*pms->eta2) + var->e06*(443174483 - 1467104695*pms->eta + 778173975*pms->eta2))*pms->expp2Thp4Phi + 6*(-173852640 + 583626000*var->e02 - 749355690*var->e04 + 448818119*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 4*(-173852640 + 583626000*var->e02 - 749355690*var->e04 + 448818119*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(-1440*(343319 - 1009995*pms->eta + 13155*pms->eta2) + 240*var->e02*(5857963 - 17811295*pms->eta + 2156295*pms->eta2) - 150*var->e04*(6981307 - 22143487*pms->eta + 7278831*pms->eta2) + var->e06*(443174483 - 1467104695*pms->eta + 778173975*pms->eta2))*pms->expp6Thp4Phi + (-173852640 + 583626000*var->e02 - 749355690*var->e04 + 448818119*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 6*(-260640 + 1828080*var->e02 - 6528150*var->e04 + 4148857*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 4*pms->expp4Thp4Phi*(-1440*(24597699 - 62385*pms->eta2 + 391680*pms->sigx2 + 710400*pms->kappa1*pms->sigx2 - 710400*pms->dm*pms->kappa1*pms->sigx2 + 710400*pms->kappa2*pms->sigx2 + 710400*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(644003 + 1536*(574 + 185*pms->kappa1 + 185*pms->kappa2)*pms->sigx2) + 7680*(574*pms->dm + 185*(-1 + pms->dm)*pms->kappa1 + 185*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(574 + 185*pms->kappa1 + 185*pms->kappa2)*pms->sx2) + 150*var->e04*(-68676631 + 8161389*pms->eta2 - 5538816*pms->sigx2 + 468480*pms->kappa1*pms->sigx2 - 468480*pms->dm*pms->kappa1*pms->sigx2 + 468480*pms->kappa2*pms->sigx2 + 468480*pms->dm*pms->kappa2*pms->sigx2 - pms->eta*(4996909 + 3072*(-6602 + 305*pms->kappa1 + 305*pms->kappa2)*pms->sigx2) + 3072*(-6602*pms->dm + 305*(-1 + pms->dm)*pms->kappa1 + 305*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3072*(-6602 + 305*pms->kappa1 + 305*pms->kappa2)*pms->sx2) + 240*var->e02*(579967383 - 4619405*pms->eta2 + 5299200*pms->sigx2 + 8686080*pms->kappa1*pms->sigx2 - 8686080*pms->dm*pms->kappa1*pms->sigx2 + 8686080*pms->kappa2*pms->sigx2 + 8686080*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(8741815 + 9216*(1214 + 377*pms->kappa1 + 377*pms->kappa2)*pms->sigx2) + 46080*(1214*pms->dm + 377*(-1 + pms->dm)*pms->kappa1 + 377*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 46080*(1214 + 377*pms->kappa1 + 377*pms->kappa2)*pms->sx2) + var->e06*(41221398303 - 715072005*pms->eta2 + 262287360*pms->sigx2 + 809103360*pms->kappa1*pms->sigx2 - 809103360*pms->dm*pms->kappa1*pms->sigx2 + 809103360*pms->kappa2*pms->sigx2 + 809103360*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(2688020735 + 24576*(34876 + 13169*pms->kappa1 + 13169*pms->kappa2)*pms->sigx2) + 122880*(34876*pms->dm + 13169*(-1 + pms->dm)*pms->kappa1 + 13169*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 122880*(34876 + 13169*pms->kappa1 + 13169*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=(I/138240)*var->e02*(-2615040*pms->dm*pms->sigx + 7056000*pms->dm*var->e02*pms->sigx - 3108480*pms->dm*var->e04*pms->sigx + 1720960*pms->dm*var->e06*pms->sigx + 394247*pms->dm*var->e08*pms->sigx - 7395840*pms->sx + 18282240*var->e02*pms->sx - 6730560*var->e04*pms->sx + 4136928*var->e06*pms->sx + 1400082*var->e08*pms->sx + pms->cosp2Th0Phi*(1140480 - 3000960*var->e02 + 2617920*var->e04 - 1029024*var->e06 + 240529*var->e08)*(pms->dm*pms->sigx + pms->sx) - I*(34560 - 236160*var->e02 + 290880*var->e04 - 125088*var->e06 + 33265*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(I/464486400)*var->e02*(3*pms->cosp2Th0Phi*(-263692800 + 10701563*var->e010 + 638265600*var->e02 - 573753600*var->e04 + 254412480*var->e06 - 65103990*var->e08)*(-1 + 3*pms->eta) + 2419200*(6801 + 509*pms->eta) + 1209600*var->e02*(-50345 + 1419*pms->eta) - 403200*var->e04*(-105699 + 13969*pms->eta) + 6720*var->e06*(-2428575 + 537037*pms->eta) - 210*var->e08*(-8330527 + 5522317*pms->eta) + var->e010*(-1619919159 + 175563797*pms->eta))*var->vom4;
	COMPLEX16 PN0=(I/7257600)*var->e02*(29030400 - 720564*var->e010 + 122045*var->e012 - 72576000*var->e02 + 61084800*var->e04 - 23728320*var->e06 + 5440680*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl4_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e02*pms->expm4Thm4Phi*((-173852640 + 583626000*var->e02 - 749355690*var->e04 + 448818119*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 6*(-260640 + 1828080*var->e02 - 6528150*var->e04 + 4148857*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 4*(-173852640 + 583626000*var->e02 - 749355690*var->e04 + 448818119*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi + 8*(-1440*(343319 - 1009995*pms->eta + 13155*pms->eta2) + 240*var->e02*(5857963 - 17811295*pms->eta + 2156295*pms->eta2) - 150*var->e04*(6981307 - 22143487*pms->eta + 7278831*pms->eta2) + var->e06*(443174483 - 1467104695*pms->eta + 778173975*pms->eta2))*pms->expp2Thp4Phi + 6*(-173852640 + 583626000*var->e02 - 749355690*var->e04 + 448818119*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 4*(-173852640 + 583626000*var->e02 - 749355690*var->e04 + 448818119*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi + 8*(-1440*(343319 - 1009995*pms->eta + 13155*pms->eta2) + 240*var->e02*(5857963 - 17811295*pms->eta + 2156295*pms->eta2) - 150*var->e04*(6981307 - 22143487*pms->eta + 7278831*pms->eta2) + var->e06*(443174483 - 1467104695*pms->eta + 778173975*pms->eta2))*pms->expp6Thp4Phi + (-173852640 + 583626000*var->e02 - 749355690*var->e04 + 448818119*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi - 6*(-260640 + 1828080*var->e02 - 6528150*var->e04 + 4148857*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 4*pms->expp4Thp4Phi*(-1440*(24597699 - 62385*pms->eta2 + 391680*pms->sigx2 + 710400*pms->kappa1*pms->sigx2 - 710400*pms->dm*pms->kappa1*pms->sigx2 + 710400*pms->kappa2*pms->sigx2 + 710400*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(644003 + 1536*(574 + 185*pms->kappa1 + 185*pms->kappa2)*pms->sigx2) + 7680*(574*pms->dm + 185*(-1 + pms->dm)*pms->kappa1 + 185*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(574 + 185*pms->kappa1 + 185*pms->kappa2)*pms->sx2) + 150*var->e04*(-68676631 + 8161389*pms->eta2 - 5538816*pms->sigx2 + 468480*pms->kappa1*pms->sigx2 - 468480*pms->dm*pms->kappa1*pms->sigx2 + 468480*pms->kappa2*pms->sigx2 + 468480*pms->dm*pms->kappa2*pms->sigx2 - pms->eta*(4996909 + 3072*(-6602 + 305*pms->kappa1 + 305*pms->kappa2)*pms->sigx2) + 3072*(-6602*pms->dm + 305*(-1 + pms->dm)*pms->kappa1 + 305*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3072*(-6602 + 305*pms->kappa1 + 305*pms->kappa2)*pms->sx2) + 240*var->e02*(579967383 - 4619405*pms->eta2 + 5299200*pms->sigx2 + 8686080*pms->kappa1*pms->sigx2 - 8686080*pms->dm*pms->kappa1*pms->sigx2 + 8686080*pms->kappa2*pms->sigx2 + 8686080*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(8741815 + 9216*(1214 + 377*pms->kappa1 + 377*pms->kappa2)*pms->sigx2) + 46080*(1214*pms->dm + 377*(-1 + pms->dm)*pms->kappa1 + 377*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 46080*(1214 + 377*pms->kappa1 + 377*pms->kappa2)*pms->sx2) + var->e06*(41221398303 - 715072005*pms->eta2 + 262287360*pms->sigx2 + 809103360*pms->kappa1*pms->sigx2 - 809103360*pms->dm*pms->kappa1*pms->sigx2 + 809103360*pms->kappa2*pms->sigx2 + 809103360*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(2688020735 + 24576*(34876 + 13169*pms->kappa1 + 13169*pms->kappa2)*pms->sigx2) + 122880*(34876*pms->dm + 13169*(-1 + pms->dm)*pms->kappa1 + 13169*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 122880*(34876 + 13169*pms->kappa1 + 13169*pms->kappa2)*pms->sx2)))*var->vom6)/353894400;
	COMPLEX16 PN3=-1.0/138240*(var->e02*(-2615040*pms->dm*pms->sigx + 7056000*pms->dm*var->e02*pms->sigx - 3108480*pms->dm*var->e04*pms->sigx + 1720960*pms->dm*var->e06*pms->sigx + 394247*pms->dm*var->e08*pms->sigx - 7395840*pms->sx + 18282240*var->e02*pms->sx - 6730560*var->e04*pms->sx + 4136928*var->e06*pms->sx + 1400082*var->e08*pms->sx + pms->cosp2Th0Phi*(518400 - 1146240*var->e02 + 872640*var->e04 - 326880*var->e06 + 70367*var->e08)*(pms->dm*pms->sigx + pms->sx) + I*(587520 - 1618560*var->e02 + 1454400*var->e04 - 577056*var->e06 + 136897*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5);
	COMPLEX16 PN2=-1.0/464486400*(var->e02*(3*pms->cosp2Th0Phi*(-263692800 + 10701563*var->e010 + 638265600*var->e02 - 573753600*var->e04 + 254412480*var->e06 - 65103990*var->e08)*(-1 + 3*pms->eta) + 2419200*(6801 + 509*pms->eta) + 1209600*var->e02*(-50345 + 1419*pms->eta) - 403200*var->e04*(-105699 + 13969*pms->eta) + 6720*var->e06*(-2428575 + 537037*pms->eta) - 210*var->e08*(-8330527 + 5522317*pms->eta) + var->e010*(-1619919159 + 175563797*pms->eta))*var->vom4);
	COMPLEX16 PN0=-1.0/7257600*(var->e02*(29030400 - 720564*var->e010 + 122045*var->e012 - 72576000*var->e02 + 61084800*var->e04 - 23728320*var->e06 + 5440680*var->e08)*var->vom2);
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/4423680*(var->e0*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((11520*(-4841 + 17619*pms->eta) - 11520*var->e02*(-32372 + 120903*pms->eta) + 480*var->e04*(-1147303 + 4262457*pms->eta) - 200*var->e06*(-1550837 + 5654760*pms->eta) + 19*var->e08*(-4163791 + 14567709*pms->eta))*pms->sigx - 24*pms->dm*(7073280 - 42976800*var->e02 + 58229520*var->e04 - 29596945*var->e06 + 6619363*var->e08)*pms->sx + 5*pms->cosp2Th0Phi*(-((4020480 - 19779840*var->e02 + 31368480*var->e04 - 21943520*var->e06 + 7932329*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 1920*pms->dm*(2304 - 10944*var->e02 + 16896*var->e04 - 11620*var->e06 + 4165*var->e08)*pms->sx))*var->vom6);
	COMPLEX16 PN3=-1.0/530841600*(pms->dm*var->e0*(9*pms->cosp2Th0Phi*(-87436800 + 43685453*var->e010 + 356371200*var->e02 - 561600000*var->e04 + 432336000*var->e06 - 175020250*var->e08)*(-1 + 2*pms->eta) + 345600*(22723 + 4458*pms->eta) + 172800*var->e02*(-508903 + 16830*pms->eta) - 115200*var->e04*(-1536991 + 197562*pms->eta) + 4800*var->e06*(-27254561 + 6161412*pms->eta) - 30*var->e08*(-1286045869 + 483144426*pms->eta) + var->e010*(-11371901227 + 4280076822*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(pms->dm*var->e0*(-34952601600 + 19424157816*var->e010 - 2393178620*var->e012 + 565387055*var->e014 + 169682688000*var->e02 - 287715456000*var->e04 + 221888620800*var->e06 - 84097853280*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/13005619200;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/4423680*I)*var->e0*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((11520*(-4841 + 17619*pms->eta) - 11520*var->e02*(-32372 + 120903*pms->eta) + 480*var->e04*(-1147303 + 4262457*pms->eta) - 200*var->e06*(-1550837 + 5654760*pms->eta) + 19*var->e08*(-4163791 + 14567709*pms->eta))*pms->sigx - 24*pms->dm*(7073280 - 42976800*var->e02 + 58229520*var->e04 - 29596945*var->e06 + 6619363*var->e08)*pms->sx + 5*pms->cosp2Th0Phi*(-((4020480 - 19779840*var->e02 + 31368480*var->e04 - 21943520*var->e06 + 7932329*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 1920*pms->dm*(2304 - 10944*var->e02 + 16896*var->e04 - 11620*var->e06 + 4165*var->e08)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(pms->dm*var->e0*(9*pms->cosp2Th0Phi*(-87436800 + 43685453*var->e010 + 356371200*var->e02 - 561600000*var->e04 + 432336000*var->e06 - 175020250*var->e08)*(-1 + 2*pms->eta) + 345600*(22723 + 4458*pms->eta) + 172800*var->e02*(-508903 + 16830*pms->eta) - 115200*var->e04*(-1536991 + 197562*pms->eta) + 4800*var->e06*(-27254561 + 6161412*pms->eta) - 30*var->e08*(-1286045869 + 483144426*pms->eta) + var->e010*(-11371901227 + 4280076822*pms->eta))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/530841600;
	COMPLEX16 PN1=(I/13005619200)*pms->dm*var->e0*(-34952601600 + 19424157816*var->e010 - 2393178620*var->e012 + 565387055*var->e014 + 169682688000*var->e02 - 287715456000*var->e04 + 221888620800*var->e06 - 84097853280*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl4_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/1105920*I)*(pms->cosp2Th0Phi*(663552 - 5894496*var->e02 + 15730704*var->e04 - 19314396*var->e06 + 12347651*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 36864*(-93 + 215*pms->eta + 165*pms->eta2) + 288*var->e02*(-558637 + 1637305*pms->eta + 69995*pms->eta2) + 144*var->e04*(4697081 - 14189305*pms->eta + 648125*pms->eta2) - 12*var->e06*(76747483 - 236857695*pms->eta + 27154275*pms->eta2) + var->e08*(545382071 - 1722734095*pms->eta + 337073915*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/66355200)*(66355200 - 655778772*var->e010 + 141915169*var->e012 - 723686400*var->e02 + 2157062400*var->e04 - 2819145600*var->e06 + 1853312400*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl4_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((pms->cosp2Th0Phi*(663552 - 5894496*var->e02 + 15730704*var->e04 - 19314396*var->e06 + 12347651*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 36864*(-93 + 215*pms->eta + 165*pms->eta2) + 288*var->e02*(-558637 + 1637305*pms->eta + 69995*pms->eta2) + 144*var->e04*(4697081 - 14189305*pms->eta + 648125*pms->eta2) - 12*var->e06*(76747483 - 236857695*pms->eta + 27154275*pms->eta2) + var->e08*(545382071 - 1722734095*pms->eta + 337073915*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/1105920;
	COMPLEX16 PN2=-1.0/66355200*((66355200 - 655778772*var->e010 + 141915169*var->e012 - 723686400*var->e02 + 2157062400*var->e04 - 2819145600*var->e06 + 1853312400*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl4_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/265420800*(pms->dm*var->e0*(-784857600 + 2946582461*var->e010 + 5334163200*var->e02 - 12743366400*var->e04 + 14584600800*var->e06 - 8777790510*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN3;
}

COMPLEX16 cpart_LPartsl4_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-1.0/265420800*I)*pms->dm*var->e0*(-784857600 + 2946582461*var->e010 + 5334163200*var->e02 - 12743366400*var->e04 + 14584600800*var->e06 - 8777790510*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl4_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/22118400*I)*var->e02*(-101207520 + 559847760*var->e02 - 1177610550*var->e04 + 1226286917*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl4_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e02*(-101207520 + 559847760*var->e02 - 1177610550*var->e04 + 1226286917*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/22118400;
	return PN4;
}

COMPLEX16 spart_LPartsl5_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-4058125*pms->dm*var->e010*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/594542592;
	return PN3;
}

COMPLEX16 cpart_LPartsl5_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=((4058125*I)/594542592)*pms->dm*var->e010*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl5_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/35672555520)*var->e09*(-13601790057 + 45258554546*pms->eta - 11301337500*pms->eta2 + 624487500*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=((625*I)/52319748096)*(1530848 + 459008*var->e02 + 474267*var->e04)*var->e09*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl5_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e09*(-13601790057 + 45258554546*pms->eta - 11301337500*pms->eta2 + 624487500*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/35672555520;
	COMPLEX16 PN2=(625*(1530848 + 459008*var->e02 + 474267*var->e04)*var->e09*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/52319748096;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e08*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((1524048947 - 6281273913*pms->eta)*pms->sigx + 3197678091*pms->dm*pms->sx + 78125*pms->cosp2Th0Phi*(2369*(1 - 3*pms->eta)*pms->sigx + 3081*pms->dm*pms->sx))*var->vom6)/3963617280;
	COMPLEX16 PN3=(pms->dm*var->e08*(28125*pms->cosp2Th0Phi*(-16893 + 1799*var->e02)*(-1 + 2*pms->eta) + 9*(-3042081233 + 597806250*pms->eta) + var->e02*(-7403103001 + 1007418750*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/17836277760;
	COMPLEX16 PN1=(-3125*pms->dm*(1843776 + 422400*var->e02 + 666897*var->e04 + 508399*var->e06)*var->e08*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/156959244288;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e08*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*((1524048947 - 6281273913*pms->eta)*pms->sigx + 3197678091*pms->dm*pms->sx + 78125*pms->cosp2Th0Phi*(2369*(1 - 3*pms->eta)*pms->sigx + 3081*pms->dm*pms->sx))*var->vom6)/3963617280;
	COMPLEX16 PN3=(pms->dm*var->e08*(28125*pms->cosp2Th0Phi*(-16893 + 1799*var->e02)*(-1 + 2*pms->eta) + 9*(-3042081233 + 597806250*pms->eta) + var->e02*(-7403103001 + 1007418750*pms->eta))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/17836277760;
	COMPLEX16 PN1=((3125*I)/156959244288)*pms->dm*(1843776 + 422400*var->e02 + 666897*var->e04 + 508399*var->e06)*var->e08*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl5_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/63417876480)*var->e07*pms->expm4Thm4Phi*(10*(151850272 + 73306943*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 9*(-43092064 + 81436359*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 40*(151850272 + 73306943*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi + 4*(-32*(938645075 - 2971372677*pms->eta + 977372505*pms->eta2) + var->e02*(13991778115 - 44566684729*pms->eta + 7554848085*pms->eta2))*pms->expp2Thp4Phi + 60*(151850272 + 73306943*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 40*(151850272 + 73306943*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi + 4*(-32*(938645075 - 2971372677*pms->eta + 977372505*pms->eta2) + var->e02*(13991778115 - 44566684729*pms->eta + 7554848085*pms->eta2))*pms->expp6Thp4Phi + 10*(151850272 + 73306943*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 9*(-43092064 + 81436359*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 2*pms->expp4Thp4Phi*(32*(3214995115*pms->eta2 - pms->eta*(22946735771 + 576000*(2713 + 1669*pms->kappa1 + 1669*pms->kappa2)*pms->sigx2) - 375*(70902383 + 384*(625 + 3338*(-1 + pms->dm)*pms->kappa1 - 3338*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 576000*(2713*pms->dm + 1669*(-1 + pms->dm)*pms->kappa1 + 1669*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 576000*(2713 + 1669*pms->kappa1 + 1669*pms->kappa2)*pms->sx2) + var->e02*(-24102373455*pms->eta2 + pms->eta*(166087671967 - 96000*(696472 + 368861*pms->kappa1 + 368861*pms->kappa2)*pms->sigx2) - 5*(39320397967 + 9600*(20625 + 368861*(-1 + pms->dm)*pms->kappa1 - 368861*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 96000*(696472*pms->dm + 368861*(-1 + pms->dm)*pms->kappa1 + 368861*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 96000*(696472 + 368861*pms->kappa1 + 368861*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=((-25*I)/7134511104)*var->e07*(208251648*pms->dm*pms->sigx + 136452312*pms->dm*var->e02*pms->sigx + 195004615*pms->dm*var->e04*pms->sigx + 488934144*pms->sx + 359579736*var->e02*pms->sx + 498377895*var->e04*pms->sx + 1125*pms->cosp2Th0Phi*(36096 - 3672*var->e02 + 6865*var->e04)*(pms->dm*pms->sigx + pms->sx) + (375*I)*(16128 + 3384*var->e02 + 6955*var->e04)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=((-25*I)/57076088832)*var->e07*(25*pms->cosp2Th0Phi*(-2267136 + 1432512*var->e02 - 354120*var->e04 + 144659*var->e06)*(-1 + 3*pms->eta) + 55296*(-132737 + 12775*pms->eta) - 10944*var->e02*(-1977 + 16775*pms->eta) + 8*var->e04*(-367410009 + 24110375*pms->eta) + var->e06*(-1947928217 + 70740975*pms->eta))*var->vom4;
	COMPLEX16 PN0=((625*I)/2511347908608)*var->e07*(262766592 - 16118784*var->e02 + 58185600*var->e04 + 26689872*var->e06 + 22252759*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl5_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e07*pms->expm4Thm4Phi*(-10*(151850272 + 73306943*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 9*(-43092064 + 81436359*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 40*(151850272 + 73306943*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi + 4*(-32*(938645075 - 2971372677*pms->eta + 977372505*pms->eta2) + var->e02*(13991778115 - 44566684729*pms->eta + 7554848085*pms->eta2))*pms->expp2Thp4Phi - 60*(151850272 + 73306943*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 40*(151850272 + 73306943*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi + 4*(-32*(938645075 - 2971372677*pms->eta + 977372505*pms->eta2) + var->e02*(13991778115 - 44566684729*pms->eta + 7554848085*pms->eta2))*pms->expp6Thp4Phi - 10*(151850272 + 73306943*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 9*(-43092064 + 81436359*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 2*pms->expp4Thp4Phi*(32*(3214995115*pms->eta2 - pms->eta*(22946735771 + 576000*(2713 + 1669*pms->kappa1 + 1669*pms->kappa2)*pms->sigx2) - 375*(70902383 + 384*(625 + 3338*(-1 + pms->dm)*pms->kappa1 - 3338*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 576000*(2713*pms->dm + 1669*(-1 + pms->dm)*pms->kappa1 + 1669*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 576000*(2713 + 1669*pms->kappa1 + 1669*pms->kappa2)*pms->sx2) + var->e02*(-24102373455*pms->eta2 + pms->eta*(166087671967 - 96000*(696472 + 368861*pms->kappa1 + 368861*pms->kappa2)*pms->sigx2) - 5*(39320397967 + 9600*(20625 + 368861*(-1 + pms->dm)*pms->kappa1 - 368861*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 96000*(696472*pms->dm + 368861*(-1 + pms->dm)*pms->kappa1 + 368861*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 96000*(696472 + 368861*pms->kappa1 + 368861*pms->kappa2)*pms->sx2)))*var->vom6)/63417876480;
	COMPLEX16 PN3=(-25*var->e07*(208251648*pms->dm*pms->sigx + 136452312*pms->dm*var->e02*pms->sigx + 195004615*pms->dm*var->e04*pms->sigx + 488934144*pms->sx + 359579736*var->e02*pms->sx + 498377895*var->e04*pms->sx + 2250*pms->cosp2Th0Phi*(13056 - 72*var->e02 + 3455*var->e04)*(pms->dm*pms->sigx + pms->sx) + (7500*I)*(2304 - 360*var->e02 + 341*var->e04)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/7134511104;
	COMPLEX16 PN2=(-25*var->e07*(25*pms->cosp2Th0Phi*(-2267136 + 1432512*var->e02 - 354120*var->e04 + 144659*var->e06)*(-1 + 3*pms->eta) + 55296*(-132737 + 12775*pms->eta) - 10944*var->e02*(-1977 + 16775*pms->eta) + 8*var->e04*(-367410009 + 24110375*pms->eta) + var->e06*(-1947928217 + 70740975*pms->eta))*var->vom4)/57076088832;
	COMPLEX16 PN0=(625*var->e07*(262766592 - 16118784*var->e02 + 58185600*var->e04 + 26689872*var->e06 + 22252759*var->e08)*var->vom2)/2511347908608;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/247726080*(var->e06*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(125*(492842 + 178523*var->e02)*(-1 + 3*pms->eta)*pms->sigx - 2*(14*(-95540553 + 340745867*pms->eta) + var->e02*(18024619 + 533193679*pms->eta))*pms->exp0Thp2Phi*pms->sigx + pms->dm*(15625*(-434 + 299*var->e02) + (6201964412 + 312494726*var->e02)*pms->exp0Thp2Phi)*pms->sx + 25*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(2464210 + 892615*var->e02 + 2*(604842 + 134023*var->e02)*pms->exp0Thp2Phi)*pms->sigx) + 625*pms->dm*(-434 + 299*var->e02)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	COMPLEX16 PN3=(pms->dm*var->e06*pms->exp0Thm3Phi*(5*(1939727104 + 163188224*var->e02 + 801740789*var->e04)*(-1 + 2*pms->eta) + 2*(10752*(28288319 + 1627590*pms->eta) - 640*var->e02*(329321515 + 30888378*pms->eta) + var->e04*(140890871161 + 8503836630*pms->eta))*pms->exp0Thp2Phi + 5*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-1939727104 - 163188224*var->e02 - 801740789*var->e04 + 6*(62071296 + 237922176*var->e02 + 5341111*var->e04)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/31708938240;
	COMPLEX16 PN1=(-3125*pms->dm*var->e06*(18579456 - 11059200*var->e02 + 5304960*var->e04 - 185280*var->e06 + 738415*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/228304355328;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e06*(I*pms->cos0Thp2Phi + pms->sin0Thp2Phi)*pms->sinp1Th0Phi*((2*I)*pms->sin0Thp1Phi*(-((-2613530234 + 9356068526*pms->eta + var->e02*(58364613 + 999441233*pms->eta))*pms->sigx) + pms->dm*(6195183162 + 317166601*var->e02)*pms->sx + 25*pms->cosp2Th0Phi*(-((3673894 + 1160661*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3125*pms->dm*(-434 + 299*var->e02)*pms->sx)) + 2*pms->cos0Thp1Phi*(-((-2736740734 + 9725700026*pms->eta + var->e02*(13733863 + 1133333483*pms->eta))*pms->sigx) + 7*pms->dm*(886963666 + 43974693*var->e02)*pms->sx + 25*pms->cosp2Th0Phi*((1254526 + 624569*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 4375*pms->dm*(-434 + 299*var->e02)*pms->sx)))*var->vom6)/495452160;
	COMPLEX16 PN3=(-1.0/31708938240*I)*pms->dm*var->e06*pms->exp0Thm3Phi*(-5*(1939727104 + 163188224*var->e02 + 801740789*var->e04)*(-1 + 2*pms->eta) + 2*(10752*(28288319 + 1627590*pms->eta) - 640*var->e02*(329321515 + 30888378*pms->eta) + var->e04*(140890871161 + 8503836630*pms->eta))*pms->exp0Thp2Phi + 5*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(1939727104 + 163188224*var->e02 + 801740789*var->e04 + 6*(62071296 + 237922176*var->e02 + 5341111*var->e04)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(3125*pms->dm*var->e06*(18579456 - 11059200*var->e02 + 5304960*var->e04 - 185280*var->e06 + 738415*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/228304355328;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl5_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((-5*I)/198180864)*var->e05*(pms->cosp2Th0Phi*(-15242304 - 12692120*var->e02 + 26140435*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 1344*(-654765 + 1808501*pms->eta + 1197511*pms->eta2) + 280*var->e02*(-7879215 + 21855631*pms->eta + 11303941*pms->eta2) - 5*var->e04*(-325643145 + 911689793*pms->eta + 426427723*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=((-3125*I)/16307453952)*var->e05*(18579456 - 28643328*var->e02 + 15994368*var->e04 - 5312016*var->e06 + 919465*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl5_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e05*(3*pms->cosp2Th0Phi*(3948122304 - 503195896*var->e02 + 1436004267*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 1344*(-10401387 + 51792065*pms->eta + 16287375*pms->eta2) - 56*var->e02*(-3011599977 + 8758178495*pms->eta + 3547043145*pms->eta2) + var->e04*(-89519903559 + 273059764685*pms->eta + 114034059795*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6)/2972712960;
	COMPLEX16 PN2=-1.0/342456532992*(var->e05*(1772907429888 - 2046247612416*var->e02 + 1189659806208*var->e04 - 288584014320*var->e06 + 121140204095*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e04*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(125*(2967744 - 4525056*var->e02 + 3320371*var->e04)*(-1 + 3*pms->eta)*pms->sigx - 2*(960*(3134593 + 8401693*pms->eta) - 384*var->e02*(7054339 + 25498059*pms->eta) + var->e04*(-4653793 + 7160679107*pms->eta))*pms->exp0Thp2Phi*pms->sigx + pms->dm*(15625*(3648 - 7872*var->e02 + 6097*var->e04) + 2*(5075004480 - 7014889152*var->e02 + 5068873289*var->e04)*pms->exp0Thp2Phi)*pms->sx + 25*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(5*(2967744 - 4525056*var->e02 + 3320371*var->e04) + 2*(5933760 - 13416576*var->e02 + 11043131*var->e04)*pms->exp0Thp2Phi)*pms->sigx) + 625*pms->dm*(3648 - 7872*var->e02 + 6097*var->e04)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/141557760;
	COMPLEX16 PN3=(pms->dm*var->e04*pms->exp0Thm3Phi*(30*(-1332664704 + 3008707968*var->e02 - 2720258632*var->e04 + 1244096863*var->e06)*(-1 + 2*pms->eta) + (var->e06*(24872062871 - 60204393630*pms->eta) + 40320*(-731779 + 1370358*pms->eta) - 4032*var->e02*(-27809669 + 35157690*pms->eta) + 210*var->e04*(-420099119 + 613076142*pms->eta))*pms->exp0Thp2Phi + 15*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(2665329408 - 6017415936*var->e02 + 5440517264*var->e04 - 2488193726*var->e06 + (-680674176 + 864085824*var->e02 - 594643266*var->e04 + 174103009*var->e06)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/5945425920;
	COMPLEX16 PN1=(pms->dm*var->e04*(3084189696 + 747854419*var->e010 + 25175162880*var->e02 - 28312381440*var->e04 + 13333777920*var->e06 - 3330571950*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/28538044416;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/141557760)*var->e04*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(-((125*(2967744 - 4525056*var->e02 + 3320371*var->e04)*(-1 + 3*pms->eta) + 2*(960*(3134593 + 8401693*pms->eta) - 384*var->e02*(7054339 + 25498059*pms->eta) + var->e04*(-4653793 + 7160679107*pms->eta))*pms->exp0Thp2Phi)*pms->sigx) + pms->dm*(-15625*(3648 - 7872*var->e02 + 6097*var->e04) + 2*(5075004480 - 7014889152*var->e02 + 5068873289*var->e04)*pms->exp0Thp2Phi)*pms->sx + 25*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-5*(2967744 - 4525056*var->e02 + 3320371*var->e04) + 2*(5933760 - 13416576*var->e02 + 11043131*var->e04)*pms->exp0Thp2Phi)*pms->sigx) + 625*pms->dm*(3648 - 7872*var->e02 + 6097*var->e04)*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(I/5945425920)*pms->dm*var->e04*pms->exp0Thm3Phi*(-30*(-1332664704 + 3008707968*var->e02 - 2720258632*var->e04 + 1244096863*var->e06)*(-1 + 2*pms->eta) + (var->e06*(24872062871 - 60204393630*pms->eta) + 40320*(-731779 + 1370358*pms->eta) - 4032*var->e02*(-27809669 + 35157690*pms->eta) + 210*var->e04*(-420099119 + 613076142*pms->eta))*pms->exp0Thp2Phi + 15*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-2665329408 + 6017415936*var->e02 - 5440517264*var->e04 + 2488193726*var->e06 + (-680674176 + 864085824*var->e02 - 594643266*var->e04 + 174103009*var->e06)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e04*(3084189696 + 747854419*var->e010 + 25175162880*var->e02 - 28312381440*var->e04 + 13333777920*var->e06 - 3330571950*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/28538044416;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl5_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/40768634880)*var->e03*pms->expm4Thm4Phi*(45*(-1114444800 + 3964632384*var->e02 - 5566348632*var->e04 + 3949006583*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 432*(-4273920 + 15950640*var->e02 - 31513032*var->e04 + 23652607*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 180*(-1114444800 + 3964632384*var->e02 - 5566348632*var->e04 + 3949006583*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 16*(-46080*(1348794 - 4017715*pms->eta + 256629*pms->eta2) + 2880*var->e02*(62037912 - 190120835*pms->eta + 31761753*pms->eta2) - 72*var->e04*(2286182793 - 7264179962*pms->eta + 2493565980*pms->eta2) + var->e06*(82159543431 - 272004265174*pms->eta + 148693435140*pms->eta2))*pms->expp2Thp4Phi + 270*(-1114444800 + 3964632384*var->e02 - 5566348632*var->e04 + 3949006583*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 180*(-1114444800 + 3964632384*var->e02 - 5566348632*var->e04 + 3949006583*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 16*(-46080*(1348794 - 4017715*pms->eta + 256629*pms->eta2) + 2880*var->e02*(62037912 - 190120835*pms->eta + 31761753*pms->eta2) - 72*var->e04*(2286182793 - 7264179962*pms->eta + 2493565980*pms->eta2) + var->e06*(82159543431 - 272004265174*pms->eta + 148693435140*pms->eta2))*pms->expp6Thp4Phi + 45*(-1114444800 + 3964632384*var->e02 - 5566348632*var->e04 + 3949006583*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 432*(-4273920 + 15950640*var->e02 - 31513032*var->e04 + 23652607*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 96*pms->expp4Thp4Phi*(-11520*(33151027 - 294693*pms->eta2 + 486720*pms->sigx2 + 829440*pms->kappa1*pms->sigx2 - 829440*pms->dm*pms->kappa1*pms->sigx2 + 829440*pms->kappa2*pms->sigx2 + 829440*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(784631 + 2304*(457 + 144*pms->kappa1 + 144*pms->kappa2)*pms->sigx2) + 11520*(457*pms->dm + 144*(-1 + pms->dm)*pms->kappa1 + 144*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 11520*(457 + 144*pms->kappa1 + 144*pms->kappa2)*pms->sx2) - 72*var->e04*(5795355294 - 292984135*pms->eta2 - 18000*(-8329 + 3384*(-1 + pms->dm)*pms->kappa1 - 3384*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 3*pms->eta*(238360669 + 24000*(11713 + 1692*pms->kappa1 + 1692*pms->kappa2)*pms->sigx2) + 72000*(11713*pms->dm + 1692*(-1 + pms->dm)*pms->kappa1 + 1692*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 72000*(11713 + 1692*pms->kappa1 + 1692*pms->kappa2)*pms->sx2) + 720*var->e02*(1735137111 - 23462041*pms->eta2 - 4800*(-3903 + 5369*(-1 + pms->dm)*pms->kappa1 - 5369*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 3*pms->eta*(46125061 + 3200*(18544 + 5369*pms->kappa1 + 5369*pms->kappa2)*pms->sigx2) + 9600*(18544*pms->dm + 5369*(-1 + pms->dm)*pms->kappa1 + 5369*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 9600*(18544 + 5369*pms->kappa1 + 5369*pms->kappa2)*pms->sx2) + var->e06*(353355865138 - 14134602585*pms->eta2 + 4408362000*pms->sigx2 + 5690394000*pms->kappa1*pms->sigx2 - 5690394000*pms->dm*pms->kappa1*pms->sigx2 + 5690394000*pms->kappa2*pms->sigx2 + 5690394000*pms->dm*pms->kappa2*pms->sigx2 - pms->eta*(116929053049 + 36000*(1122084 + 316133*pms->kappa1 + 316133*pms->kappa2)*pms->sigx2) + 36000*(1122084*pms->dm + 316133*(-1 + pms->dm)*pms->kappa1 + 316133*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 36000*(1122084 + 316133*pms->kappa1 + 316133*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=((5*I)/1189085184)*var->e03*(-9012068352*pms->dm*pms->sigx + 23554169856*pms->dm*var->e02*pms->sigx - 15251757696*pms->dm*var->e04*pms->sigx + 7468673072*pms->dm*var->e06*pms->sigx - 496928135*pms->dm*var->e08*pms->sigx - 24800477184*pms->sx + 60024609792*var->e02*pms->sx - 34549103232*var->e04*pms->sx + 16812539184*var->e06*pms->sx + 112722105*var->e08*pms->sx + 3*pms->cosp2Th0Phi*(1342881792 - 3761243136*var->e02 + 3793862016*var->e04 - 1887241552*var->e06 + 566770985*var->e08)*(pms->dm*pms->sigx + pms->sx) - (3*I)*(52641792 - 293723136*var->e02 + 396902016*var->e04 - 220821552*var->e06 + 72364735*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(I/9512681472)*var->e03*(pms->cosp2Th0Phi*(-29215162368 + 3246685829*var->e010 + 78149320704*var->e02 - 81787797504*var->e04 + 44761631488*var->e06 - 14792571440*var->e08)*(-1 + 3*pms->eta) + 16515072*(42291 + 1513*pms->eta) + 2064384*var->e02*(-1145859 + 49138*pms->eta) - 258048*var->e04*(-8006772 + 1031779*pms->eta) + 1792*var->e06*(-530934021 + 114828097*pms->eta) - 80*var->e08*(-2773973757 + 1033098389*pms->eta) + var->e010*(-70396229706 + 19548031367*pms->eta))*var->vom4;
	COMPLEX16 PN0=((625*I)/684913065984)*var->e03*(7134511104 - 527095944*var->e010 + 81139957*var->e012 - 19173998592*var->e02 + 18783830016*var->e04 - 9214636032*var->e06 + 2733868800*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl5_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e03*pms->expm4Thm4Phi*(45*(-1114444800 + 3964632384*var->e02 - 5566348632*var->e04 + 3949006583*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 432*(-4273920 + 15950640*var->e02 - 31513032*var->e04 + 23652607*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 180*(-1114444800 + 3964632384*var->e02 - 5566348632*var->e04 + 3949006583*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi + 16*(-46080*(1348794 - 4017715*pms->eta + 256629*pms->eta2) + 2880*var->e02*(62037912 - 190120835*pms->eta + 31761753*pms->eta2) - 72*var->e04*(2286182793 - 7264179962*pms->eta + 2493565980*pms->eta2) + var->e06*(82159543431 - 272004265174*pms->eta + 148693435140*pms->eta2))*pms->expp2Thp4Phi + 270*(-1114444800 + 3964632384*var->e02 - 5566348632*var->e04 + 3949006583*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 180*(-1114444800 + 3964632384*var->e02 - 5566348632*var->e04 + 3949006583*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi + 16*(-46080*(1348794 - 4017715*pms->eta + 256629*pms->eta2) + 2880*var->e02*(62037912 - 190120835*pms->eta + 31761753*pms->eta2) - 72*var->e04*(2286182793 - 7264179962*pms->eta + 2493565980*pms->eta2) + var->e06*(82159543431 - 272004265174*pms->eta + 148693435140*pms->eta2))*pms->expp6Thp4Phi + 45*(-1114444800 + 3964632384*var->e02 - 5566348632*var->e04 + 3949006583*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi - 432*(-4273920 + 15950640*var->e02 - 31513032*var->e04 + 23652607*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 96*pms->expp4Thp4Phi*(-11520*(33151027 - 294693*pms->eta2 + 486720*pms->sigx2 + 829440*pms->kappa1*pms->sigx2 - 829440*pms->dm*pms->kappa1*pms->sigx2 + 829440*pms->kappa2*pms->sigx2 + 829440*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(784631 + 2304*(457 + 144*pms->kappa1 + 144*pms->kappa2)*pms->sigx2) + 11520*(457*pms->dm + 144*(-1 + pms->dm)*pms->kappa1 + 144*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 11520*(457 + 144*pms->kappa1 + 144*pms->kappa2)*pms->sx2) - 72*var->e04*(5795355294 - 292984135*pms->eta2 - 18000*(-8329 + 3384*(-1 + pms->dm)*pms->kappa1 - 3384*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 3*pms->eta*(238360669 + 24000*(11713 + 1692*pms->kappa1 + 1692*pms->kappa2)*pms->sigx2) + 72000*(11713*pms->dm + 1692*(-1 + pms->dm)*pms->kappa1 + 1692*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 72000*(11713 + 1692*pms->kappa1 + 1692*pms->kappa2)*pms->sx2) + 720*var->e02*(1735137111 - 23462041*pms->eta2 - 4800*(-3903 + 5369*(-1 + pms->dm)*pms->kappa1 - 5369*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 3*pms->eta*(46125061 + 3200*(18544 + 5369*pms->kappa1 + 5369*pms->kappa2)*pms->sigx2) + 9600*(18544*pms->dm + 5369*(-1 + pms->dm)*pms->kappa1 + 5369*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 9600*(18544 + 5369*pms->kappa1 + 5369*pms->kappa2)*pms->sx2) + var->e06*(353355865138 - 14134602585*pms->eta2 + 4408362000*pms->sigx2 + 5690394000*pms->kappa1*pms->sigx2 - 5690394000*pms->dm*pms->kappa1*pms->sigx2 + 5690394000*pms->kappa2*pms->sigx2 + 5690394000*pms->dm*pms->kappa2*pms->sigx2 - pms->eta*(116929053049 + 36000*(1122084 + 316133*pms->kappa1 + 316133*pms->kappa2)*pms->sigx2) + 36000*(1122084*pms->dm + 316133*(-1 + pms->dm)*pms->kappa1 + 316133*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 36000*(1122084 + 316133*pms->kappa1 + 316133*pms->kappa2)*pms->sx2)))*var->vom6)/40768634880;
	COMPLEX16 PN3=(-5*var->e03*(-9012068352*pms->dm*pms->sigx + 23554169856*pms->dm*var->e02*pms->sigx - 15251757696*pms->dm*var->e04*pms->sigx + 7468673072*pms->dm*var->e06*pms->sigx - 496928135*pms->dm*var->e08*pms->sigx - 24800477184*pms->sx + 60024609792*var->e02*pms->sx - 34549103232*var->e04*pms->sx + 16812539184*var->e06*pms->sx + 112722105*var->e08*pms->sx + 6*pms->cosp2Th0Phi*(296239104 - 720018432*var->e02 + 650788992*var->e04 - 306194224*var->e06 + 87419195*var->e08)*(pms->dm*pms->sigx + pms->sx) + (12*I)*(174440448 - 506870784*var->e02 + 523845504*var->e04 - 263507888*var->e06 + 79891965*var->e08)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/1189085184;
	COMPLEX16 PN2=-1.0/9512681472*(var->e03*(pms->cosp2Th0Phi*(-29215162368 + 3246685829*var->e010 + 78149320704*var->e02 - 81787797504*var->e04 + 44761631488*var->e06 - 14792571440*var->e08)*(-1 + 3*pms->eta) + 16515072*(42291 + 1513*pms->eta) + 2064384*var->e02*(-1145859 + 49138*pms->eta) - 258048*var->e04*(-8006772 + 1031779*pms->eta) + 1792*var->e06*(-530934021 + 114828097*pms->eta) - 80*var->e08*(-2773973757 + 1033098389*pms->eta) + var->e010*(-70396229706 + 19548031367*pms->eta))*var->vom4);
	COMPLEX16 PN0=(-625*var->e03*(7134511104 - 527095944*var->e010 + 81139957*var->e012 - 19173998592*var->e02 + 18783830016*var->e04 - 9214636032*var->e06 + 2733868800*var->e08)*var->vom2)/684913065984;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e02*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((-288000*(-4979 + 18201*pms->eta) + 5760*var->e02*(-1351117 + 5007543*pms->eta) - 30*var->e04*(-397919521 + 1465647459*pms->eta) + var->e06*(-8051808079 + 29192482941*pms->eta))*pms->sigx - 3*pms->dm*(-1393194240 + 7009234560*var->e02 - 9960753690*var->e04 + 6166492439*var->e06)*pms->sx + 125*pms->cosp2Th0Phi*(-((-3951360 + 18290304*var->e02 - 30247350*var->e04 + 24117995*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 1875*pms->dm*(-2304 + 10368*var->e02 - 16770*var->e04 + 13171*var->e06)*pms->sx))*var->vom6)/35389440;
	COMPLEX16 PN3=(pms->dm*var->e02*(15*pms->cosp2Th0Phi*(1753104384 - 7177125888*var->e02 + 11913701760*var->e04 - 10269849600*var->e06 + 5061783455*var->e08)*(-1 + 2*pms->eta) - 2211840*(167527 + 12450*pms->eta) - 737280*var->e02*(-3907885 + 246474*pms->eta) + 5760*var->e04*(-995120839 + 147132990*pms->eta) - 3072*var->e06*(-1555751507 + 367005450*pms->eta) + var->e08*(-1950159397063 + 679159849950*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/6794772480;
	COMPLEX16 PN1=-1.0/38050725888*(pms->dm*var->e02*(252086059008 - 238965865728*var->e010 + 45306206071*var->e012 - 1170059821056*var->e02 + 2043027947520*var->e04 - 1750613114880*var->e06 + 818923392000*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/35389440)*var->e02*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((-288000*(-4979 + 18201*pms->eta) + 5760*var->e02*(-1351117 + 5007543*pms->eta) - 30*var->e04*(-397919521 + 1465647459*pms->eta) + var->e06*(-8051808079 + 29192482941*pms->eta))*pms->sigx - 3*pms->dm*(-1393194240 + 7009234560*var->e02 - 9960753690*var->e04 + 6166492439*var->e06)*pms->sx + 125*pms->cosp2Th0Phi*(-((-3951360 + 18290304*var->e02 - 30247350*var->e04 + 24117995*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 1875*pms->dm*(-2304 + 10368*var->e02 - 16770*var->e04 + 13171*var->e06)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(I/6794772480)*pms->dm*var->e02*(15*pms->cosp2Th0Phi*(1753104384 - 7177125888*var->e02 + 11913701760*var->e04 - 10269849600*var->e06 + 5061783455*var->e08)*(-1 + 2*pms->eta) - 2211840*(167527 + 12450*pms->eta) - 737280*var->e02*(-3907885 + 246474*pms->eta) + 5760*var->e04*(-995120839 + 147132990*pms->eta) - 3072*var->e06*(-1555751507 + 367005450*pms->eta) + var->e08*(-1950159397063 + 679159849950*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e02*(252086059008 - 238965865728*var->e010 + 45306206071*var->e012 - 1170059821056*var->e02 + 2043027947520*var->e04 - 1750613114880*var->e06 + 818923392000*var->e08)*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/38050725888;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl5_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/849346560*I)*var->e0*(3*pms->cosp2Th0Phi*(861585408 - 5805877248*var->e02 + 14430478080*var->e04 - 18161007920*var->e06 + 12983200955*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 147456*(-187164 + 509845*pms->eta + 116325*pms->eta2) + 55296*var->e02*(-8672074 + 25648965*pms->eta + 146465*pms->eta2) + 3840*var->e04*(436968870 - 1325713507*pms->eta + 90123849*pms->eta2) - 80*var->e06*(28900498716 - 89433265817*pms->eta + 11792728935*pms->eta2) + 3*var->e08*(523811393552 - 1654737564631*pms->eta + 337452005825*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/28538044416)*var->e0*(138528423936 - 1221479940408*var->e010 + 336302375123*var->e012 - 1090911338496*var->e02 + 2970133512192*var->e04 - 3926365793280*var->e06 + 2850433564608*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl5_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e0*(3*pms->cosp2Th0Phi*(861585408 - 5805877248*var->e02 + 14430478080*var->e04 - 18161007920*var->e06 + 12983200955*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 147456*(-187164 + 509845*pms->eta + 116325*pms->eta2) + 55296*var->e02*(-8672074 + 25648965*pms->eta + 146465*pms->eta2) + 3840*var->e04*(436968870 - 1325713507*pms->eta + 90123849*pms->eta2) - 80*var->e06*(28900498716 - 89433265817*pms->eta + 11792728935*pms->eta2) + 3*var->e08*(523811393552 - 1654737564631*pms->eta + 337452005825*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/849346560;
	COMPLEX16 PN2=-1.0/28538044416*(var->e0*(138528423936 - 1221479940408*var->e010 + 336302375123*var->e012 - 1090911338496*var->e02 + 2970133512192*var->e04 - 3926365793280*var->e06 + 2850433564608*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl5_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(pms->dm*(-69304320 + 8750652559*var->e010 + 1197785088*var->e02 - 5589038592*var->e04 + 11769244928*var->e06 - 13323388502*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/56623104;
	return PN3;
}

COMPLEX16 cpart_LPartsl5_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/56623104)*pms->dm*(-69304320 + 8750652559*var->e010 + 1197785088*var->e02 - 5589038592*var->e04 + 11769244928*var->e06 - 13323388502*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl5_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/28311552*I)*var->e0*(128286720 - 1321804800*var->e02 + 4788607872*var->e04 - 8620041840*var->e06 + 8750624695*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl5_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e0*(128286720 - 1321804800*var->e02 + 4788607872*var->e04 - 8620041840*var->e06 + 8750624695*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/28311552;
	return PN4;
}

COMPLEX16 spart_LPartsl6_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-2238921*pms->dm*var->e011*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/252313600;
	return PN3;
}

COMPLEX16 cpart_LPartsl6_km5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=((2238921*I)/252313600)*pms->dm*var->e011*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl6_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((27*I)/15769600)*var->e010*(12881 + 1883*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl6_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(27*var->e010*(12881 + 1883*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/15769600;
	return PN2;
}

COMPLEX16 spart_LPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e09*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((552299 - 2284526*pms->eta)*pms->sigx + 1144167*pms->dm*pms->sx + 2430*pms->cosp2Th0Phi*(31*(1 - 3*pms->eta)*pms->sigx + 40*pms->dm*pms->sx))*var->vom6)/1146880;
	COMPLEX16 PN3=(3*pms->dm*var->e09*(-29961380 + 5971320*pms->eta + 81*pms->cosp2Th0Phi*(-7100 + 2121*var->e02)*(-1 + 2*pms->eta) - var->e02*(1517291 + 242514*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/45875200;
	COMPLEX16 PN1=(-81*pms->dm*(32560 + 1584*var->e02 + 10995*var->e04 + 7030*var->e06)*var->e09*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/63078400;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e09*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*((552299 - 2284526*pms->eta)*pms->sigx + 1144167*pms->dm*pms->sx + 2430*pms->cosp2Th0Phi*(31*(1 - 3*pms->eta)*pms->sigx + 40*pms->dm*pms->sx))*var->vom6)/1146880;
	COMPLEX16 PN3=(3*pms->dm*var->e09*(-29961380 + 5971320*pms->eta + 81*pms->cosp2Th0Phi*(-7100 + 2121*var->e02)*(-1 + 2*pms->eta) - var->e02*(1517291 + 242514*pms->eta))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/45875200;
	COMPLEX16 PN1=((81*I)/63078400)*pms->dm*(32560 + 1584*var->e02 + 10995*var->e04 + 7030*var->e06)*var->e09*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl6_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/550502400*I)*var->e08*pms->expm4Thm4Phi*(-17532039*(1 - 5*pms->eta + 5*pms->eta2) + 5998698*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 70128156*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi + 8*(198278923 - 627507295*pms->eta + 197376375*pms->eta2)*pms->expp2Thp4Phi - 105192234*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 70128156*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi + 8*(198278923 - 627507295*pms->eta + 197376375*pms->eta2)*pms->expp6Thp4Phi - 17532039*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 5998698*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 12*pms->expp4Thp4Phi*(215988535*pms->eta2 - 5*pms->eta*(305224555 + 1152*(15014 + 9451*pms->kappa1 + 9451*pms->kappa2)*pms->sigx2) - 3*(571681127 + 960*(1944 + 9451*(-1 + pms->dm)*pms->kappa1 - 9451*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 5760*(15014*pms->dm + 9451*(-1 + pms->dm)*pms->kappa1 + 9451*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 5760*(15014 + 9451*pms->kappa1 + 9451*pms->kappa2)*pms->sx2))*var->vom6;
	COMPLEX16 PN3=(I/35840)*var->e08*(-32025*pms->dm*pms->sigx - 13373*pms->dm*var->e02*pms->sigx - 74367*pms->sx - 37203*var->e02*pms->sx + 972*pms->cosp2Th0Phi*(-7 + 2*var->e02)*(pms->dm*pms->sigx + pms->sx) - (972*I)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=((3*I)/2867200)*var->e08*(3825600 + var->e04*(1587113 - 130914*pms->eta) - 383760*pms->eta + 18*pms->cosp2Th0Phi*(1880 - 1490*var->e02 + 559*var->e04)*(-1 + 3*pms->eta) + 20*var->e02*(-45739 + 9279*pms->eta))*var->vom4;
	COMPLEX16 PN0=((81*I)/1971200)*(1760 - 440*var->e02 + 451*var->e04 + 115*var->e06)*var->e08*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl6_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/550502400*(var->e08*pms->expm4Thm4Phi*(17532039*(1 - 5*pms->eta + 5*pms->eta2) + 5998698*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 70128156*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi + 8*(198278923 - 627507295*pms->eta + 197376375*pms->eta2)*pms->expp2Thp4Phi + 105192234*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 70128156*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi + 8*(198278923 - 627507295*pms->eta + 197376375*pms->eta2)*pms->expp6Thp4Phi + 17532039*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 5998698*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 12*pms->expp4Thp4Phi*(215988535*pms->eta2 - 5*pms->eta*(305224555 + 1152*(15014 + 9451*pms->kappa1 + 9451*pms->kappa2)*pms->sigx2) - 3*(571681127 + 960*(1944 + 9451*(-1 + pms->dm)*pms->kappa1 - 9451*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 5760*(15014*pms->dm + 9451*(-1 + pms->dm)*pms->kappa1 + 9451*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 5760*(15014 + 9451*pms->kappa1 + 9451*pms->kappa2)*pms->sx2))*var->vom6);
	COMPLEX16 PN3=(var->e08*(-32025*pms->dm*pms->sigx - 13373*pms->dm*var->e02*pms->sigx - 74367*pms->sx - 37203*var->e02*pms->sx + 972*pms->cosp2Th0Phi*(-5 + var->e02)*(pms->dm*pms->sigx + pms->sx) + (972*I)*(-3 + var->e02)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/35840;
	COMPLEX16 PN2=(3*var->e08*(3825600 + var->e04*(1587113 - 130914*pms->eta) - 383760*pms->eta + 18*pms->cosp2Th0Phi*(1880 - 1490*var->e02 + 559*var->e04)*(-1 + 3*pms->eta) + 20*var->e02*(-45739 + 9279*pms->eta))*var->vom4)/2867200;
	COMPLEX16 PN0=(81*(1760 - 440*var->e02 + 451*var->e04 + 115*var->e06)*var->e08*var->vom2)/1971200;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e07*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(-((2*(575794 + 58563*var->e02)*(-1 + 3*pms->eta) + (52260120 - 184398568*pms->eta + 3*var->e02*(-5146429 + 10070512*pms->eta))*pms->exp0Thp2Phi)*pms->sigx) + pms->dm*(-11664*(-12 + 11*var->e02) + (-120757408 + 27333729*var->e02)*pms->exp0Thp2Phi)*pms->sx - 2*pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(-575794 - 58563*var->e02 + (-295636 + 20898*var->e02)*pms->exp0Thp2Phi)*pms->sigx + 5832*pms->dm*(-12 + 11*var->e02)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/3440640;
	COMPLEX16 PN3=(pms->dm*var->e07*pms->exp0Thm3Phi*(3*(7443568 - 1204304*var->e02 + 3024415*var->e04)*(-1 + 2*pms->eta) + (-32*var->e02*(45948538 + 3882573*pms->eta) + 16*(95357713 + 5638734*pms->eta) + var->e04*(977256265 + 69001470*pms->eta))*pms->exp0Thp2Phi - 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(7443568 - 1204304*var->e02 + 3024415*var->e04 + (-508976 - 6267632*var->e02 + 1845253*var->e04)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/55050240;
	COMPLEX16 PN1=(-81*pms->dm*var->e07*(492800 - 410080*var->e02 + 214720*var->e04 - 40238*var->e06 + 22615*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/126156800;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e07*(I*pms->cos0Thp2Phi + pms->sin0Thp2Phi)*pms->sinp1Th0Phi*(I*pms->sin0Thp1Phi*((51108532 - 180943804*pms->eta + 3*var->e02*(-5185471 + 10187638*pms->eta))*pms->sigx - 5*pms->dm*(-24123488 + 5441085*var->e02)*pms->sx + 10*pms->cosp2Th0Phi*(-((174286 + 7533*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 5832*pms->dm*(-12 + 11*var->e02)*pms->sx)) + pms->cos0Thp1Phi*((53411708 - 187853332*pms->eta + 3*var->e02*(-5107387 + 9953386*pms->eta))*pms->sigx + pms->dm*(120897376 - 27462033*var->e02)*pms->sx + 6*pms->cosp2Th0Phi*((93386 + 26487*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 13608*pms->dm*(-12 + 11*var->e02)*pms->sx)))*var->vom6)/3440640;
	COMPLEX16 PN3=(I/55050240)*pms->dm*var->e07*pms->exp0Thm3Phi*(3*(7443568 - 1204304*var->e02 + 3024415*var->e04)*(-1 + 2*pms->eta) - (-32*var->e02*(45948538 + 3882573*pms->eta) + 16*(95357713 + 5638734*pms->eta) + var->e04*(977256265 + 69001470*pms->eta))*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-7443568 + 1204304*var->e02 - 3024415*var->e04 + (-508976 - 6267632*var->e02 + 1845253*var->e04)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(81*pms->dm*var->e07*(492800 - 410080*var->e02 + 214720*var->e04 - 40238*var->e06 + 22615*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/126156800;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl6_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/71680)*var->e06*(pms->cosp2Th0Phi*(24598 + 68079*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 14*(-218454 + 607711*pms->eta + 364547*pms->eta2) - 3*var->e02*(-2687154 + 7493113*pms->eta + 3748037*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=((243*I)/10240)*var->e06*(-224 + 400*var->e02 - 278*var->e04 + 113*var->e06)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl6_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/6451200*(var->e06*(27*pms->cosp2Th0Phi*(-1343349 + 451337*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 7*(-15644241 + 58700365*pms->eta + 20312295*pms->eta2) + var->e02*(-683389131 + 2015650255*pms->eta + 797398845*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	COMPLEX16 PN2=(var->e06*(-6429136 + 9202576*var->e02 - 6300567*var->e04 + 2230214*var->e06)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4)/860160;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e05*pms->exp0Thm3Phi*pms->sinp1Th0Phi*((15526224 - 28311892*var->e02 + 23791779*var->e04)*(-1 + 3*pms->eta)*pms->sigx - (672*(340636 + 972993*pms->eta) - 56*var->e02*(4319787 + 17839087*pms->eta) + 6*var->e04*(5889286 + 132951161*pms->eta))*pms->exp0Thp2Phi*pms->sigx + 2*pms->dm*(23328*(56 - 133*var->e02 + 121*var->e04) + (208968816 - 352969120*var->e02 + 286533567*var->e04)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(15526224 - 28311892*var->e02 + 23791779*var->e04 + 2*(6872208 - 16995524*var->e02 + 16137423*var->e04)*pms->exp0Thp2Phi)*pms->sigx) + 46656*pms->dm*(56 - 133*var->e02 + 121*var->e04)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/3440640;
	COMPLEX16 PN3=(pms->dm*var->e05*pms->exp0Thm3Phi*(3*(-217712320 + 551647376*var->e02 - 573765460*var->e04 + 320308773*var->e06)*(-1 + 2*pms->eta) + (var->e06*(722963483 - 1514526198*pms->eta) + 1344*(-352929 + 674690*pms->eta) - 112*var->e02*(-16367033 + 22638690*pms->eta) + 4*var->e04*(-430166971 + 669663414*pms->eta))*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(217712320 - 551647376*var->e02 + 573765460*var->e04 - 320308773*var->e06 + (-49237440 + 77322448*var->e02 - 61037924*var->e04 + 25315801*var->e06)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/55050240;
	COMPLEX16 PN1=(3*pms->dm*var->e05*(627200 + 653133*var->e010 + 10187520*var->e02 - 13892640*var->e04 + 8100400*var->e06 - 2694990*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/22937600;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/3440640)*var->e05*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(-(((15526224 - 28311892*var->e02 + 23791779*var->e04)*(-1 + 3*pms->eta) + (672*(340636 + 972993*pms->eta) - 56*var->e02*(4319787 + 17839087*pms->eta) + 6*var->e04*(5889286 + 132951161*pms->eta))*pms->exp0Thp2Phi)*pms->sigx) + 2*pms->dm*(-23328*(56 - 133*var->e02 + 121*var->e04) + (208968816 - 352969120*var->e02 + 286533567*var->e04)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-15526224 + 28311892*var->e02 - 23791779*var->e04 + 2*(6872208 - 16995524*var->e02 + 16137423*var->e04)*pms->exp0Thp2Phi)*pms->sigx) + 46656*pms->dm*(56 - 133*var->e02 + 121*var->e04)*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(I/55050240)*pms->dm*var->e05*pms->exp0Thm3Phi*(-3*(-217712320 + 551647376*var->e02 - 573765460*var->e04 + 320308773*var->e06)*(-1 + 2*pms->eta) + (var->e06*(722963483 - 1514526198*pms->eta) + 1344*(-352929 + 674690*pms->eta) - 112*var->e02*(-16367033 + 22638690*pms->eta) + 4*var->e04*(-430166971 + 669663414*pms->eta))*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-217712320 + 551647376*var->e02 - 573765460*var->e04 + 320308773*var->e06 + (-49237440 + 77322448*var->e02 - 61037924*var->e04 + 25315801*var->e06)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(3*pms->dm*var->e05*(627200 + 653133*var->e010 + 10187520*var->e02 - 13892640*var->e04 + 8100400*var->e06 - 2694990*var->e08)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/22937600;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl6_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/235929600*I)*var->e04*pms->expm4Thm4Phi*(9*(71354800 - 269546584*var->e02 + 413006849*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 54*(588880 - 2165352*var->e02 + 3846287*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 36*(71354800 - 269546584*var->e02 + 413006849*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(80*(17660091 - 53102335*pms->eta + 5551815*pms->eta2) - 8*var->e02*(532130439 - 1641858995*pms->eta + 337516035*pms->eta2) + var->e04*(4593519717 - 14636966225*pms->eta + 5308242585*pms->eta2))*pms->expp2Thp4Phi + 54*(71354800 - 269546584*var->e02 + 413006849*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 36*(71354800 - 269546584*var->e02 + 413006849*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(80*(17660091 - 53102335*pms->eta + 5551815*pms->eta2) - 8*var->e02*(532130439 - 1641858995*pms->eta + 337516035*pms->eta2) + var->e04*(4593519717 - 14636966225*pms->eta + 5308242585*pms->eta2))*pms->expp6Thp4Phi + 9*(71354800 - 269546584*var->e02 + 413006849*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 54*(588880 - 2165352*var->e02 + 3846287*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 12*pms->expp4Thp4Phi*(80*(431098917 - 5888775*pms->eta2 + 6140160*pms->sigx2 + 9768960*pms->kappa1*pms->sigx2 - 9768960*pms->dm*pms->kappa1*pms->sigx2 + 9768960*pms->kappa2*pms->sigx2 + 9768960*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(9690053 + 9216*(1381 + 424*pms->kappa1 + 424*pms->kappa2)*pms->sigx2) + 46080*(1381*pms->dm + 424*(-1 + pms->dm)*pms->kappa1 + 424*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 46080*(1381 + 424*pms->kappa1 + 424*pms->kappa2)*pms->sx2) - 8*var->e02*(13193547393 - 251501115*pms->eta2 - 34560*(-4609 + 5656*(-1 + pms->dm)*pms->kappa1 - 5656*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(230598529 + 27648*(10265 + 2828*pms->kappa1 + 2828*pms->kappa2)*pms->sigx2) + 138240*(10265*pms->dm + 2828*(-1 + pms->dm)*pms->kappa1 + 2828*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 138240*(10265 + 2828*pms->kappa1 + 2828*pms->kappa2)*pms->sx2) + var->e04*(58903790379 - 2793611625*pms->eta2 + 1199543040*pms->sigx2 + 709689600*pms->kappa1*pms->sigx2 - 709689600*pms->dm*pms->kappa1*pms->sigx2 + 709689600*pms->kappa2*pms->sigx2 + 709689600*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(1723337035 + 13824*(110488 + 20535*pms->kappa1 + 20535*pms->kappa2)*pms->sigx2) + 69120*(110488*pms->dm + 20535*(-1 + pms->dm)*pms->kappa1 + 20535*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 69120*(110488 + 20535*pms->kappa1 + 20535*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=(-1.0/17920*I)*var->e04*(3*pms->dm*(409920 - 1100400*var->e02 + 907802*var->e04 - 478383*var->e06)*pms->sigx + 3*(1104880 - 2767184*var->e02 + 2083753*var->e04 - 1051916*var->e06)*pms->sx + pms->cosp2Th0Phi*(-570640 + 1712816*var->e02 - 1959853*var->e04 + 1170158*var->e06)*(pms->dm*pms->sigx + pms->sx) - I*(-26320 + 134288*var->e02 - 197617*var->e04 + 132548*var->e06)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/1720320*I)*var->e04*(2*pms->cosp2Th0Phi*(4506880 - 13234928*var->e02 + 15771700*var->e04 - 10220357*var->e06 + 4130311*var->e08)*(-1 + 3*pms->eta) + 3*(var->e06*(146386834 - 30817926*pms->eta) - 17920*(4316 + 45*pms->eta) + 751*var->e08*(-62783 + 19854*pms->eta) - 224*var->e02*(-1155533 + 64431*pms->eta) + 56*var->e04*(-4762291 + 621045*pms->eta)))*var->vom4;
	COMPLEX16 PN0=((-81*I)/358400)*var->e04*(-44800 + 7733*var->e010 + 129920*var->e02 - 145040*var->e04 + 85400*var->e06 - 31240*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl6_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e04*pms->expm4Thm4Phi*(-9*(71354800 - 269546584*var->e02 + 413006849*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 54*(588880 - 2165352*var->e02 + 3846287*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 36*(71354800 - 269546584*var->e02 + 413006849*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(80*(17660091 - 53102335*pms->eta + 5551815*pms->eta2) - 8*var->e02*(532130439 - 1641858995*pms->eta + 337516035*pms->eta2) + var->e04*(4593519717 - 14636966225*pms->eta + 5308242585*pms->eta2))*pms->expp2Thp4Phi - 54*(71354800 - 269546584*var->e02 + 413006849*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 36*(71354800 - 269546584*var->e02 + 413006849*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(80*(17660091 - 53102335*pms->eta + 5551815*pms->eta2) - 8*var->e02*(532130439 - 1641858995*pms->eta + 337516035*pms->eta2) + var->e04*(4593519717 - 14636966225*pms->eta + 5308242585*pms->eta2))*pms->expp6Thp4Phi - 9*(71354800 - 269546584*var->e02 + 413006849*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 54*(588880 - 2165352*var->e02 + 3846287*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 12*pms->expp4Thp4Phi*(80*(431098917 - 5888775*pms->eta2 + 6140160*pms->sigx2 + 9768960*pms->kappa1*pms->sigx2 - 9768960*pms->dm*pms->kappa1*pms->sigx2 + 9768960*pms->kappa2*pms->sigx2 + 9768960*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(9690053 + 9216*(1381 + 424*pms->kappa1 + 424*pms->kappa2)*pms->sigx2) + 46080*(1381*pms->dm + 424*(-1 + pms->dm)*pms->kappa1 + 424*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 46080*(1381 + 424*pms->kappa1 + 424*pms->kappa2)*pms->sx2) - 8*var->e02*(13193547393 - 251501115*pms->eta2 - 34560*(-4609 + 5656*(-1 + pms->dm)*pms->kappa1 - 5656*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(230598529 + 27648*(10265 + 2828*pms->kappa1 + 2828*pms->kappa2)*pms->sigx2) + 138240*(10265*pms->dm + 2828*(-1 + pms->dm)*pms->kappa1 + 2828*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 138240*(10265 + 2828*pms->kappa1 + 2828*pms->kappa2)*pms->sx2) + var->e04*(58903790379 - 2793611625*pms->eta2 + 1199543040*pms->sigx2 + 709689600*pms->kappa1*pms->sigx2 - 709689600*pms->dm*pms->kappa1*pms->sigx2 + 709689600*pms->kappa2*pms->sigx2 + 709689600*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(1723337035 + 13824*(110488 + 20535*pms->kappa1 + 20535*pms->kappa2)*pms->sigx2) + 69120*(110488*pms->dm + 20535*(-1 + pms->dm)*pms->kappa1 + 20535*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 69120*(110488 + 20535*pms->kappa1 + 20535*pms->kappa2)*pms->sx2)))*var->vom6)/235929600;
	COMPLEX16 PN3=(var->e04*(3*pms->dm*(409920 - 1100400*var->e02 + 907802*var->e04 - 478383*var->e06)*pms->sigx + 3*(1104880 - 2767184*var->e02 + 2083753*var->e04 - 1051916*var->e06)*pms->sx + pms->cosp2Th0Phi*(-245840 + 654976*var->e02 - 683501*var->e04 + 386257*var->e06)*(pms->dm*pms->sigx + pms->sx) + I*(-298480 + 923552*var->e02 - 1078735*var->e04 + 651353*var->e06)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/17920;
	COMPLEX16 PN2=(var->e04*(2*pms->cosp2Th0Phi*(4506880 - 13234928*var->e02 + 15771700*var->e04 - 10220357*var->e06 + 4130311*var->e08)*(-1 + 3*pms->eta) + 3*(var->e06*(146386834 - 30817926*pms->eta) - 17920*(4316 + 45*pms->eta) + 751*var->e08*(-62783 + 19854*pms->eta) - 224*var->e02*(-1155533 + 64431*pms->eta) + 56*var->e04*(-4762291 + 621045*pms->eta)))*var->vom4)/1720320;
	COMPLEX16 PN0=(81*var->e04*(-44800 + 7733*var->e010 + 129920*var->e02 - 145040*var->e04 + 85400*var->e06 - 31240*var->e08)*var->vom2)/358400;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e03*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((1600*(31303 - 114489*pms->eta) + 240*var->e02*(-1043021 + 3842709*pms->eta) - 48*var->e04*(-8467043 + 30987297*pms->eta) + 25*var->e06*(-12668269 + 45729009*pms->eta))*pms->sigx - 6*pms->dm*(-23626880 + 110610000*var->e02 - 167648736*var->e04 + 121234361*var->e06)*pms->sx + 5*pms->cosp2Th0Phi*(-5*(-686272 + 3162000*var->e02 - 5531280*var->e04 + 4944067*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 46656*pms->dm*(-80 + 360*var->e02 - 618*var->e04 + 545*var->e06)*pms->sx))*var->vom6)/491520;
	COMPLEX16 PN3=(pms->dm*var->e03*(3*pms->cosp2Th0Phi*(157346560 - 668615360*var->e02 + 1184263360*var->e04 - 1133311172*var->e06 + 651990949*var->e08)*(-1 + 2*pms->eta) - 8960*(892205 + 11958*pms->eta) - 2240*var->e02*(-23682757 + 2092554*pms->eta) + 448*var->e04*(-239856877 + 39611250*pms->eta) - 28*var->e06*(-3565903259 + 876186870*pms->eta) + var->e08*(-50221432537 + 17121735810*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/55050240;
	COMPLEX16 PN1=(-3*pms->dm*var->e03*(106086400 - 167041974*var->e010 + 40632017*var->e012 - 494323200*var->e02 + 905694720*var->e04 - 857157280*var->e06 + 471287760*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/22937600;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/491520)*var->e03*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((1600*(31303 - 114489*pms->eta) + 240*var->e02*(-1043021 + 3842709*pms->eta) - 48*var->e04*(-8467043 + 30987297*pms->eta) + 25*var->e06*(-12668269 + 45729009*pms->eta))*pms->sigx - 6*pms->dm*(-23626880 + 110610000*var->e02 - 167648736*var->e04 + 121234361*var->e06)*pms->sx + 5*pms->cosp2Th0Phi*(-5*(-686272 + 3162000*var->e02 - 5531280*var->e04 + 4944067*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 46656*pms->dm*(-80 + 360*var->e02 - 618*var->e04 + 545*var->e06)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(I/55050240)*pms->dm*var->e03*(3*pms->cosp2Th0Phi*(157346560 - 668615360*var->e02 + 1184263360*var->e04 - 1133311172*var->e06 + 651990949*var->e08)*(-1 + 2*pms->eta) - 8960*(892205 + 11958*pms->eta) - 2240*var->e02*(-23682757 + 2092554*pms->eta) + 448*var->e04*(-239856877 + 39611250*pms->eta) - 28*var->e06*(-3565903259 + 876186870*pms->eta) + var->e08*(-50221432537 + 17121735810*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(3*pms->dm*var->e03*(106086400 - 167041974*var->e010 + 40632017*var->e012 - 494323200*var->e02 + 905694720*var->e04 - 857157280*var->e06 + 471287760*var->e08)*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/22937600;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl6_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/184320)*var->e02*(var->e04*(-1016111331 + 3094982495*pms->eta - 272132295*pms->eta2) + 9*pms->cosp2Th0Phi*(-201768 + 1255248*var->e02 - 3106189*var->e04 + 4101637*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 8*(-3323319 + 9430975*pms->eta + 971205*pms->eta2) + 16*var->e02*(19704462 - 58703195*pms->eta + 1393305*pms->eta2) + var->e06*(1447126923 - 4489494563*pms->eta + 661467795*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(-1.0/8601600*I)*var->e02*(-129516800 + 1320958363*var->e010 + 911456000*var->e02 - 2428932800*var->e04 + 3332077280*var->e06 - 2654450505*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl6_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/184320*(var->e02*(var->e04*(-1016111331 + 3094982495*pms->eta - 272132295*pms->eta2) + 9*pms->cosp2Th0Phi*(-201768 + 1255248*var->e02 - 3106189*var->e04 + 4101637*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 8*(-3323319 + 9430975*pms->eta + 971205*pms->eta2) + 16*var->e02*(19704462 - 58703195*pms->eta + 1393305*pms->eta2) + var->e06*(1447126923 - 4489494563*pms->eta + 661467795*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	COMPLEX16 PN2=(var->e02*(-129516800 + 1320958363*var->e010 + 911456000*var->e02 - 2428932800*var->e04 + 3332077280*var->e06 - 2654450505*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/8601600;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl6_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(pms->dm*var->e0*(-49689600 + 3928450121*var->e010 + 580704000*var->e02 - 2353275200*var->e04 + 4750843200*var->e06 - 5502915000*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/6553600;
	return PN3;
}

COMPLEX16 cpart_LPartsl6_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/6553600)*pms->dm*var->e0*(-49689600 + 3928450121*var->e010 + 580704000*var->e02 - 2353275200*var->e04 + 4750843200*var->e06 - 5502915000*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl6_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/327680)*(499712 - 12594816*var->e02 + 84800832*var->e04 - 259971464*var->e06 + 440835021*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl6_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/327680*((499712 - 12594816*var->e02 + 84800832*var->e04 - 259971464*var->e06 + 440835021*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

COMPLEX16 spart_LPartsl7_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((-823543*I)/13453649510400)*var->e011*(-437520 + 9071*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl7_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(-823543*var->e011*(-437520 + 9071*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/13453649510400;
	return PN2;
}

COMPLEX16 spart_LPartsl7_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/1426902220800*(pms->dm*var->e010*(3594910848731 - 725015962566*pms->eta + 74254754595*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(-117649*pms->dm*var->e010*(1850112 - 264192*var->e02 + 640127*var->e04)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/4484549836800;
	return PN3+PN1;
}

COMPLEX16 cpart_LPartsl7_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/1426902220800)*pms->dm*var->e010*(3594910848731 - 725015962566*pms->eta + 74254754595*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=((117649*I)/4484549836800)*pms->dm*var->e010*(1850112 - 264192*var->e02 + 640127*var->e04)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN3+PN1;
}

COMPLEX16 spart_LPartsl7_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/17122826649600*I)*var->e09*pms->expm4Thm4Phi*(-726718485717*(1 - 5*pms->eta + 5*pms->eta2) + 306779597208*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 2906873942868*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi + 16*(4587169834899 - 14516697477880*pms->eta + 4424675653650*pms->eta2)*pms->expp2Thp4Phi - 4360310914302*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 2906873942868*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi + 16*(4587169834899 - 14516697477880*pms->eta + 4424675653650*pms->eta2)*pms->expp6Thp4Phi - 726718485717*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 306779597208*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 48*pms->expp4Thp4Phi*(-18475613297789 + 2417722694625*pms->eta2 - 58109194080*pms->sigx2 + 262866975840*pms->kappa1*pms->sigx2 - 262866975840*pms->dm*pms->kappa1*pms->sigx2 + 262866975840*pms->kappa2*pms->sigx2 + 262866975840*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(3401624047313 + 28224*(5803792 + 3725439*pms->kappa1 + 3725439*pms->kappa2)*pms->sigx2) + 141120*(5803792*pms->dm + 3725439*(-1 + pms->dm)*pms->kappa1 + 3725439*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 141120*(5803792 + 3725439*pms->kappa1 + 3725439*pms->kappa2)*pms->sx2))*var->vom6;
	COMPLEX16 PN3=((7*I)/25480396800)*var->e09*(-4043656040*pms->dm*pms->sigx - 708054745*pms->dm*var->e02*pms->sigx - 9303358440*pms->sx - 2412471513*var->e02*pms->sx + 1764735*pms->cosp2Th0Phi*(-520 + 251*var->e02)*(pms->dm*pms->sigx + pms->sx) + (352947*I)*(-360 + 79*var->e02)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=((7*I)/560568729600)*var->e09*(var->e04*(195330979590 - 19299024311*pms->eta) + 1760*(229562757 - 23781905*pms->eta) + 117649*pms->cosp2Th0Phi*(33440 - 32692*var->e02 + 15811*var->e04)*(-1 + 3*pms->eta) + 44*var->e02*(-4398557115 + 677137223*pms->eta))*var->vom4;
	COMPLEX16 PN0=((117649*I)/26907299020800)*(18754560 - 8452224*var->e02 + 6142032*var->e04 + 284753*var->e06)*var->e09*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl7_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/17122826649600*(var->e09*pms->expm4Thm4Phi*(726718485717*(1 - 5*pms->eta + 5*pms->eta2) + 306779597208*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 2906873942868*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi + 16*(4587169834899 - 14516697477880*pms->eta + 4424675653650*pms->eta2)*pms->expp2Thp4Phi + 4360310914302*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 2906873942868*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi + 16*(4587169834899 - 14516697477880*pms->eta + 4424675653650*pms->eta2)*pms->expp6Thp4Phi + 726718485717*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 306779597208*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 48*pms->expp4Thp4Phi*(-18475613297789 + 2417722694625*pms->eta2 - 58109194080*pms->sigx2 + 262866975840*pms->kappa1*pms->sigx2 - 262866975840*pms->dm*pms->kappa1*pms->sigx2 + 262866975840*pms->kappa2*pms->sigx2 + 262866975840*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(3401624047313 + 28224*(5803792 + 3725439*pms->kappa1 + 3725439*pms->kappa2)*pms->sigx2) + 141120*(5803792*pms->dm + 3725439*(-1 + pms->dm)*pms->kappa1 + 3725439*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 141120*(5803792 + 3725439*pms->kappa1 + 3725439*pms->kappa2)*pms->sx2))*var->vom6);
	COMPLEX16 PN3=(7*var->e09*(-4043656040*pms->dm*pms->sigx - 708054745*pms->dm*var->e02*pms->sigx - 9303358440*pms->sx - 2412471513*var->e02*pms->sx + 705894*pms->cosp2Th0Phi*(-920 + 373*var->e02)*(pms->dm*pms->sigx + pms->sx) + (9882516*I)*(-40 + 21*var->e02)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/25480396800;
	COMPLEX16 PN2=(7*var->e09*(var->e04*(195330979590 - 19299024311*pms->eta) + 1760*(229562757 - 23781905*pms->eta) + 117649*pms->cosp2Th0Phi*(33440 - 32692*var->e02 + 15811*var->e04)*(-1 + 3*pms->eta) + 44*var->e02*(-4398557115 + 677137223*pms->eta))*var->vom4)/560568729600;
	COMPLEX16 PN0=(117649*(18754560 - 8452224*var->e02 + 6142032*var->e04 + 284753*var->e06)*var->e09*var->vom2)/26907299020800;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e08*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(-1790592881*(-1 + 3*pms->eta)*pms->sigx + (-84471430382 + 295134800266*pms->eta)*pms->exp0Thp2Phi*pms->sigx - pms->dm*(-236356841 + 194497773262*pms->exp0Thp2Phi)*pms->sx + 7*pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(255798983 + 136578982*pms->exp0Thp2Phi)*pms->sigx + 33765263*pms->dm*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/3963617280;
	COMPLEX16 PN3=(pms->dm*var->e08*pms->exp0Thm3Phi*(-42*(-917037564 + 376243621*var->e02)*(-1 + 2*pms->eta) + (18*(157382286553 + 9531889374*pms->eta) - var->e02*(3486422222609 + 278511802254*pms->eta))*pms->exp0Thp2Phi + 21*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-1834075128 + 752487242*var->e02 + (-84453462 + 1825545643*var->e02)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/71345111040;
	COMPLEX16 PN1=(117649*pms->dm*(-1900800 + 2038080*var->e02 - 1222122*var->e04 + 364901*var->e06)*var->e08*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/560568729600;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/3963617280*I)*var->e08*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(1790592881*(-1 + 3*pms->eta)*pms->sigx + (-84471430382 + 295134800266*pms->eta)*pms->exp0Thp2Phi*pms->sigx - pms->dm*(236356841 + 194497773262*pms->exp0Thp2Phi)*pms->sx + 7*pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(-255798983 + 136578982*pms->exp0Thp2Phi)*pms->sigx + 33765263*pms->dm*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(-1.0/71345111040*I)*pms->dm*var->e08*pms->exp0Thm3Phi*(42*(-917037564 + 376243621*var->e02)*(-1 + 2*pms->eta) + (18*(157382286553 + 9531889374*pms->eta) - var->e02*(3486422222609 + 278511802254*pms->eta))*pms->exp0Thp2Phi + 21*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(1834075128 - 752487242*var->e02 + (-84453462 + 1825545643*var->e02)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=((-117649*I)/560568729600)*pms->dm*(-1900800 + 2038080*var->e02 - 1222122*var->e04 + 364901*var->e06)*var->e08*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl7_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((7*I)/566231040)*var->e07*(119*pms->cosp2Th0Phi*(102944 + 1550969*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 32*(-193895943 + 541866983*pms->eta + 303595469*pms->eta2) - 7*var->e02*(-2490359511 + 6970290271*pms->eta + 3392729237*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=((5764801*I)/203843174400)*(-276480 + 561600*var->e02 - 465240*var->e04 + 226069*var->e06)*var->e07*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl7_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/8493465600*(var->e07*(3*pms->cosp2Th0Phi*(-22162967584 + 11696854587*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 32*(-10452504129 + 35954864135*pms->eta + 12764593665*pms->eta2) + var->e02*(-1654096347639 + 4917584115965*pms->eta + 1911694034595*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	COMPLEX16 PN2=((-6548076840960 + 11152222655040*var->e02 - 8901044455560*var->e04 + 3994942249631*var->e06)*var->e07*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4)/611529523200;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/247726080*(var->e06*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(7*(-265628986 + 560504837*var->e02)*(-1 + 3*pms->eta)*pms->sigx - 2*(-14*(893498541 + 2725133321*pms->eta) + var->e02*(15301993295 + 69651567779*pms->eta))*pms->exp0Thp2Phi*pms->sigx + pms->dm*(5764801*(-58 + 151*var->e02) + (-49415543156 + 97868729134*var->e02)*pms->exp0Thp2Phi)*pms->sx + 7*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-265628986 + 560504837*var->e02 + (-253352484 + 683231818*var->e02)*pms->exp0Thp2Phi)*pms->sigx) + 823543*pms->dm*(-58 + 151*var->e02)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	COMPLEX16 PN3=(pms->dm*var->e06*pms->exp0Thm3Phi*(-7*(91104813824 - 255365496320*var->e02 + 300339476545*var->e04)*(-1 + 2*pms->eta) + 2*(10752*(-21526289 + 41335542*pms->eta) - 128*var->e02*(-7098876341 + 10530056250*pms->eta) + var->e04*(-990171636787 + 1616768083182*pms->eta))*pms->exp0Thp2Phi - 7*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-91104813824 + 255365496320*var->e02 - 300339476545*var->e04 + 6*(3100580352 - 5773057152*var->e02 + 5223538535*var->e04)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/31708938240;
	COMPLEX16 PN1=-1.0/163074539520*(pms->dm*var->e06*(-2832039936 - 333330923520*var->e02 + 523636589952*var->e04 - 363989774400*var->e06 + 149492853797*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e06*(pms->cos0Thp2Phi - I*pms->sin0Thp2Phi)*pms->sinp1Th0Phi*(pms->sin0Thp1Phi*((26877362050 + 70725524282*pms->eta - var->e02*(34527520449 + 127532533981*pms->eta))*pms->sigx + pms->dm*(-49749901614 + 98739214085*var->e02)*pms->sx + 245*pms->cosp2Th0Phi*(-((-14828042 + 35535333*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 117649*pms->dm*(-58 + 151*var->e02)*pms->sx)) - I*pms->cos0Thp1Phi*((23158556246 + 81881941694*pms->eta - var->e02*(26680452731 + 151073737135*pms->eta))*pms->sigx + pms->dm*(-49081184698 + 96998244183*var->e02)*pms->sx + 7*pms->cosp2Th0Phi*(-((12276502 + 122726981*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 5764801*pms->dm*(-58 + 151*var->e02)*pms->sx)))*var->vom6)/247726080;
	COMPLEX16 PN3=(-1.0/31708938240*I)*pms->dm*var->e06*pms->exp0Thm3Phi*(-7*(91104813824 - 255365496320*var->e02 + 300339476545*var->e04)*(-1 + 2*pms->eta) - 2*(10752*(-21526289 + 41335542*pms->eta) - 128*var->e02*(-7098876341 + 10530056250*pms->eta) + var->e04*(-990171636787 + 1616768083182*pms->eta))*pms->exp0Thp2Phi + 7*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(91104813824 - 255365496320*var->e02 + 300339476545*var->e04 + 6*(3100580352 - 5773057152*var->e02 + 5223538535*var->e04)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(-1.0/163074539520*I)*pms->dm*var->e06*(-2832039936 - 333330923520*var->e02 + 523636589952*var->e04 - 363989774400*var->e06 + 149492853797*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl7_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/79272345600*I)*var->e05*pms->expm4Thm4Phi*(112*(3928577196 - 15744924901*var->e02 + 26189613559*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 63*(389331136 - 1488559064*var->e02 + 2644607577*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 448*(3928577196 - 15744924901*var->e02 + 26189613559*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 4*(1344*(1299559631 - 3938076985*pms->eta + 549329085*pms->eta2) - 56*var->e02*(99761899301 - 309654021235*pms->eta + 73981591455*pms->eta2) + var->e04*(6854208291613 - 21909349331455*pms->eta + 8388385793235*pms->eta2))*pms->expp2Thp4Phi + 672*(3928577196 - 15744924901*var->e02 + 26189613559*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 448*(3928577196 - 15744924901*var->e02 + 26189613559*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 4*(1344*(1299559631 - 3938076985*pms->eta + 549329085*pms->eta2) - 56*var->e02*(99761899301 - 309654021235*pms->eta + 73981591455*pms->eta2) + var->e04*(6854208291613 - 21909349331455*pms->eta + 8388385793235*pms->eta2))*pms->expp6Thp4Phi + 112*(3928577196 - 15744924901*var->e02 + 26189613559*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 63*(389331136 - 1488559064*var->e02 + 2644607577*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 2*pms->expp4Thp4Phi*(1344*(93054326061 - 1654767015*pms->eta2 - 13440*(-97863 + 145609*(-1 + pms->dm)*pms->kappa1 - 145609*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(2044036565 + 5376*(486944 + 145609*pms->kappa1 + 145609*pms->kappa2)*pms->sigx2) + 26880*(486944*pms->dm + 145609*(-1 + pms->dm)*pms->kappa1 + 145609*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 26880*(486944 + 145609*pms->kappa1 + 145609*pms->kappa2)*pms->sx2) - 56*var->e02*(6775192930431 - 165244851805*pms->eta2 - 282240*(-313375 + 354478*(-1 + pms->dm)*pms->kappa1 - 354478*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(130184236727 + 225792*(667853 + 177239*pms->kappa1 + 177239*pms->kappa2)*pms->sigx2) + 1128960*(667853*pms->dm + 177239*(-1 + pms->dm)*pms->kappa1 + 177239*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1128960*(667853 + 177239*pms->kappa1 + 177239*pms->kappa2)*pms->sx2) + var->e04*(285633271873843 - 14120689776585*pms->eta2 + 5341829754240*pms->sigx2 + 3566221411200*pms->kappa1*pms->sigx2 - 3566221411200*pms->dm*pms->kappa1*pms->sigx2 + 3566221411200*pms->kappa2*pms->sigx2 + 3566221411200*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(9011657146843 + 37632*(189371836 + 37906265*pms->kappa1 + 37906265*pms->kappa2)*pms->sigx2) + 188160*(189371836*pms->dm + 37906265*(-1 + pms->dm)*pms->kappa1 + 37906265*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 188160*(189371836 + 37906265*pms->kappa1 + 37906265*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=((-7*I)/1698693120)*var->e05*(28415711232*pms->dm*pms->sigx - 80268030720*pms->dm*var->e02*pms->sigx + 79043040480*pms->dm*var->e04*pms->sigx - 47004085139*pms->dm*var->e06*pms->sigx + 75294627840*pms->sx - 199591416576*var->e02*pms->sx + 182089912032*var->e04*pms->sx - 102676406835*var->e06*pms->sx + 9*pms->cosp2Th0Phi*(-1524529152 + 4905979648*var->e02 - 6272863584*var->e04 + 4350794255*var->e06)*(pms->dm*pms->sigx + pms->sx) - (3*I)*(-236574720 + 1164774144*var->e02 - 1854546144*var->e04 + 1441602955*var->e06)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/81537269760*I)*var->e05*(pms->cosp2Th0Phi*(703304073216 - 2250609463296*var->e02 + 3003223758336*var->e04 - 2241535633776*var->e06 + 1068708485099*var->e08)*(-1 + 3*pms->eta) + 884736*(-21331473 + 184279*pms->eta) - 110592*var->e02*(-583776733 + 39250395*pms->eta) + 4608*var->e04*(-16489983441 + 2209430239*pms->eta) - 48*var->e06*(-1013721998955 + 209751058981*pms->eta) + var->e08*(-19384557564601 + 5679356006047*pms->eta))*var->vom4;
	COMPLEX16 PN0=((-117649*I)/4076863488000)*var->e05*(-530841600 + 186177397*var->e010 + 1658880000*var->e02 - 2076364800*var->e04 + 1421136000*var->e06 - 618267000*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl7_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e05*pms->expm4Thm4Phi*(-112*(3928577196 - 15744924901*var->e02 + 26189613559*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 63*(389331136 - 1488559064*var->e02 + 2644607577*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 448*(3928577196 - 15744924901*var->e02 + 26189613559*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 4*(1344*(1299559631 - 3938076985*pms->eta + 549329085*pms->eta2) - 56*var->e02*(99761899301 - 309654021235*pms->eta + 73981591455*pms->eta2) + var->e04*(6854208291613 - 21909349331455*pms->eta + 8388385793235*pms->eta2))*pms->expp2Thp4Phi - 672*(3928577196 - 15744924901*var->e02 + 26189613559*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 448*(3928577196 - 15744924901*var->e02 + 26189613559*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 4*(1344*(1299559631 - 3938076985*pms->eta + 549329085*pms->eta2) - 56*var->e02*(99761899301 - 309654021235*pms->eta + 73981591455*pms->eta2) + var->e04*(6854208291613 - 21909349331455*pms->eta + 8388385793235*pms->eta2))*pms->expp6Thp4Phi - 112*(3928577196 - 15744924901*var->e02 + 26189613559*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 63*(389331136 - 1488559064*var->e02 + 2644607577*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 2*pms->expp4Thp4Phi*(1344*(93054326061 - 1654767015*pms->eta2 - 13440*(-97863 + 145609*(-1 + pms->dm)*pms->kappa1 - 145609*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(2044036565 + 5376*(486944 + 145609*pms->kappa1 + 145609*pms->kappa2)*pms->sigx2) + 26880*(486944*pms->dm + 145609*(-1 + pms->dm)*pms->kappa1 + 145609*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 26880*(486944 + 145609*pms->kappa1 + 145609*pms->kappa2)*pms->sx2) - 56*var->e02*(6775192930431 - 165244851805*pms->eta2 - 282240*(-313375 + 354478*(-1 + pms->dm)*pms->kappa1 - 354478*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(130184236727 + 225792*(667853 + 177239*pms->kappa1 + 177239*pms->kappa2)*pms->sigx2) + 1128960*(667853*pms->dm + 177239*(-1 + pms->dm)*pms->kappa1 + 177239*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1128960*(667853 + 177239*pms->kappa1 + 177239*pms->kappa2)*pms->sx2) + var->e04*(285633271873843 - 14120689776585*pms->eta2 + 5341829754240*pms->sigx2 + 3566221411200*pms->kappa1*pms->sigx2 - 3566221411200*pms->dm*pms->kappa1*pms->sigx2 + 3566221411200*pms->kappa2*pms->sigx2 + 3566221411200*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(9011657146843 + 37632*(189371836 + 37906265*pms->kappa1 + 37906265*pms->kappa2)*pms->sigx2) + 188160*(189371836*pms->dm + 37906265*(-1 + pms->dm)*pms->kappa1 + 37906265*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 188160*(189371836 + 37906265*pms->kappa1 + 37906265*pms->kappa2)*pms->sx2)))*var->vom6)/79272345600;
	COMPLEX16 PN3=(7*var->e05*(28415711232*pms->dm*pms->sigx - 80268030720*pms->dm*var->e02*pms->sigx + 79043040480*pms->dm*var->e04*pms->sigx - 47004085139*pms->dm*var->e06*pms->sigx + 75294627840*pms->sx - 199591416576*var->e02*pms->sx + 182089912032*var->e04*pms->sx - 102676406835*var->e06*pms->sx + 18*pms->cosp2Th0Phi*(-321988608 + 935301376*var->e02 - 1104579360*var->e04 + 727297825*var->e06)*(pms->dm*pms->sigx + pms->sx) + (12*I)*(-601270272 + 1985339136*var->e02 - 2584142112*var->e04 + 1811748215*var->e06)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/1698693120;
	COMPLEX16 PN2=(var->e05*(pms->cosp2Th0Phi*(703304073216 - 2250609463296*var->e02 + 3003223758336*var->e04 - 2241535633776*var->e06 + 1068708485099*var->e08)*(-1 + 3*pms->eta) + 884736*(-21331473 + 184279*pms->eta) - 110592*var->e02*(-583776733 + 39250395*pms->eta) + 4608*var->e04*(-16489983441 + 2209430239*pms->eta) - 48*var->e06*(-1013721998955 + 209751058981*pms->eta) + var->e08*(-19384557564601 + 5679356006047*pms->eta))*var->vom4)/81537269760;
	COMPLEX16 PN0=(117649*var->e05*(-530841600 + 186177397*var->e010 + 1658880000*var->e02 - 2076364800*var->e04 + 1421136000*var->e06 - 618267000*var->e08)*var->vom2)/4076863488000;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/141557760*(var->e04*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((4800*(-6595373 + 24100647*pms->eta) - 768*var->e02*(-200635259 + 735625131*pms->eta) + var->e04*(-266212555663 + 969376877517*pms->eta))*pms->sigx - 3*pms->dm*(29201067840 - 134008250304*var->e02 + 217452852325*var->e04)*pms->sx + 35*pms->cosp2Th0Phi*(-((312801600 - 1468326144*var->e02 + 2727809861*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 352947*pms->dm*(960 - 4416*var->e02 + 8071*var->e04)*pms->sx))*var->vom6);
	COMPLEX16 PN3=-1.0/1486356480*(pms->dm*var->e04*(63*pms->cosp2Th0Phi*(-408009600 + 1817665824*var->e02 - 3442111155*var->e04 + 3622557302*var->e06)*(-1 + 2*pms->eta) - 40320*(-12092417 + 325038*pms->eta) + 10080*var->e02*(-298223467 + 32877918*pms->eta) - 21*var->e04*(-299450725831 + 54164724726*pms->eta) + 2*var->e06*(-3217587846533 + 821898527268*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(pms->dm*var->e04*(-2700457574400 + 6757020860891*var->e010 + 12880274227200*var->e02 - 24920798031360*var->e04 + 25844926464000*var->e06 - 16229441816595*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/101921587200;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/141557760*I)*var->e04*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((4800*(-6595373 + 24100647*pms->eta) - 768*var->e02*(-200635259 + 735625131*pms->eta) + var->e04*(-266212555663 + 969376877517*pms->eta))*pms->sigx - 3*pms->dm*(29201067840 - 134008250304*var->e02 + 217452852325*var->e04)*pms->sx + 35*pms->cosp2Th0Phi*(-((312801600 - 1468326144*var->e02 + 2727809861*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 352947*pms->dm*(960 - 4416*var->e02 + 8071*var->e04)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(pms->dm*var->e04*(63*pms->cosp2Th0Phi*(-408009600 + 1817665824*var->e02 - 3442111155*var->e04 + 3622557302*var->e06)*(-1 + 2*pms->eta) - 40320*(-12092417 + 325038*pms->eta) + 10080*var->e02*(-298223467 + 32877918*pms->eta) - 21*var->e04*(-299450725831 + 54164724726*pms->eta) + 2*var->e06*(-3217587846533 + 821898527268*pms->eta))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/1486356480;
	COMPLEX16 PN1=(I/101921587200)*pms->dm*var->e04*(-2700457574400 + 6757020860891*var->e010 + 12880274227200*var->e02 - 24920798031360*var->e04 + 25844926464000*var->e06 - 16229441816595*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl7_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/2123366400)*var->e03*(48*pms->cosp2Th0Phi*(-1144615680 + 6989734680*var->e02 - 17674603665*var->e04 + 24671248784*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 138240*(-6994891 + 20253670*pms->eta + 829180*pms->eta2) + 2880*var->e02*(3292175803 - 9867608300*pms->eta + 476059150*pms->eta2) - 360*var->e04*(82005559283 - 250695899040*pms->eta + 26536661450*pms->eta2) + var->e06*(43829870395917 - 136304914043030*pms->eta + 22008099666000*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(-1.0/11324620800*I)*var->e03*(-429627801600 + 5469784320709*var->e010 + 2898527846400*var->e02 - 7783737108480*var->e04 + 11188571833600*var->e06 - 9709136005280*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl7_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/2123366400*(var->e03*(48*pms->cosp2Th0Phi*(-1144615680 + 6989734680*var->e02 - 17674603665*var->e04 + 24671248784*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 138240*(-6994891 + 20253670*pms->eta + 829180*pms->eta2) + 2880*var->e02*(3292175803 - 9867608300*pms->eta + 476059150*pms->eta2) - 360*var->e04*(82005559283 - 250695899040*pms->eta + 26536661450*pms->eta2) + var->e06*(43829870395917 - 136304914043030*pms->eta + 22008099666000*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	COMPLEX16 PN2=(var->e03*(-429627801600 + 5469784320709*var->e010 + 2898527846400*var->e02 - 7783737108480*var->e04 + 11188571833600*var->e06 - 9709136005280*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/11324620800;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl7_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/141557760*(pms->dm*var->e02*(4050247680 - 40472156160*var->e02 + 154407127200*var->e04 - 309896464528*var->e06 + 372417811143*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN3;
}

COMPLEX16 cpart_LPartsl7_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-1.0/141557760*I)*pms->dm*var->e02*(4050247680 - 40472156160*var->e02 + 154407127200*var->e04 - 309896464528*var->e06 + 372417811143*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl7_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/2831155200)*var->e0*(32548700160 - 529556613120*var->e02 + 2984905516800*var->e04 - 8475851000560*var->e06 + 14123254402831*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl7_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/2831155200*(var->e0*(32548700160 - 529556613120*var->e02 + 2984905516800*var->e04 - 8475851000560*var->e06 + 14123254402831*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

COMPLEX16 spart_LPartsl8_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((15314*I)/467775)*var->e012*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl8_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(15314*var->e012*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/467775;
	return PN2;
}

COMPLEX16 spart_LPartsl8_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/61312204800*(pms->dm*var->e011*(199724560375 - 40693923840*pms->eta + 4363517952*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=-1.0/12162150*(pms->dm*var->e011*(695760 - 238628*var->e02 + 272645*var->e04)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN3+PN1;
}

COMPLEX16 cpart_LPartsl8_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/61312204800)*pms->dm*var->e011*(199724560375 - 40693923840*pms->eta + 4363517952*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(I/12162150)*pms->dm*var->e011*(695760 - 238628*var->e02 + 272645*var->e04)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN3+PN1;
}

COMPLEX16 spart_LPartsl8_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-1.0/1814400*I)*var->e010*(2534431*pms->dm*pms->sigx + 5784669*pms->sx + 606208*pms->cosp2Th0Phi*(pms->dm*pms->sigx + pms->sx) + (81920*I)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/59875200*I)*var->e010*(-384285693 + 40854528*pms->eta + 1536*pms->cosp2Th0Phi*(-2618 + 3083*var->e02)*(-1 + 3*pms->eta) - 5*var->e02*(-55449723 + 7710208*pms->eta))*var->vom4;
	COMPLEX16 PN0=((4*I)/467775)*var->e010*(11088 - 7320*var->e02 + 4889*var->e04)*var->vom2;
	return PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl8_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/1814400*(var->e010*(2534431*pms->dm*pms->sigx + 5784669*pms->sx + 425984*pms->cosp2Th0Phi*(pms->dm*pms->sigx + pms->sx) + (262144*I)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5);
	COMPLEX16 PN2=-1.0/59875200*(var->e010*(-384285693 + 40854528*pms->eta + 1536*pms->cosp2Th0Phi*(-2618 + 3083*var->e02)*(-1 + 3*pms->eta) - 5*var->e02*(-55449723 + 7710208*pms->eta))*var->vom4);
	COMPLEX16 PN0=(4*var->e010*(11088 - 7320*var->e02 + 4889*var->e04)*var->vom2)/467775;
	return PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e09*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(-170279443*(-1 + 3*pms->eta)*pms->sigx + (-8315051757 + 28792633226*pms->eta)*pms->exp0Thp2Phi*pms->sigx - pms->dm*(-24117248 + 19078982393*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(170279443 + 94116462*pms->exp0Thp2Phi)*pms->sigx + 24117248*pms->dm*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/278691840;
	COMPLEX16 PN3=(pms->dm*var->e09*pms->exp0Thm3Phi*(-((-4015343435 + 2651277131*var->e02)*(-1 + 2*pms->eta)) + (315122939715 + 19489596210*pms->eta - 2*var->e02*(235547499289 + 18213491097*pms->eta))*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-4015343435 + 2651277131*var->e02 + 9*(-68414785 + 532278593*var->e02)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/5573836800;
	COMPLEX16 PN1=(pms->dm*(-158400 + 208208*var->e02 - 143960*var->e04 + 56169*var->e06)*var->e09*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/311850;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/278691840*I)*var->e09*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(170279443*(-1 + 3*pms->eta)*pms->sigx + (-8315051757 + 28792633226*pms->eta)*pms->exp0Thp2Phi*pms->sigx - pms->dm*(24117248 + 19078982393*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(-170279443 + 94116462*pms->exp0Thp2Phi)*pms->sigx + 24117248*pms->dm*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(-1.0/5573836800*I)*pms->dm*var->e09*pms->exp0Thm3Phi*((-4015343435 + 2651277131*var->e02)*(-1 + 2*pms->eta) + (315122939715 + 19489596210*pms->eta - 2*var->e02*(235547499289 + 18213491097*pms->eta))*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(4015343435 - 2651277131*var->e02 + 9*(-68414785 + 532278593*var->e02)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(-1.0/311850*I)*pms->dm*(-158400 + 208208*var->e02 - 143960*var->e04 + 56169*var->e06)*var->e09*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl8_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/967680*I)*var->e08*(127579002 - 357677975*pms->eta - 190548115*pms->eta2 + 299483*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=((-64*I)/2025)*(360 - 820*var->e02 + 787*var->e04)*var->e08*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl8_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e08*(-906212967 + 2988684563*pms->eta + 1071260913*pms->eta2 + 125194914*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6)/11612160;
	COMPLEX16 PN2=-1.0/696729600*((10624632120 - 20941277140*var->e02 + 19199813087*var->e04)*var->e08*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/30965760*(var->e07*pms->exp0Thm3Phi*pms->sinp1Th0Phi*((-376806352 + 900134757*var->e02)*(-1 + 3*pms->eta)*pms->sigx - (-8*(580609987 + 1891452520*pms->eta) + var->e02*(6477675371 + 31974525678*pms->eta))*pms->exp0Thp2Phi*pms->sigx + pms->dm*(1048576*(-68 + 193*var->e02) + (-9908985656 + 22417590861*var->e02)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-376806352 + 900134757*var->e02 + 2*(-190368784 + 557262049*var->e02)*pms->exp0Thp2Phi)*pms->sigx) + 1048576*pms->dm*(-68 + 193*var->e02)*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	COMPLEX16 PN3=-1.0/1114767360*(pms->dm*var->e07*pms->exp0Thm3Phi*((36908108352 - 113224751001*var->e02 + 148489280423*var->e04)*(-1 + 2*pms->eta) + (var->e04*(133312776178 - 226218793254*pms->eta) + 288*(93377579 - 179235972*pms->eta) + 9*var->e02*(-11978374529 + 18771069258*pms->eta))*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-36908108352 + 113224751001*var->e02 - 148489280423*var->e04 + 9*(767181504 - 1647257493*var->e02 + 1691744683*var->e04)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=-1.0/61312204800*(pms->dm*var->e07*(6600908160 - 193829518080*var->e02 + 339415090080*var->e04 - 273157218400*var->e06 + 132939518149*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e07*(pms->cos0Thp2Phi - I*pms->sin0Thp2Phi)*pms->sinp1Th0Phi*(pms->sin0Thp1Phi*(8*(627710781 + 1750150138*pms->eta)*pms->sigx - var->e02*(7377810128 + 29274121407*pms->eta)*pms->sigx + pms->dm*(-9980288824 + 22619966029*var->e02)*pms->sx + 5*pms->cosp2Th0Phi*(-((-151508784 + 402931771*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 1048576*pms->dm*(-68 + 193*var->e02)*pms->sx)) - I*pms->cos0Thp1Phi*(8*(533509193 + 2032754902*pms->eta)*pms->sigx - var->e02*(5577540614 + 34674929949*pms->eta)*pms->sigx + pms->dm*(-9837682488 + 22215215693*var->e02)*pms->sx + pms->cosp2Th0Phi*(-((-3931216 + 214389341*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 7340032*pms->dm*(-68 + 193*var->e02)*pms->sx)))*var->vom6)/30965760;
	COMPLEX16 PN3=(-1.0/1114767360*I)*pms->dm*var->e07*pms->exp0Thm3Phi*(-((36908108352 - 113224751001*var->e02 + 148489280423*var->e04)*(-1 + 2*pms->eta)) + (var->e04*(133312776178 - 226218793254*pms->eta) + 288*(93377579 - 179235972*pms->eta) + 9*var->e02*(-11978374529 + 18771069258*pms->eta))*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(36908108352 - 113224751001*var->e02 + 148489280423*var->e04 + 9*(767181504 - 1647257493*var->e02 + 1691744683*var->e04)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(-1.0/61312204800*I)*pms->dm*var->e07*(6600908160 - 193829518080*var->e02 + 339415090080*var->e04 - 273157218400*var->e06 + 132939518149*var->e08)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl8_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/3715891200)*var->e06*pms->expm4Thm4Phi*(21*(-1889675238 + 8019749423*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 18*(-129784662 + 522558935*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 84*(-1889675238 + 8019749423*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(-14*(5143552101 - 15691435145*pms->eta + 2678034525*pms->eta2) + 5*var->e02*(49081209747 - 153165041647*pms->eta + 41136297195*pms->eta2))*pms->expp2Thp4Phi + 126*(-1889675238 + 8019749423*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 84*(-1889675238 + 8019749423*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(-14*(5143552101 - 15691435145*pms->eta + 2678034525*pms->eta2) + 5*var->e02*(49081209747 - 153165041647*pms->eta + 41136297195*pms->eta2))*pms->expp6Thp4Phi + 21*(-1889675238 + 8019749423*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 18*(-129784662 + 522558935*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 12*pms->expp4Thp4Phi*(-14*(119149010267 - 2572745385*pms->eta2 + 1690421760*pms->sigx2 + 2361312000*pms->kappa1*pms->sigx2 - 2361312000*pms->dm*pms->kappa1*pms->sigx2 + 2361312000*pms->kappa2*pms->sigx2 + 2361312000*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(2605901659 + 4608*(703426 + 204975*pms->kappa1 + 204975*pms->kappa2)*pms->sigx2) + 23040*(703426*pms->dm + 204975*(-1 + pms->dm)*pms->kappa1 + 204975*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(703426 + 204975*pms->kappa1 + 204975*pms->kappa2)*pms->sx2) + 5*var->e02*(1034089877949 - 30467181983*pms->eta2 - 3072*(-4654362 + 4943599*(-1 + pms->dm)*pms->kappa1 - 4943599*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 3*pms->eta*(36157987387 + 2048*(19195922 + 4943599*pms->kappa1 + 4943599*pms->kappa2)*pms->sigx2) + 6144*(19195922*pms->dm + 4943599*(-1 + pms->dm)*pms->kappa1 + 4943599*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 6144*(19195922 + 4943599*pms->kappa1 + 4943599*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=(I/241920)*var->e06*(-46483976*pms->dm*pms->sigx + 139543124*pms->dm*var->e02*pms->sigx - 158203375*pms->dm*var->e04*pms->sigx - 121379664*pms->sx + 343564296*var->e02*pms->sx - 364354176*var->e04*pms->sx + 3*pms->cosp2Th0Phi*(7778680 - 26786732*var->e02 + 37818843*var->e04)*(pms->dm*pms->sigx + pms->sx) - (3*I)*(438648 - 2145196*var->e02 + 3674587*var->e04)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(I/418037760)*var->e06*(pms->cosp2Th0Phi*(-5788301904 + 20047566312*var->e02 - 29571752538*var->e04 + 24925220431*var->e06)*(-1 + 3*pms->eta) - 3024*(-52577631 + 1271821*pms->eta) + 216*var->e02*(-2615616273 + 203050307*pms->eta) - 54*var->e04*(-13780778241 + 1908764371*pms->eta) + var->e06*(-544925499273 + 111881592235*pms->eta))*var->vom4;
	COMPLEX16 PN0=((4*I)/42525)*var->e06*(241920 - 812160*var->e02 + 1125360*var->e04 - 875720*var->e06 + 441323*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl8_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e06*pms->expm4Thm4Phi*(21*(-1889675238 + 8019749423*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 18*(-129784662 + 522558935*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 84*(-1889675238 + 8019749423*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi + 8*(-14*(5143552101 - 15691435145*pms->eta + 2678034525*pms->eta2) + 5*var->e02*(49081209747 - 153165041647*pms->eta + 41136297195*pms->eta2))*pms->expp2Thp4Phi + 126*(-1889675238 + 8019749423*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 84*(-1889675238 + 8019749423*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi + 8*(-14*(5143552101 - 15691435145*pms->eta + 2678034525*pms->eta2) + 5*var->e02*(49081209747 - 153165041647*pms->eta + 41136297195*pms->eta2))*pms->expp6Thp4Phi + 21*(-1889675238 + 8019749423*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi - 18*(-129784662 + 522558935*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 12*pms->expp4Thp4Phi*(-14*(119149010267 - 2572745385*pms->eta2 + 1690421760*pms->sigx2 + 2361312000*pms->kappa1*pms->sigx2 - 2361312000*pms->dm*pms->kappa1*pms->sigx2 + 2361312000*pms->kappa2*pms->sigx2 + 2361312000*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(2605901659 + 4608*(703426 + 204975*pms->kappa1 + 204975*pms->kappa2)*pms->sigx2) + 23040*(703426*pms->dm + 204975*(-1 + pms->dm)*pms->kappa1 + 204975*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(703426 + 204975*pms->kappa1 + 204975*pms->kappa2)*pms->sx2) + 5*var->e02*(1034089877949 - 30467181983*pms->eta2 - 3072*(-4654362 + 4943599*(-1 + pms->dm)*pms->kappa1 - 4943599*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 3*pms->eta*(36157987387 + 2048*(19195922 + 4943599*pms->kappa1 + 4943599*pms->kappa2)*pms->sigx2) + 6144*(19195922*pms->dm + 4943599*(-1 + pms->dm)*pms->kappa1 + 4943599*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 6144*(19195922 + 4943599*pms->kappa1 + 4943599*pms->kappa2)*pms->sx2)))*var->vom6)/3715891200;
	COMPLEX16 PN3=-1.0/241920*(var->e06*(-46483976*pms->dm*pms->sigx + 139543124*pms->dm*var->e02*pms->sigx - 158203375*pms->dm*var->e04*pms->sigx - 121379664*pms->sx + 343564296*var->e02*pms->sx - 364354176*var->e04*pms->sx + 3*pms->cosp2Th0Phi*(3231368 - 10175572*var->e02 + 13397541*var->e04)*(pms->dm*pms->sigx + pms->sx) + (3*I)*(4108664 - 14465964*var->e02 + 20746715*var->e04)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5);
	COMPLEX16 PN2=-1.0/418037760*(var->e06*(pms->cosp2Th0Phi*(-5788301904 + 20047566312*var->e02 - 29571752538*var->e04 + 24925220431*var->e06)*(-1 + 3*pms->eta) - 3024*(-52577631 + 1271821*pms->eta) + 216*var->e02*(-2615616273 + 203050307*pms->eta) - 54*var->e04*(-13780778241 + 1908764371*pms->eta) + var->e06*(-544925499273 + 111881592235*pms->eta))*var->vom4);
	COMPLEX16 PN0=(-4*var->e06*(241920 - 812160*var->e02 + 1125360*var->e04 - 875720*var->e06 + 441323*var->e08)*var->vom2)/42525;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/3870720*(var->e05*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((588*(-2963054 + 10811361*pms->eta) - 63*var->e02*(-134839549 + 492389856*pms->eta) + 5*var->e04*(-3125000105 + 11332339707*pms->eta))*pms->sigx - 9*pms->dm*(525803404 - 2428572097*var->e02 + 4216219240*var->e04)*pms->sx + 5*pms->cosp2Th0Phi*(-((122404548 - 591801084*var->e02 + 1167660713*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 1572864*pms->dm*(84 - 399*var->e02 + 776*var->e04)*pms->sx))*var->vom6);
	COMPLEX16 PN3=-1.0/371589120*(pms->dm*var->e05*(var->e04*(3239927340612 - 632978838792*pms->eta) + 18*pms->cosp2Th0Phi*(-677008080 + 3170483792*var->e02 - 6408648686*var->e04 + 7354265457*var->e06)*(-1 + 2*pms->eta) - 2016*(-123611665 + 7085706*pms->eta) + 1344*var->e02*(-1108124575 + 143620947*pms->eta) + var->e06*(-3615764040739 + 958209283356*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(pms->dm*var->e05*(-1328365785600 + 5068154045377*var->e010 + 6542815305600*var->e02 - 13387625481600*var->e04 + 15099716512800*var->e06 - 10622809301100*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/27869184000;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/3870720*I)*var->e05*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((588*(-2963054 + 10811361*pms->eta) - 63*var->e02*(-134839549 + 492389856*pms->eta) + 5*var->e04*(-3125000105 + 11332339707*pms->eta))*pms->sigx - 9*pms->dm*(525803404 - 2428572097*var->e02 + 4216219240*var->e04)*pms->sx + 5*pms->cosp2Th0Phi*(-((122404548 - 591801084*var->e02 + 1167660713*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 1572864*pms->dm*(84 - 399*var->e02 + 776*var->e04)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(pms->dm*var->e05*(var->e04*(3239927340612 - 632978838792*pms->eta) + 18*pms->cosp2Th0Phi*(-677008080 + 3170483792*var->e02 - 6408648686*var->e04 + 7354265457*var->e06)*(-1 + 2*pms->eta) - 2016*(-123611665 + 7085706*pms->eta) + 1344*var->e02*(-1108124575 + 143620947*pms->eta) + var->e06*(-3615764040739 + 958209283356*pms->eta))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/371589120;
	COMPLEX16 PN1=(I/27869184000)*pms->dm*var->e05*(-1328365785600 + 5068154045377*var->e010 + 6542815305600*var->e02 - 13387625481600*var->e04 + 15099716512800*var->e06 - 10622809301100*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl8_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/8294400*I)*var->e04*(3*pms->cosp2Th0Phi*(166016640 - 1021085058*var->e02 + 2668492855*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 2*(-60*(-82443141 + 241770725*pms->eta + 202635*pms->eta2) - 9*var->e02*(4859023373 - 14640215185*pms->eta + 1014812465*pms->eta2) + 5*var->e04*(26990216994 - 82791355748*pms->eta + 10109081277*pms->eta2)))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/5806080)*var->e04*(490979160 - 3276700560*var->e02 + 8991670611*var->e04 - 13587813140*var->e06 + 12755863281*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl8_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e04*(3*pms->cosp2Th0Phi*(166016640 - 1021085058*var->e02 + 2668492855*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 2*(-60*(-82443141 + 241770725*pms->eta + 202635*pms->eta2) - 9*var->e02*(4859023373 - 14640215185*pms->eta + 1014812465*pms->eta2) + 5*var->e04*(26990216994 - 82791355748*pms->eta + 10109081277*pms->eta2)))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/8294400;
	COMPLEX16 PN2=-1.0/5806080*(var->e04*(490979160 - 3276700560*var->e02 + 8991670611*var->e04 - 13587813140*var->e06 + 12755863281*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl8_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/46448640*(pms->dm*var->e03*(3944062080 - 36573347160*var->e02 + 136316153736*var->e04 - 276904583921*var->e06 + 347240955485*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN3;
}

COMPLEX16 cpart_LPartsl8_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-1.0/46448640*I)*pms->dm*var->e03*(3944062080 - 36573347160*var->e02 + 136316153736*var->e04 - 276904583921*var->e06 + 347240955485*var->e08)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl8_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/5529600*I)*var->e02*(-282690360 + 3805636860*var->e02 - 19625543040*var->e04 + 53842101427*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl8_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e02*(-282690360 + 3805636860*var->e02 - 19625543040*var->e04 + 53842101427*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/5529600;
	return PN4;
}

COMPLEX16 spart_LPartsl9_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((16904606769*I)/419849830400)*var->e013*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl9_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(16904606769*var->e013*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/419849830400;
	return PN2;
}

COMPLEX16 spart_LPartsl9_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(4782969*pms->dm*var->e012*(-5993 + 3297*var->e02)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/419849830400;
	return PN1;
}

COMPLEX16 cpart_LPartsl9_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(4782969*pms->dm*var->e012*(-5993 + 3297*var->e02)*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/419849830400;
	return PN1;
}

COMPLEX16 spart_LPartsl9_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=((-9*I)/8074035200)*var->e011*(1589703209*pms->dm*pms->sigx + 3603128073*pms->sx + 396986427*pms->cosp2Th0Phi*(pms->dm*pms->sigx + pms->sx) + (52612659*I)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=((-27*I)/129184563200)*var->e011*(-39346250960 + var->e02*(37997334127 - 5034812985*pms->eta) + 4273258032*pms->eta + 59049*pms->cosp2Th0Phi*(-7376 + 10235*var->e02)*(-1 + 3*pms->eta))*var->vom4;
	COMPLEX16 PN0=((4782969*I)/3358798643200)*var->e011*(78208 - 68536*var->e02 + 46985*var->e04)*var->vom2;
	return PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl9_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-9*var->e011*(1589703209*pms->dm*pms->sigx + 3603128073*pms->sx + 277412202*pms->cosp2Th0Phi*(pms->dm*pms->sigx + pms->sx) + (172186884*I)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/8074035200;
	COMPLEX16 PN2=(-27*var->e011*(-39346250960 + var->e02*(37997334127 - 5034812985*pms->eta) + 4273258032*pms->eta + 59049*pms->cosp2Th0Phi*(-7376 + 10235*var->e02)*(-1 + 3*pms->eta))*var->vom4)/129184563200;
	COMPLEX16 PN0=(4782969*var->e011*(78208 - 68536*var->e02 + 46985*var->e04)*var->vom2)/3358798643200;
	return PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl9_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/17616076800*(pms->dm*var->e010*pms->exp0Thm3Phi*(-16970512575*(-1 + 2*pms->eta) - 2*(705642211067 + 44454741570*pms->eta)*pms->exp0Thp2Phi + 75*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(226273501 + 57675358*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(-4782969*pms->dm*var->e010*(35200 - 54848*var->e02 + 43451*var->e04)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/258369126400;
	return PN3+PN1;
}

COMPLEX16 cpart_LPartsl9_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/17616076800)*pms->dm*var->e010*pms->exp0Thm3Phi*(16970512575*(-1 + 2*pms->eta) - 2*(705642211067 + 44454741570*pms->eta)*pms->exp0Thp2Phi + 75*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-226273501 + 57675358*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(4782969*pms->dm*var->e010*(35200 - 54848*var->e02 + 43451*var->e04)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/258369126400;
	return PN3+PN1;
}

COMPLEX16 spart_LPartsl9_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((-3*I)/146800640)*var->e09*(10735368873 - 30168962593*pms->eta - 15458140907*pms->eta2 + 60186871*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=((-43046721*I)/9227468800)*(3520 - 8888*var->e02 + 9685*var->e04)*var->e09*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl9_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e09*(-188016421491 + 604895401297*pms->eta + 217701770703*pms->eta2 + 19434629205*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom6)/1321205760;
	COMPLEX16 PN2=-1.0/193776844800*((4188664124480 - 9366061670504*var->e02 + 9726116863719*var->e04)*var->e09*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(3*var->e08*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(946428729*(-1 + 3*pms->eta)*pms->sigx - 10*(1072475741 + 3730642889*pms->eta)*pms->exp0Thp2Phi*pms->sigx + 3*pms->dm*(62178597 + 8221913642*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(946428729 + 1001634266*pms->exp0Thp2Phi)*pms->sigx) + 186535791*pms->dm*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/146800640;
	COMPLEX16 PN3=(pms->dm*var->e08*pms->exp0Thm3Phi*(6*(-7823684884 + 26049463187*var->e02)*(-1 + 2*pms->eta) + (-34344924210 + var->e02*(141373813129 - 231485781474*pms->eta) + 65853631812*pms->eta)*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(15647369768 - 52098926374*var->e02 + (-2712237942 + 6584916923*var->e02)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/880803840;
	COMPLEX16 PN1=(3*pms->dm*(-1753903360 + 26394350400*var->e02 - 50420798010*var->e04 + 45945899709*var->e06)*var->e08*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/16148070400;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((3*I)/146800640)*var->e08*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(-946428729*(-1 + 3*pms->eta)*pms->sigx - 10*(1072475741 + 3730642889*pms->eta)*pms->exp0Thp2Phi*pms->sigx + 3*pms->dm*(-62178597 + 8221913642*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-946428729 + 1001634266*pms->exp0Thp2Phi)*pms->sigx) + 186535791*pms->dm*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(I/880803840)*pms->dm*var->e08*pms->exp0Thm3Phi*(-6*(-7823684884 + 26049463187*var->e02)*(-1 + 2*pms->eta) + (-34344924210 + var->e02*(141373813129 - 231485781474*pms->eta) + 65853631812*pms->eta)*pms->exp0Thp2Phi + 3*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-15647369768 + 52098926374*var->e02 + (-2712237942 + 6584916923*var->e02)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(3*pms->dm*(-1753903360 + 26394350400*var->e02 - 50420798010*var->e04 + 45945899709*var->e06)*var->e08*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/16148070400;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl9_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/211392921600)*var->e07*pms->expm4Thm4Phi*(9*(-462087799264 + 2071970320715*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 216*(-1162639616 + 4944048997*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 36*(-462087799264 + 2071970320715*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 16*(-32*(108963965781 - 334407939950*pms->eta + 66590841120*pms->eta2) + var->e02*(12660482086749 - 39703248603200*pms->eta + 11731866147510*pms->eta2))*pms->expp2Thp4Phi + 54*(-462087799264 + 2071970320715*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 36*(-462087799264 + 2071970320715*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 16*(-32*(108963965781 - 334407939950*pms->eta + 66590841120*pms->eta2) + var->e02*(12660482086749 - 39703248603200*pms->eta + 11731866147510*pms->eta2))*pms->expp6Thp4Phi + 9*(-462087799264 + 2071970320715*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 216*(-1162639616 + 4944048997*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 48*pms->expp4Thp4Phi*(-64*(610279496613 - 15402716220*pms->eta2 - 2160*(-4048091 + 5331668*(-1 + pms->dm)*pms->kappa1 - 5331668*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 10*pms->eta*(6731547125 + 864*(9379759 + 2665834*pms->kappa1 + 2665834*pms->kappa2)*pms->sigx2) + 8640*(9379759*pms->dm + 2665834*(-1 + pms->dm)*pms->kappa1 + 2665834*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 8640*(9379759 + 2665834*pms->kappa1 + 2665834*pms->kappa2)*pms->sx2) + var->e02*(-4312328505315*pms->eta2 - 5*pms->eta*(2854847827517 + 77760*(37546208 + 9426377*pms->kappa1 + 9426377*pms->kappa2)*pms->sigx2) + 3*(41902330860533 - 64800*(-9346727 + 9426377*(-1 + pms->dm)*pms->kappa1 - 9426377*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 388800*(37546208*pms->dm + 9426377*(-1 + pms->dm)*pms->kappa1 + 9426377*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 388800*(37546208 + 9426377*pms->kappa1 + 9426377*pms->kappa2)*pms->sx2)))*var->vom6;
	COMPLEX16 PN3=((3*I)/146800640)*var->e07*(pms->cosp2Th0Phi*(7818565376 - 28732903912*var->e02 + 44365243619*var->e04)*(pms->dm*pms->sigx + pms->sx) - I*(471924992 - 2330915032*var->e02 + 4274397461*var->e04)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx) - 3*(pms->dm*(5003071744 - 16014245528*var->e02 + 20433215973*var->e04)*pms->sigx + (12896211200 - 39077341720*var->e02 + 46961387237*var->e04)*pms->sx))*var->vom5;
	COMPLEX16 PN2=(I/4404019200)*var->e07*(pms->cosp2Th0Phi*(-96057886720 + 357929265440*var->e02 - 577702622740*var->e04 + 541808450671*var->e06)*(-1 + 3*pms->eta) - 30720*(-86947417 + 3261888*pms->eta) + 480*var->e02*(-20698471679 + 1804363299*pms->eta) - 60*var->e04*(-240630256673 + 34527598389*pms->eta) + 3*var->e06*(-3964223483494 + 813547055007*pms->eta))*var->vom4;
	COMPLEX16 PN0=((4782969*I)/258369126400)*var->e07*(1802240 - 6476800*var->e02 + 9834880*var->e04 - 8560816*var->e06 + 4900139*var->e08)*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl9_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e07*pms->expm4Thm4Phi*(9*(-462087799264 + 2071970320715*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 216*(-1162639616 + 4944048997*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 36*(-462087799264 + 2071970320715*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi + 16*(-32*(108963965781 - 334407939950*pms->eta + 66590841120*pms->eta2) + var->e02*(12660482086749 - 39703248603200*pms->eta + 11731866147510*pms->eta2))*pms->expp2Thp4Phi + 54*(-462087799264 + 2071970320715*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 36*(-462087799264 + 2071970320715*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi + 16*(-32*(108963965781 - 334407939950*pms->eta + 66590841120*pms->eta2) + var->e02*(12660482086749 - 39703248603200*pms->eta + 11731866147510*pms->eta2))*pms->expp6Thp4Phi + 9*(-462087799264 + 2071970320715*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi - 216*(-1162639616 + 4944048997*var->e02)*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi + 48*pms->expp4Thp4Phi*(-64*(610279496613 - 15402716220*pms->eta2 - 2160*(-4048091 + 5331668*(-1 + pms->dm)*pms->kappa1 - 5331668*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 10*pms->eta*(6731547125 + 864*(9379759 + 2665834*pms->kappa1 + 2665834*pms->kappa2)*pms->sigx2) + 8640*(9379759*pms->dm + 2665834*(-1 + pms->dm)*pms->kappa1 + 2665834*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 8640*(9379759 + 2665834*pms->kappa1 + 2665834*pms->kappa2)*pms->sx2) + var->e02*(-4312328505315*pms->eta2 - 5*pms->eta*(2854847827517 + 77760*(37546208 + 9426377*pms->kappa1 + 9426377*pms->kappa2)*pms->sigx2) + 3*(41902330860533 - 64800*(-9346727 + 9426377*(-1 + pms->dm)*pms->kappa1 - 9426377*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 388800*(37546208*pms->dm + 9426377*(-1 + pms->dm)*pms->kappa1 + 9426377*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 388800*(37546208 + 9426377*pms->kappa1 + 9426377*pms->kappa2)*pms->sx2)))*var->vom6)/211392921600;
	COMPLEX16 PN3=(-3*var->e07*(2*pms->cosp2Th0Phi*(1600697600 - 5435039704*var->e02 + 7885512809*var->e04)*(pms->dm*pms->sigx + pms->sx) + (4*I)*(1036311296 - 3882977368*var->e02 + 6079955135*var->e04)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx) - 3*(pms->dm*(5003071744 - 16014245528*var->e02 + 20433215973*var->e04)*pms->sigx + (12896211200 - 39077341720*var->e02 + 46961387237*var->e04)*pms->sx))*var->vom5)/146800640;
	COMPLEX16 PN2=-1.0/4404019200*(var->e07*(pms->cosp2Th0Phi*(-96057886720 + 357929265440*var->e02 - 577702622740*var->e04 + 541808450671*var->e06)*(-1 + 3*pms->eta) - 30720*(-86947417 + 3261888*pms->eta) + 480*var->e02*(-20698471679 + 1804363299*pms->eta) - 60*var->e04*(-240630256673 + 34527598389*pms->eta) + 3*var->e06*(-3964223483494 + 813547055007*pms->eta))*var->vom4);
	COMPLEX16 PN0=(-4782969*var->e07*(1802240 - 6476800*var->e02 + 9834880*var->e04 - 8560816*var->e06 + 4900139*var->e08)*var->vom2)/258369126400;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e06*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((7828630502 - 28514303538*pms->eta + 3*var->e02*(-12942843241 + 47098338219*pms->eta))*pms->sigx + 3*pms->dm*(6975282818 - 32892198291*var->e02)*pms->sx + 5*pms->cosp2Th0Phi*(-((-560043694 + 2803820847*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 43046721*pms->dm*(-14 + 69*var->e02)*pms->sx))*var->vom6)/9175040;
	COMPLEX16 PN3=(pms->dm*var->e06*(3*pms->cosp2Th0Phi*(23301374208 - 114699502592*var->e02 + 246773536555*var->e04)*(-1 + 2*pms->eta) + 1792*(-840315955 + 69007702*pms->eta) - 1024*var->e02*(-8721742031 + 1282362150*pms->eta) + var->e04*(-20270682062743 + 4233161797758*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/1174405120;
	COMPLEX16 PN1=(-3*pms->dm*var->e06*(321928069120 - 1644201984000*var->e02 + 3555672480000*var->e04 - 4332321692160*var->e06 + 3367167086943*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/11744051200;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/9175040)*var->e06*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((7828630502 - 28514303538*pms->eta + 3*var->e02*(-12942843241 + 47098338219*pms->eta))*pms->sigx + 3*pms->dm*(6975282818 - 32892198291*var->e02)*pms->sx + 5*pms->cosp2Th0Phi*(-((-560043694 + 2803820847*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 43046721*pms->dm*(-14 + 69*var->e02)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(I/1174405120)*pms->dm*var->e06*(3*pms->cosp2Th0Phi*(23301374208 - 114699502592*var->e02 + 246773536555*var->e04)*(-1 + 2*pms->eta) + 1792*(-840315955 + 69007702*pms->eta) - 1024*var->e02*(-8721742031 + 1282362150*pms->eta) + var->e04*(-20270682062743 + 4233161797758*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(3*pms->dm*var->e06*(321928069120 - 1644201984000*var->e02 + 3555672480000*var->e04 - 4332321692160*var->e06 + 3367167086943*var->e08)*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/11744051200;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl9_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/1651507200*I)*var->e05*(63*pms->cosp2Th0Phi*(3363582784 - 21096046312*var->e02 + 57266587763*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 448*(10228443534 - 30272633485*pms->eta + 872834655*pms->eta2) - 56*var->e02*(682994124276 - 2067372969785*pms->eta + 181657600215*pms->eta2) + var->e04*(118718155186044 - 365320537955465*pms->eta + 50038324463175*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/7046430720)*var->e05*(1224486387712 - 8215747047424*var->e02 + 23202297250304*var->e04 - 36879042913296*var->e06 + 37225609083589*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl9_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e05*(63*pms->cosp2Th0Phi*(3363582784 - 21096046312*var->e02 + 57266587763*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 448*(10228443534 - 30272633485*pms->eta + 872834655*pms->eta2) - 56*var->e02*(682994124276 - 2067372969785*pms->eta + 181657600215*pms->eta2) + var->e04*(118718155186044 - 365320537955465*pms->eta + 50038324463175*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/1651507200;
	COMPLEX16 PN2=-1.0/7046430720*(var->e05*(1224486387712 - 8215747047424*var->e02 + 23202297250304*var->e04 - 36879042913296*var->e06 + 37225609083589*var->e08)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl9_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(pms->dm*var->e04*(-7993973120 + 71488766272*var->e02 - 265458077794*var->e04 + 550979189373*var->e06)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/36700160;
	return PN3;
}

COMPLEX16 cpart_LPartsl9_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/36700160)*pms->dm*var->e04*(-7993973120 + 71488766272*var->e02 - 265458077794*var->e04 + 550979189373*var->e06)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl9_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/6553600*I)*var->e03*(-1144782080 + 13950102000*var->e02 - 68678346708*var->e04 + 186204956089*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl9_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e03*(-1144782080 + 13950102000*var->e02 - 68678346708*var->e04 + 186204956089*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/6553600;
	return PN4;
}

COMPLEX16 spart_LPartsl10_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(1953125*pms->dm*var->e013*(-4704 + 3589*var->e02)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/111588212736;
	return PN1;
}

COMPLEX16 cpart_LPartsl10_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(1953125*pms->dm*var->e013*(-4704 + 3589*var->e02)*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/111588212736;
	return PN1;
}

COMPLEX16 spart_LPartsl10_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((25*I)/919683072)*var->e012*(389865312 - 43109375*pms->eta + 4515625*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4;
	COMPLEX16 PN0=((-390625*I)/996323328)*var->e012*(-338 + 371*var->e02)*var->vom2;
	return PN2+PN0;
}

COMPLEX16 cpart_LPartsl10_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(25*var->e012*(389865312 - 43109375*pms->eta + 4515625*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4)/919683072;
	COMPLEX16 PN0=(-390625*var->e012*(-338 + 371*var->e02)*var->vom2)/996323328;
	return PN2+PN0;
}

COMPLEX16 spart_LPartsl10_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/49049763840*(pms->dm*var->e011*pms->exp0Thm3Phi*(-63296832185*(-1 + 2*pms->eta) - (5546948024029 + 355214809830*pms->eta)*pms->exp0Thp2Phi + 5*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(12659366437 + 4451803047*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(-1953125*pms->dm*var->e011*(3432 - 6188*var->e02 + 5561*var->e04)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/7970586624;
	return PN3+PN1;
}

COMPLEX16 cpart_LPartsl10_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/49049763840)*pms->dm*var->e011*pms->exp0Thm3Phi*(63296832185*(-1 + 2*pms->eta) - (5546948024029 + 355214809830*pms->eta)*pms->exp0Thp2Phi + 5*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-12659366437 + 4451803047*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(1953125*pms->dm*var->e011*(3432 - 6188*var->e02 + 5561*var->e04)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/7970586624;
	return PN3+PN1;
}

COMPLEX16 spart_LPartsl10_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((1953125*I)/1824768)*var->e010*(-22 + 61*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl10_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(var->e010*(-4678844269 + 11692063538*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4)/153280512;
	return PN2;
}

COMPLEX16 spart_LPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e09*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(8433720125*(-1 + 3*pms->eta)*pms->sigx - (88103897709 + 327081008614*pms->eta)*pms->exp0Thp2Phi*pms->sigx + 11*pms->dm*(156250000 + 19825405373*pms->exp0Thp2Phi)*pms->sx + 125*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(67469761 + 74186826*pms->exp0Thp2Phi)*pms->sigx) + 13750000*pms->dm*(-1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/278691840;
	COMPLEX16 PN3=(pms->dm*var->e09*pms->exp0Thm3Phi*(5*(-75165606964 + 269791750213*var->e02)*(-1 + 2*pms->eta) + (-275796291108 + var->e02*(1171042579781 - 1987359027930*pms->eta) + 528670584360*pms->eta)*pms->exp0Thp2Phi + 5*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(75165606964 - 269791750213*var->e02 + 9*(-1353400612 + 3661121393*var->e02)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5)/4459069440;
	COMPLEX16 PN1=(pms->dm*(-560644128 + 6214110320*var->e02 - 12764311610*var->e04 + 12947595455*var->e06)*var->e09*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/817496064;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/278691840)*var->e09*pms->exp0Thm3Phi*pms->sinp1Th0Phi*(-((8433720125*(-1 + 3*pms->eta) + (88103897709 + 327081008614*pms->eta)*pms->exp0Thp2Phi)*pms->sigx) + 11*pms->dm*(-156250000 + 19825405373*pms->exp0Thp2Phi)*pms->sx + 125*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-67469761 + 74186826*pms->exp0Thp2Phi)*pms->sigx) + 13750000*pms->dm*(1 + 6*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(I/4459069440)*pms->dm*var->e09*pms->exp0Thm3Phi*(-5*(-75165606964 + 269791750213*var->e02)*(-1 + 2*pms->eta) + (-275796291108 + var->e02*(1171042579781 - 1987359027930*pms->eta) + 528670584360*pms->eta)*pms->exp0Thp2Phi + 5*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-75165606964 + 269791750213*var->e02 + 9*(-1353400612 + 3661121393*var->e02)*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*(-560644128 + 6214110320*var->e02 - 12764311610*var->e04 + 12947595455*var->e06)*var->e09*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/817496064;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl10_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/247726080*I)*var->e08*pms->expm4Thm4Phi*(8680019605*(1 - 5*pms->eta + 5*pms->eta2) + 529673610*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 34720078420*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(13566780097 - 41862872701*pms->eta + 9440568645*pms->eta2)*pms->expp2Thp4Phi + 52080117630*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 34720078420*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(13566780097 - 41862872701*pms->eta + 9440568645*pms->eta2)*pms->expp6Thp4Phi + 8680019605*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 529673610*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 4*pms->expp4Thp4Phi*(880502906817 - 25356607995*pms->eta2 - 1200*(-10652628 + 13283651*(-1 + pms->dm)*pms->kappa1 - 13283651*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - pms->eta*(98879074949 + 2400*(47872558 + 13283651*pms->kappa1 + 13283651*pms->kappa2)*pms->sigx2) + 2400*(47872558*pms->dm + 13283651*(-1 + pms->dm)*pms->kappa1 + 13283651*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 2400*(47872558 + 13283651*pms->kappa1 + 13283651*pms->kappa2)*pms->sx2))*var->vom6;
	COMPLEX16 PN3=((-5*I)/580608)*var->e08*(55705569*pms->dm*pms->sigx - 190158317*pms->dm*var->e02*pms->sigx + 141928533*pms->sx - 460222929*var->e02*pms->sx + 2*pms->cosp2Th0Phi*(-15020721 + 58734038*var->e02)*(pms->dm*pms->sigx + pms->sx) - (2*I)*(-958221 + 4827788*var->e02)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/27869184*I)*var->e08*(var->e02*(103027184826 - 9894191382*pms->eta) + 3*pms->cosp2Th0Phi*(314502696 - 1254238378*var->e02 + 2196768913*var->e04)*(-1 + 3*pms->eta) + 72*(-366240831 + 18059467*pms->eta) + var->e04*(-163444016946 + 24300780547*pms->eta))*var->vom4;
	COMPLEX16 PN0=((-390625*I)/76640256)*(-9504 + 36432*var->e02 - 60126*var->e04 + 57817*var->e06)*var->e08*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl10_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e08*pms->expm4Thm4Phi*(-8680019605*(1 - 5*pms->eta + 5*pms->eta2) + 529673610*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 34720078420*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 8*(13566780097 - 41862872701*pms->eta + 9440568645*pms->eta2)*pms->expp2Thp4Phi - 52080117630*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 34720078420*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 8*(13566780097 - 41862872701*pms->eta + 9440568645*pms->eta2)*pms->expp6Thp4Phi - 8680019605*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 529673610*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 4*pms->expp4Thp4Phi*(880502906817 - 25356607995*pms->eta2 - 1200*(-10652628 + 13283651*(-1 + pms->dm)*pms->kappa1 - 13283651*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - pms->eta*(98879074949 + 2400*(47872558 + 13283651*pms->kappa1 + 13283651*pms->kappa2)*pms->sigx2) + 2400*(47872558*pms->dm + 13283651*(-1 + pms->dm)*pms->kappa1 + 13283651*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 2400*(47872558 + 13283651*pms->kappa1 + 13283651*pms->kappa2)*pms->sx2))*var->vom6)/247726080;
	COMPLEX16 PN3=(5*var->e08*(55705569*pms->dm*pms->sigx - 190158317*pms->dm*var->e02*pms->sigx + 141928533*pms->sx - 460222929*var->e02*pms->sx + 2*pms->cosp2Th0Phi*(-6073029 + 22125337*var->e02)*(pms->dm*pms->sigx + pms->sx) + (2*I)*(-7989471 + 31780913*var->e02)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/580608;
	COMPLEX16 PN2=(var->e08*(var->e02*(103027184826 - 9894191382*pms->eta) + 3*pms->cosp2Th0Phi*(314502696 - 1254238378*var->e02 + 2196768913*var->e04)*(-1 + 3*pms->eta) + 72*(-366240831 + 18059467*pms->eta) + var->e04*(-163444016946 + 24300780547*pms->eta))*var->vom4)/27869184;
	COMPLEX16 PN0=(390625*(-9504 + 36432*var->e02 - 60126*var->e04 + 57817*var->e06)*var->e08*var->vom2)/76640256;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e07*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((47932462688 - 174258910752*pms->eta + var->e02*(-243945126674 + 884976187821*pms->eta))*pms->sigx + 3*pms->dm*(42108395968 - 204354325279*var->e02)*pms->sx + 125*pms->cosp2Th0Phi*(-((-139767520 + 726434551*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 18750000*pms->dm*(-8 + 41*var->e02)*pms->sx))*var->vom6)/30965760;
	COMPLEX16 PN3=(pms->dm*var->e07*(135*pms->cosp2Th0Phi*(3452714304 - 17842896628*var->e02 + 40731363395*var->e04)*(-1 + 2*pms->eta) + 576*(-18086631061 + 1868069850*pms->eta) - 396*var->e02*(-157016539051 + 25582059630*pms->eta) + var->e04*(-147425759925019 + 32645708872950*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/4459069440;
	COMPLEX16 PN1=-1.0/2452488192*(pms->dm*var->e07*(337366377216 - 1789919711712*var->e02 + 4084654350480*var->e04 - 5344983788870*var->e06 + 4540696880525*var->e08)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/30965760)*var->e07*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((47932462688 - 174258910752*pms->eta + var->e02*(-243945126674 + 884976187821*pms->eta))*pms->sigx + 3*pms->dm*(42108395968 - 204354325279*var->e02)*pms->sx + 125*pms->cosp2Th0Phi*(-((-139767520 + 726434551*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 18750000*pms->dm*(-8 + 41*var->e02)*pms->sx))*var->vom6;
	COMPLEX16 PN3=(I/4459069440)*pms->dm*var->e07*(135*pms->cosp2Th0Phi*(3452714304 - 17842896628*var->e02 + 40731363395*var->e04)*(-1 + 2*pms->eta) + 576*(-18086631061 + 1868069850*pms->eta) - 396*var->e02*(-157016539051 + 25582059630*pms->eta) + var->e04*(-147425759925019 + 32645708872950*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e07*(337366377216 - 1789919711712*var->e02 + 4084654350480*var->e04 - 5344983788870*var->e06 + 4540696880525*var->e08)*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/2452488192;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl10_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/967680)*var->e06*(pms->cosp2Th0Phi*(-250053342 + 1609443617*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 7*(821931984 - 2450199274*pms->eta + 128871405*pms->eta2) + var->e02*(46582929797 - 141588700650*pms->eta + 14795981075*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(-1.0/27869184*I)*var->e06*(-9390784032 + 63923383872*var->e02 - 186470119629*var->e04 + 311495383895*var->e06)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl10_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/967680*(var->e06*(pms->cosp2Th0Phi*(-250053342 + 1609443617*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 7*(821931984 - 2450199274*pms->eta + 128871405*pms->eta2) + var->e02*(46582929797 - 141588700650*pms->eta + 14795981075*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	COMPLEX16 PN2=(var->e06*(-9390784032 + 63923383872*var->e02 - 186470119629*var->e04 + 311495383895*var->e06)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/27869184;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl10_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(pms->dm*var->e05*(-75238797312 + 662627198016*var->e02 - 2479064411184*var->e04 + 5284888786861*var->e06)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/148635648;
	return PN3;
}

COMPLEX16 cpart_LPartsl10_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/148635648)*pms->dm*var->e05*(-75238797312 + 662627198016*var->e02 - 2479064411184*var->e04 + 5284888786861*var->e06)*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl10_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/1769472)*var->e04*(897044592 - 10335242928*var->e02 + 49730341193*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl10_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/1769472*(var->e04*(897044592 - 10335242928*var->e02 + 49730341193*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

COMPLEX16 spart_LPartsl11_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(-26015236874803*pms->dm*var->e014*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/259696204185600;
	return PN1;
}

COMPLEX16 cpart_LPartsl11_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=((26015236874803*I)/259696204185600)*pms->dm*var->e014*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN1;
}

COMPLEX16 spart_LPartsl11_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((11*I)/9274864435200)*var->e013*(11570542751422 - 1299229177741*pms->eta + 139118913769*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4;
	COMPLEX16 PN0=((-25937424601*I)/519392408371200)*var->e013*(-3192 + 4223*var->e02)*var->vom2;
	return PN2+PN0;
}

COMPLEX16 cpart_LPartsl11_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(11*var->e013*(11570542751422 - 1299229177741*pms->eta + 139118913769*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4)/9274864435200;
	COMPLEX16 PN0=(-25937424601*var->e013*(-3192 + 4223*var->e02)*var->vom2)/519392408371200;
	return PN2+PN0;
}

COMPLEX16 spart_LPartsl11_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(25937424601*pms->dm*var->e012*(-390 + 799*var->e02)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/9274864435200;
	return PN1;
}

COMPLEX16 cpart_LPartsl11_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=((-25937424601*I)/9274864435200)*pms->dm*var->e012*(-390 + 799*var->e02)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN1;
}

COMPLEX16 spart_LPartsl11_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((285311670611*I)/407686348800)*var->e011*(-48 + 145*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl11_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(var->e011*(-367884385029456 + 1015397133304511*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4)/8561413324800;
	return PN2;
}

COMPLEX16 spart_LPartsl11_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/1426902220800*(pms->dm*var->e010*pms->exp0Thm3Phi*(187490549942625*(-1 + 2*pms->eta) - 26*(-5299760299589 + 10168584337890*pms->eta)*pms->exp0Thp2Phi + 15*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-12499369996175 + 1907492365406*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=-1.0/5707608883200*(pms->dm*var->e010*(7185540673920 - 67070099325504*var->e02 + 146684003965103*var->e04)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN3+PN1;
}

COMPLEX16 cpart_LPartsl11_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-1.0/1426902220800*I)*pms->dm*var->e010*pms->exp0Thm3Phi*(-187490549942625*(-1 + 2*pms->eta) - 26*(-5299760299589 + 10168584337890*pms->eta)*pms->exp0Thp2Phi + 15*pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(12499369996175 + 1907492365406*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(-1.0/5707608883200*I)*pms->dm*var->e010*(7185540673920 - 67070099325504*var->e02 + 146684003965103*var->e04)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN3+PN1;
}

COMPLEX16 spart_LPartsl11_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/8561413324800*I)*var->e09*pms->expm4Thm4Phi*(520055390033730*(1 - 5*pms->eta + 5*pms->eta2) + 31807108105569*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi - 2080221560134920*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 4*(1526030735544387 - 4732504774493785*pms->eta + 1184207093940405*pms->eta2)*pms->expp2Thp4Phi + 3120332340202380*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi - 2080221560134920*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 4*(1526030735544387 - 4732504774493785*pms->eta + 1184207093940405*pms->eta2)*pms->expp6Thp4Phi + 520055390033730*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 31807108105569*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 6*pms->expp4Thp4Phi*(31867614644314759 - 1029750586153125*pms->eta2 + 469672164213120*pms->sigx2 + 556605142853760*pms->kappa1*pms->sigx2 - 556605142853760*pms->dm*pms->kappa1*pms->sigx2 + 556605142853760*pms->kappa2*pms->sigx2 + 556605142853760*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(733637355353135 + 25344*(32395117016 + 8784803391*pms->kappa1 + 8784803391*pms->kappa2)*pms->sigx2) + 126720*(32395117016*pms->dm + 8784803391*(-1 + pms->dm)*pms->kappa1 + 8784803391*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 126720*(32395117016 + 8784803391*pms->kappa1 + 8784803391*pms->kappa2)*pms->sx2))*var->vom6;
	COMPLEX16 PN3=((-11*I)/178362777600)*var->e09*(11975089906360*pms->dm*pms->sigx - 43537616036353*pms->dm*var->e02*pms->sigx + 30188321158200*pms->sx - 104568525431841*var->e02*pms->sx + 3*pms->cosp2Th0Phi*(-2223537802760 + 9223679553247*var->e02)*(pms->dm*pms->sigx + pms->sx) - (3*I)*(-148543834680 + 768079133321*var->e02)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(-1.0/1426902220800*I)*var->e09*(var->e02*(8510959876284840 - 888010130311256*pms->eta) + pms->cosp2Th0Phi*(74094058218560 - 314818243661848*var->e02 + 594279426295645*var->e04)*(-1 + 3*pms->eta) + 320*(-6473264848911 + 388294535665*pms->eta) + var->e04*(-14619425825141391 + 2250714803562985*pms->eta))*var->vom4;
	COMPLEX16 PN0=((-25937424601*I)/17122826649600)*(-46080 + 187776*var->e02 - 334512*var->e04 + 351845*var->e06)*var->e09*var->vom2;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl11_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e09*pms->expm4Thm4Phi*(-520055390033730*(1 - 5*pms->eta + 5*pms->eta2) + 31807108105569*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi + 2080221560134920*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp2Th0Phi - 4*(1526030735544387 - 4732504774493785*pms->eta + 1184207093940405*pms->eta2)*pms->expp2Thp4Phi - 3120332340202380*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp4Th0Phi + 2080221560134920*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp6Th0Phi - 4*(1526030735544387 - 4732504774493785*pms->eta + 1184207093940405*pms->eta2)*pms->expp6Thp4Phi - 520055390033730*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Th0Phi + 31807108105569*(1 - 5*pms->eta + 5*pms->eta2)*pms->expp8Thp4Phi - 6*pms->expp4Thp4Phi*(31867614644314759 - 1029750586153125*pms->eta2 + 469672164213120*pms->sigx2 + 556605142853760*pms->kappa1*pms->sigx2 - 556605142853760*pms->dm*pms->kappa1*pms->sigx2 + 556605142853760*pms->kappa2*pms->sigx2 + 556605142853760*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(733637355353135 + 25344*(32395117016 + 8784803391*pms->kappa1 + 8784803391*pms->kappa2)*pms->sigx2) + 126720*(32395117016*pms->dm + 8784803391*(-1 + pms->dm)*pms->kappa1 + 8784803391*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 126720*(32395117016 + 8784803391*pms->kappa1 + 8784803391*pms->kappa2)*pms->sx2))*var->vom6)/8561413324800;
	COMPLEX16 PN3=(11*var->e09*(11975089906360*pms->dm*pms->sigx - 43537616036353*pms->dm*var->e02*pms->sigx + 30188321158200*pms->sx - 104568525431841*var->e02*pms->sx + 6*pms->cosp2Th0Phi*(-444476574680 + 1729860538321*var->e02)*(pms->dm*pms->sigx + pms->sx) + (12*I)*(-296510204680 + 1248969835821*var->e02)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/178362777600;
	COMPLEX16 PN2=(var->e09*(var->e02*(8510959876284840 - 888010130311256*pms->eta) + pms->cosp2Th0Phi*(74094058218560 - 314818243661848*var->e02 + 594279426295645*var->e04)*(-1 + 3*pms->eta) + 320*(-6473264848911 + 388294535665*pms->eta) + var->e04*(-14619425825141391 + 2250714803562985*pms->eta))*var->vom4)/1426902220800;
	COMPLEX16 PN0=(25937424601*(-46080 + 187776*var->e02 - 334512*var->e04 + 351845*var->e06)*var->e09*var->vom2)/17122826649600;
	return PN4+PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/3963617280*(var->e08*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((-10762605587573 + 39053233732287*pms->eta)*pms->sigx - 28006349870397*pms->dm*pms->sx + 55*pms->cosp2Th0Phi*(-72676156691*(-1 + 3*pms->eta)*pms->sigx + 77812273803*pms->dm*pms->sx))*var->vom6);
	COMPLEX16 PN3=-1.0/17836277760*(pms->dm*var->e08*(73226831892183 - 8927338107942*pms->eta + 3*pms->cosp2Th0Phi*(-1063631742291 + 5761134973061*var->e02)*(-1 + 2*pms->eta) + var->e02*(-443614821747029 + 78780624764886*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(pms->dm*(-80151304541760 + 442007956846080*var->e02 - 1062357601904049*var->e04 + 1485413256358801*var->e06)*var->e08*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/356725555200;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/3963617280*I)*var->e08*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((-10762605587573 + 39053233732287*pms->eta)*pms->sigx - 28006349870397*pms->dm*pms->sx + 55*pms->cosp2Th0Phi*(-72676156691*(-1 + 3*pms->eta)*pms->sigx + 77812273803*pms->dm*pms->sx))*var->vom6;
	COMPLEX16 PN3=(pms->dm*var->e08*(73226831892183 - 8927338107942*pms->eta + 3*pms->cosp2Th0Phi*(-1063631742291 + 5761134973061*var->e02)*(-1 + 2*pms->eta) + var->e02*(-443614821747029 + 78780624764886*pms->eta))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/17836277760;
	COMPLEX16 PN1=(I/356725555200)*pms->dm*(-80151304541760 + 442007956846080*var->e02 - 1062357601904049*var->e04 + 1485413256358801*var->e06)*var->e08*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl11_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/59454259200)*var->e07*(12*pms->cosp2Th0Phi*(-2465442334384 + 16338476456749*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 32*(22287273879609 - 66834700617880*pms->eta + 4853223408870*pms->eta2) + 3*var->e02*(1898913604014061 - 5793573955536490*pms->eta + 693027978501340*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(-1.0/1070176665600*I)*(-669407408593920 + 4647662104240800*var->e02 - 14028761422909920*var->e04 + 24595221899807801*var->e06)*var->e07*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl11_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/59454259200*(var->e07*(12*pms->cosp2Th0Phi*(-2465442334384 + 16338476456749*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 32*(22287273879609 - 66834700617880*pms->eta + 4853223408870*pms->eta2) + 3*var->e02*(1898913604014061 - 5793573955536490*pms->eta + 693027978501340*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	COMPLEX16 PN2=((-669407408593920 + 4647662104240800*var->e02 - 14028761422909920*var->e04 + 24595221899807801*var->e06)*var->e07*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/1070176665600;
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl11_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/990904320*(pms->dm*(1085040462688 - 9528813368560*var->e02 + 36163374701471*var->e04)*var->e06*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN3;
}

COMPLEX16 cpart_LPartsl11_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-1.0/990904320*I)*pms->dm*(1085040462688 - 9528813368560*var->e02 + 36163374701471*var->e04)*var->e06*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl11_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/9909043200)*(13028709728832 - 145437022119816*var->e02 + 693723743961547*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl11_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/9909043200*((13028709728832 - 145437022119816*var->e02 + 693723743961547*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

COMPLEX16 spart_LPartsl12_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(-1721169*pms->dm*var->e015*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/14014000;
	return PN1;
}

COMPLEX16 cpart_LPartsl12_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=((1721169*I)/14014000)*pms->dm*var->e015*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN1;
}

COMPLEX16 spart_LPartsl12_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN0=((67797*I)/350350)*var->e014*var->vom2;
	return PN0;
}

COMPLEX16 cpart_LPartsl12_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN0=(67797*var->e014*var->vom2)/350350;
	return PN0;
}

COMPLEX16 spart_LPartsl12_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(2187*pms->dm*var->e013*(-1820 + 4177*var->e02)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/2802800;
	return PN1;
}

COMPLEX16 cpart_LPartsl12_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=((-2187*I)/2802800)*pms->dm*var->e013*(-1820 + 4177*var->e02)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN1;
}

COMPLEX16 spart_LPartsl12_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((-13122*I)/275)*var->e012*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl12_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(-11416488889*var->e012*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4)/189235200;
	return PN2;
}

COMPLEX16 spart_LPartsl12_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/504627200*(pms->dm*var->e011*pms->exp0Thm3Phi*(102154049141*(-1 + 2*pms->eta) + (75078881563 - 144366293266*pms->eta)*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(-102154049141 + 14769528393*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(-3*pms->dm*var->e011*(2349909848 - 19781965320*var->e02 + 45746148939*var->e04)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/3280076800;
	return PN3+PN1;
}

COMPLEX16 cpart_LPartsl12_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-1.0/504627200*I)*pms->dm*var->e011*pms->exp0Thm3Phi*(-102154049141*(-1 + 2*pms->eta) + (75078881563 - 144366293266*pms->eta)*pms->exp0Thp2Phi + pms->cosp2Th0Phi*(-1 + 2*pms->eta)*(102154049141 + 14769528393*pms->exp0Thp2Phi))*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=((-3*I)/3280076800)*pms->dm*var->e011*(2349909848 - 19781965320*var->e02 + 45746148939*var->e04)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN3+PN1;
}

COMPLEX16 spart_LPartsl12_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/179200)*var->e010*(-201206857*pms->dm*pms->sigx - 502287498*pms->sx + 115521509*pms->cosp2Th0Phi*(pms->dm*pms->sigx + pms->sx) - (8026085*I)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(I/189235200)*var->e010*(416001689202 - 29036812662*pms->eta + pms->cosp2Th0Phi*(-14924128318 + 67291563983*var->e02)*(-1 + 3*pms->eta) + 3*var->e02*(-599082375875 + 67201726905*pms->eta))*var->vom4;
	COMPLEX16 PN0=((2187*I)/3850)*var->e010*(176 - 760*var->e02 + 1453*var->e04)*var->vom2;
	return PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl12_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/179200*(var->e010*(-201206857*pms->dm*pms->sigx - 502287498*pms->sx + 45721627*pms->cosp2Th0Phi*(pms->dm*pms->sigx + pms->sx) + (61773797*I)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5);
	COMPLEX16 PN2=-1.0/189235200*(var->e010*(416001689202 - 29036812662*pms->eta + pms->cosp2Th0Phi*(-14924128318 + 67291563983*var->e02)*(-1 + 3*pms->eta) + 3*var->e02*(-599082375875 + 67201726905*pms->eta))*var->vom4);
	COMPLEX16 PN0=(-2187*var->e010*(176 - 760*var->e02 + 1453*var->e04)*var->vom2)/3850;
	return PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1.0/3440640*(var->e09*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((-15959558564 + 57801446331*pms->eta)*pms->sigx - 41051002821*pms->dm*pms->sx + 5*pms->cosp2Th0Phi*(-1207357585*(-1 + 3*pms->eta)*pms->sigx + 1289945088*pms->dm*pms->sx))*var->vom6);
	COMPLEX16 PN3=-1.0/137625600*(pms->dm*var->e09*(965184497870 - 133843705260*pms->eta + 3*pms->cosp2Th0Phi*(-13756347950 + 77957899207*var->e02)*(-1 + 2*pms->eta) + 5*var->e02*(-1193479066193 + 228233815902*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	COMPLEX16 PN1=(3*pms->dm*(-30286937120 + 173587319400*var->e02 - 438520618644*var->e04 + 652273838245*var->e06)*var->e09*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/252313600;
	return PN4+PN3+PN1;
}

COMPLEX16 cpart_LPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/3440640*I)*var->e09*pms->exp0Thp1Phi*pms->sinp1Th0Phi*((-15959558564 + 57801446331*pms->eta)*pms->sigx - 41051002821*pms->dm*pms->sx + 5*pms->cosp2Th0Phi*(-1207357585*(-1 + 3*pms->eta)*pms->sigx + 1289945088*pms->dm*pms->sx))*var->vom6;
	COMPLEX16 PN3=(pms->dm*var->e09*(965184497870 - 133843705260*pms->eta + 3*pms->cosp2Th0Phi*(-13756347950 + 77957899207*var->e02)*(-1 + 2*pms->eta) + 5*var->e02*(-1193479066193 + 228233815902*pms->eta))*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom5)/137625600;
	COMPLEX16 PN1=((3*I)/252313600)*pms->dm*(-30286937120 + 173587319400*var->e02 - 438520618644*var->e04 + 652273838245*var->e06)*var->e09*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN4+PN3+PN1;
}

COMPLEX16 spart_LPartsl12_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/4300800*I)*var->e08*(99394001089 - 299580995165*pms->eta + 26981669355*pms->eta2 + 3979072899*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/17203200)*(19308295920 - 137173427580*var->e02 + 428740858123*var->e04)*var->e08*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl12_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e08*(99394001089 - 299580995165*pms->eta + 26981669355*pms->eta2 + 3979072899*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/4300800;
	COMPLEX16 PN2=-1.0/17203200*((19308295920 - 137173427580*var->e02 + 428740858123*var->e04)*var->e08*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl12_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=-1.0/4587520*(pms->dm*(10289973408 - 90820674066*var->e02 + 351125092595*var->e04)*var->e07*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN3;
}

COMPLEX16 cpart_LPartsl12_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-1.0/4587520*I)*pms->dm*(10289973408 - 90820674066*var->e02 + 351125092595*var->e04)*var->e07*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl12_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((-9*I)/5734400)*(-2000481434 + 21962742143*var->e02)*var->e06*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl12_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(9*(-2000481434 + 21962742143*var->e02)*var->e06*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/5734400;
	return PN4;
}

COMPLEX16 spart_LPartsl13_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN0=((1560971703206227*I)/6592288260096000)*var->e015*var->vom2;
	return PN0;
}

COMPLEX16 cpart_LPartsl13_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN0=(1560971703206227*var->e015*var->vom2)/6592288260096000;
	return PN0;
}

COMPLEX16 spart_LPartsl13_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(-23298085122481*pms->dm*var->e014*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/12556739543040;
	return PN1;
}

COMPLEX16 cpart_LPartsl13_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(23298085122481*pms->dm*var->e014*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/12556739543040;
	return PN1;
}

COMPLEX16 spart_LPartsl13_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((-302875106592253*I)/4484549836800)*var->e013*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl13_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(-7958856867174911*var->e013*(-1 + 3*pms->eta)*pms->exp0Thm2Phi*pms->sinp1Th0PhiTO2*var->vom4)/94175546572800;
	return PN2;
}

COMPLEX16 spart_LPartsl13_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(pms->dm*var->e012*(-27526178056398 + 217599546856939*var->e02)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/7847962214400;
	return PN1;
}

COMPLEX16 cpart_LPartsl13_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(pms->dm*var->e012*(-27526178056398 + 217599546856939*var->e02)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/7847962214400;
	return PN1;
}

COMPLEX16 spart_LPartsl13_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=((13*I)/1961990553600)*var->e011*(-255015786595355*pms->dm*pms->sigx - 630849920948571*pms->sx + 150613003337535*pms->cosp2Th0Phi*(pms->dm*pms->sigx + pms->sx) - (10824492602649*I)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5;
	COMPLEX16 PN2=(I/7847962214400)*var->e011*(25851112319914440 - 2040522198740296*pms->eta + pms->cosp2Th0Phi*(-932283008308056 + 4445225776621423*var->e02)*(-1 + 3*pms->eta) + var->e02*(-117341296999872790 + 14036085825977253*pms->eta))*var->vom4;
	COMPLEX16 PN0=((23298085122481*I)/62783697715200)*var->e011*(384 - 1752*var->e02 + 3577*var->e04)*var->vom2;
	return PN3+PN2+PN0;
}

COMPLEX16 cpart_LPartsl13_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-13*var->e011*(-255015786595355*pms->dm*pms->sigx - 630849920948571*pms->sx + 59069762764794*pms->cosp2Th0Phi*(pms->dm*pms->sigx + pms->sx) + (80718747970092*I)*pms->sinp2Th0Phi*(pms->dm*pms->sigx + pms->sx))*var->vom5)/1961990553600;
	COMPLEX16 PN2=-1.0/7847962214400*(var->e011*(25851112319914440 - 2040522198740296*pms->eta + pms->cosp2Th0Phi*(-932283008308056 + 4445225776621423*var->e02)*(-1 + 3*pms->eta) + var->e02*(-117341296999872790 + 14036085825977253*pms->eta))*var->vom4);
	COMPLEX16 PN0=(-23298085122481*var->e011*(384 - 1752*var->e02 + 3577*var->e04)*var->vom2)/62783697715200;
	return PN3+PN2+PN0;
}

COMPLEX16 spart_LPartsl13_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(pms->dm*var->e010*(-16710777611178299 + 2573268318515334*pms->eta + 704968399688445*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/1426902220800;
	COMPLEX16 PN1=-1.0/31391848857600*(pms->dm*var->e010*(17841146483195904 - 106222139333145984*var->e02 + 281471841051409879*var->e04)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN3+PN1;
}

COMPLEX16 cpart_LPartsl13_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/1426902220800)*pms->dm*var->e010*(-16710777611178299 + 2573268318515334*pms->eta + 704968399688445*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e010*(17841146483195904 - 106222139333145984*var->e02 + 281471841051409879*var->e04)*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/31391848857600;
	return PN3+PN1;
}

COMPLEX16 spart_LPartsl13_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/178362777600*I)*var->e09*(7657188920345256 - 23182806739154995*pms->eta + 2449143492217365*pms->eta2 + 298240543267191*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6;
	COMPLEX16 PN2=(I/5231974809600)*(10253376785368640 - 74681426353176280*var->e02 + 241717972636088577*var->e04)*var->e09*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN4+PN2;
}

COMPLEX16 cpart_LPartsl13_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(var->e09*(7657188920345256 - 23182806739154995*pms->eta + 2449143492217365*pms->eta2 + 298240543267191*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/178362777600;
	COMPLEX16 PN2=-1.0/5231974809600*((10253376785368640 - 74681426353176280*var->e02 + 241717972636088577*var->e04)*var->e09*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN2;
}

COMPLEX16 spart_LPartsl13_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(pms->dm*(-52340219750346 + 466680071075137*var->e02)*var->e08*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/11890851840;
	return PN3;
}

COMPLEX16 cpart_LPartsl13_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/11890851840)*pms->dm*(-52340219750346 + 466680071075137*var->e02)*var->e08*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl13_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1.0/9909043200*I)*(-69722871315424 + 760231570486729*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl13_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((-69722871315424 + 760231570486729*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/9909043200;
	return PN4;
}

COMPLEX16 spart_LPartsl14_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(-13841287201*pms->dm*var->e015*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/5693276160;
	return PN1;
}

COMPLEX16 cpart_LPartsl14_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(13841287201*pms->dm*var->e015*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/5693276160;
	return PN1;
}

COMPLEX16 spart_LPartsl14_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(pms->dm*var->e013*(-632028989722 + 4814263457815*var->e02)*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/113865523200;
	return PN1;
}

COMPLEX16 cpart_LPartsl14_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(pms->dm*var->e013*(-632028989722 + 4814263457815*var->e02)*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/113865523200;
	return PN1;
}

COMPLEX16 spart_LPartsl14_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(-1.0/821145600*I)*var->e012*(-4017915377433 + 351612158854*pms->eta + 145895810128*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4;
	COMPLEX16 PN0=((-13841287201*I)/1779148800)*var->e012*(-26 + 125*var->e02)*var->vom2;
	return PN2+PN0;
}

COMPLEX16 cpart_LPartsl14_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(var->e012*(-4017915377433 + 351612158854*pms->eta + 145895810128*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4)/821145600;
	COMPLEX16 PN0=(13841287201*var->e012*(-26 + 125*var->e02)*var->vom2)/1779148800;
	return PN2+PN0;
}

COMPLEX16 spart_LPartsl14_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(pms->dm*var->e011*(-4707836889572857 + 791659495310082*pms->eta + 196766013178287*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/245248819200;
	COMPLEX16 PN1=-1.0/56932761600*(pms->dm*var->e011*(50418292164864 - 311602159833705*var->e02 + 864401574167810*var->e04)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN3+PN1;
}

COMPLEX16 cpart_LPartsl14_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/245248819200)*pms->dm*var->e011*(-4707836889572857 + 791659495310082*pms->eta + 196766013178287*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom5;
	COMPLEX16 PN1=(pms->dm*var->e011*(50418292164864 - 311602159833705*var->e02 + 864401574167810*var->e04)*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/56932761600;
	return PN3+PN1;
}

COMPLEX16 spart_LPartsl14_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(-1.0/1094860800*I)*var->e010*(-3663724069489 + 27388894750533*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl14_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(var->e010*(-3663724069489 + 27388894750533*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/1094860800;
	return PN2;
}

COMPLEX16 spart_LPartsl14_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(pms->dm*(-13287091716460 + 120096246685813*var->e02)*var->e09*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/1592524800;
	return PN3;
}

COMPLEX16 cpart_LPartsl14_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(I/1592524800)*pms->dm*(-13287091716460 + 120096246685813*var->e02)*var->e09*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl14_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((663286052239*I)/44236800)*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl14_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-663286052239*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/44236800;
	return PN4;
}

COMPLEX16 spart_LPartsl15_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(-1154185714623*pms->dm*var->e014*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/134351945728;
	return PN1;
}

COMPLEX16 cpart_LPartsl15_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=((-1154185714623*I)/134351945728)*pms->dm*var->e014*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN1;
}

COMPLEX16 spart_LPartsl15_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(-1.0/201527918592*I)*var->e013*(53226781012357*pms->cosp2Th0Phi*(-1 + 3*pms->eta) + 3*(-484728189617341 + 46351549013787*pms->eta))*var->vom4;
	COMPLEX16 PN0=((-4805419921875*I)/940463620096)*var->e013*(-56 + 283*var->e02)*var->vom2;
	return PN2+PN0;
}

COMPLEX16 cpart_LPartsl15_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(var->e013*(53226781012357*pms->cosp2Th0Phi*(-1 + 3*pms->eta) + 3*(-484728189617341 + 46351549013787*pms->eta))*var->vom4)/201527918592;
	COMPLEX16 PN0=(4805419921875*var->e013*(-56 + 283*var->e02)*var->vom2)/940463620096;
	return PN2+PN0;
}

COMPLEX16 spart_LPartsl15_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(3*pms->dm*var->e012*(-7641871331393 + 48985713629001*var->e02)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/16793993216;
	return PN1;
}

COMPLEX16 cpart_LPartsl15_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=((3*I)/16793993216)*pms->dm*var->e012*(-7641871331393 + 48985713629001*var->e02)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN1;
}

COMPLEX16 spart_LPartsl15_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(-1.0/3875536896*I)*var->e011*(-21734689969904 + 166866718808699*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl15_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(var->e011*(-21734689969904 + 166866718808699*var->e02)*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/3875536896;
	return PN2;
}

COMPLEX16 spart_LPartsl15_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-225607832001*pms->dm*var->e010*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/14680064;
	return PN3;
}

COMPLEX16 cpart_LPartsl15_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=((-225607832001*I)/14680064)*pms->dm*var->e010*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl15_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((1800805172581*I)/58720256)*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6;
	return PN4;
}

COMPLEX16 cpart_LPartsl15_k6(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1800805172581*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->exp0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/58720256;
	return PN4;
}

COMPLEX16 spart_LPartsl16_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(-145887551891297*pms->dm*var->e015*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3)/11158821273600;
	return PN1;
}

COMPLEX16 cpart_LPartsl16_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=((-145887551891297*I)/11158821273600)*pms->dm*var->e015*pms->exp0Thm1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN1;
}

COMPLEX16 spart_LPartsl16_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN0=((17179869184*I)/42567525)*var->e014*var->vom2;
	return PN0;
}

COMPLEX16 cpart_LPartsl16_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN0=(-17179869184*var->e014*var->vom2)/42567525;
	return PN0;
}

COMPLEX16 spart_LPartsl16_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(pms->dm*var->e013*(-23266350377568676 + 154548862185176803*var->e02)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/11158821273600;
	return PN1;
}

COMPLEX16 cpart_LPartsl16_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(I/11158821273600)*pms->dm*var->e013*(-23266350377568676 + 154548862185176803*var->e02)*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3;
	return PN1;
}

COMPLEX16 spart_LPartsl16_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((10504122050603*I)/1135411200)*var->e012*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl16_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(-10504122050603*var->e012*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/1135411200;
	return PN2;
}

COMPLEX16 spart_LPartsl16_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=(-847182690608327*pms->dm*var->e011*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/30656102400;
	return PN3;
}

COMPLEX16 cpart_LPartsl16_k5(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN3=((-847182690608327*I)/30656102400)*pms->dm*var->e011*(-1 + 2*pms->eta)*pms->exp0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5;
	return PN3;
}

COMPLEX16 spart_LPartsl17_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN0=((48661191875666868481.*I)/85699747381248000)*var->e015*var->vom2;
	return PN0;
}

COMPLEX16 cpart_LPartsl17_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN0=(-48661191875666868481.*var->e015*var->vom2)/85699747381248000;
	return PN0;
}

COMPLEX16 spart_LPartsl17_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(-9025164980498929279*pms->dm*var->e014*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/2856658246041600;
	return PN1;
}

COMPLEX16 cpart_LPartsl17_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(9025164980498929279*pms->dm*var->e014*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/2856658246041600;
	return PN1;
}

COMPLEX16 spart_LPartsl17_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=((18431904337165675751.*I)/1224282105446400)*var->e013*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4;
	return PN2;
}

COMPLEX16 cpart_LPartsl17_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN2=(-18431904337165675751.*var->e013*(-1 + 3*pms->eta)*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/1224282105446400;
	return PN2;
}

COMPLEX16 spart_LPartsl18_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(-545781345513483*pms->dm*var->e015*pms->exp0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/114802688000;
	return PN1;
}

COMPLEX16 cpart_LPartsl18_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN1=(545781345513483*pms->dm*var->e015*((-I)*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*pms->sinp1Th0Phi*var->vom3)/114802688000;
	return PN1;
}
