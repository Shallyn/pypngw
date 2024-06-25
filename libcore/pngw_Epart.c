/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#include "pngw_Epart.h"

size_t n_spart_EFunc = 36;
INT spart_EFunc_lkList[36][2]={{1,-3},{1,-1},{1,1},{1,3},{2,-3},{2,-1}\
,{2,1},{2,3},{3,-3},{3,-1},
	{3,1},{3,3},{4,-3},{4,-1},{4,1},{4,3},{5,-3},{5,-1},{5,1},{5,3},
	{6,-3},{6,-1},{6,1},{6,3},{7,-1},{7,1},{7,3},{8,-1},{8,1},{8,3},
	{9,1},{9,3},{10,1},{10,3},{11,3},{12,3}};
REAL8 (*spart_EFunc_fList[36])(BBHDynVariables*, BBHDynParams*)={
	spart_EPartsl1_km3,
	spart_EPartsl1_km1,
	spart_EPartsl1_k1,
	spart_EPartsl1_k3,
	spart_EPartsl2_km3,
	spart_EPartsl2_km1,
	spart_EPartsl2_k1,
	spart_EPartsl2_k3,
	spart_EPartsl3_km3,
	spart_EPartsl3_km1,
	spart_EPartsl3_k1,
	spart_EPartsl3_k3,
	spart_EPartsl4_km3,
	spart_EPartsl4_km1,
	spart_EPartsl4_k1,
	spart_EPartsl4_k3,
	spart_EPartsl5_km3,
	spart_EPartsl5_km1,
	spart_EPartsl5_k1,
	spart_EPartsl5_k3,
	spart_EPartsl6_km3,
	spart_EPartsl6_km1,
	spart_EPartsl6_k1,
	spart_EPartsl6_k3,
	spart_EPartsl7_km1,
	spart_EPartsl7_k1,
	spart_EPartsl7_k3,
	spart_EPartsl8_km1,
	spart_EPartsl8_k1,
	spart_EPartsl8_k3,
	spart_EPartsl9_k1,
	spart_EPartsl9_k3,
	spart_EPartsl10_k1,
	spart_EPartsl10_k3,
	spart_EPartsl11_k3,
	spart_EPartsl12_k3
};
size_t n_cpart_EFunc = 36;
INT cpart_EFunc_lkList[36][2]={{1,-3},{1,-1},{1,1},{1,3},{2,-3},{2,-1}\
,{2,1},{2,3},{3,-3},{3,-1},
	{3,1},{3,3},{4,-3},{4,-1},{4,1},{4,3},{5,-3},{5,-1},{5,1},{5,3},
	{6,-3},{6,-1},{6,1},{6,3},{7,-1},{7,1},{7,3},{8,-1},{8,1},{8,3},
	{9,1},{9,3},{10,1},{10,3},{11,3},{12,3}};
REAL8 (*cpart_EFunc_fList[36])(BBHDynVariables*, BBHDynParams*)={
	cpart_EPartsl1_km3,
	cpart_EPartsl1_km1,
	cpart_EPartsl1_k1,
	cpart_EPartsl1_k3,
	cpart_EPartsl2_km3,
	cpart_EPartsl2_km1,
	cpart_EPartsl2_k1,
	cpart_EPartsl2_k3,
	cpart_EPartsl3_km3,
	cpart_EPartsl3_km1,
	cpart_EPartsl3_k1,
	cpart_EPartsl3_k3,
	cpart_EPartsl4_km3,
	cpart_EPartsl4_km1,
	cpart_EPartsl4_k1,
	cpart_EPartsl4_k3,
	cpart_EPartsl5_km3,
	cpart_EPartsl5_km1,
	cpart_EPartsl5_k1,
	cpart_EPartsl5_k3,
	cpart_EPartsl6_km3,
	cpart_EPartsl6_km1,
	cpart_EPartsl6_k1,
	cpart_EPartsl6_k3,
	cpart_EPartsl7_km1,
	cpart_EPartsl7_k1,
	cpart_EPartsl7_k3,
	cpart_EPartsl8_km1,
	cpart_EPartsl8_k1,
	cpart_EPartsl8_k3,
	cpart_EPartsl9_k1,
	cpart_EPartsl9_k3,
	cpart_EPartsl10_k1,
	cpart_EPartsl10_k3,
	cpart_EPartsl11_k3,
	cpart_EPartsl12_k3
};

REAL8 calculate_QEPart_waveform(REAL8 lval, BBHDynVariables *var, BBHDynParams *pms)
{
    REAL8 k = calculate_k(var, pms);
    REAL8 ret = 0.0;
    INT nl, nk;
    for (INT i=0; i<n_cpart_EFunc; i++) {
        nl = cpart_EFunc_lkList[i][0];
        nk = cpart_EFunc_lkList[i][1];
        ret += cpart_EFunc_fList[i](var, pms)*cos((nl + nk*k)*lval);
    }
    for (INT i=0; i<n_spart_EFunc; i++) {
        nl = spart_EFunc_lkList[i][0];
        nk = spart_EFunc_lkList[i][1];
        ret += spart_EFunc_fList[i](var, pms)*sin((nl + nk*k)*lval);
    }
    return ret;
}

REAL8 spart_EPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/17694720*(pms->cos0Thp3Phi*var->e04*pms->sinp1Th0PhiTO3*(-((561600 + 338304*var->e02 + 227791*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(72000 + 34368*var->e02 + 20117*var->e04)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/17694720*(var->e04*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((561600 + 338304*var->e02 + 227791*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(72000 + 34368*var->e02 + 20117*var->e04)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e02*pms->sinp1Th0Phi*(3*(var->e06*(38632393 - 30673131*pms->eta) + var->e04*(34157990 - 26708850*pms->eta) - 80640*(-377 + 171*pms->eta) - 1920*var->e02*(-15001 + 11451*pms->eta))*pms->sigx + pms->dm*(45676800 + 57509760*var->e02 + 69245250*var->e04 + 79079933*var->e06)*pms->sx + pms->cosp2Th0Phi*(-3*(1578240 + 1841280*var->e02 + 2207050*var->e04 + 2514351*var->e06)*(-1 + 3*pms->eta)*pms->sigx + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*pms->sx))*var->vom6)/8847360;
	return PN4;
}

REAL8 cpart_EPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e02*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(3*(var->e06*(38632393 - 30673131*pms->eta) + var->e04*(34157990 - 26708850*pms->eta) - 80640*(-377 + 171*pms->eta) - 1920*var->e02*(-15001 + 11451*pms->eta))*pms->sigx + pms->dm*(45676800 + 57509760*var->e02 + 69245250*var->e04 + 79079933*var->e06)*pms->sx + pms->cosp2Th0Phi*(-3*(1578240 + 1841280*var->e02 + 2207050*var->e04 + 2514351*var->e06)*(-1 + 3*pms->eta)*pms->sigx + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*pms->sx))*var->vom6)/8847360;
	return PN4;
}

REAL8 spart_EPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*pms->sinp1Th0Phi*((2211840*var->e02*(-43 + 9*pms->eta) + 147456*(113 + 909*pms->eta) + 20736*var->e04*(-6233 + 5675*pms->eta) + 512*var->e06*(-307339 + 253557*pms->eta) + 3*var->e08*(-60359353 + 49469259*pms->eta))*pms->sigx - pms->dm*(69451776 + 37453824*var->e02 + 95885568*var->e04 + 110075136*var->e06 + 126113347*var->e08)*pms->sx + pms->cosp2Th0Phi*((6045696 + 3981312*var->e02 + 8937216*var->e04 + 10428928*var->e06 + 11965293*var->e08)*(-1 + 3*pms->eta)*pms->sigx + pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08)*pms->sx))*var->vom6)/14155776;
	return PN4;
}

REAL8 cpart_EPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/14155776*(pms->sin0Thp1Phi*pms->sinp1Th0Phi*((2211840*var->e02*(-43 + 9*pms->eta) + 147456*(113 + 909*pms->eta) + 20736*var->e04*(-6233 + 5675*pms->eta) + 512*var->e06*(-307339 + 253557*pms->eta) + 3*var->e08*(-60359353 + 49469259*pms->eta))*pms->sigx - pms->dm*(69451776 + 37453824*var->e02 + 95885568*var->e04 + 110075136*var->e06 + 126113347*var->e08)*pms->sx + pms->cosp2Th0Phi*((6045696 + 3981312*var->e02 + 8937216*var->e04 + 10428928*var->e06 + 11965293*var->e08)*(-1 + 3*pms->eta)*pms->sigx + pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/4423680*(pms->cos0Thp3Phi*var->e02*pms->sinp1Th0PhiTO3*(-((-195840 + 278400*var->e02 + 25710*var->e04 + 33949*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(-218880 + 124800*var->e02 + 570*var->e04 + 5273*var->e06)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e02*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-195840 + 278400*var->e02 + 25710*var->e04 + 33949*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(-218880 + 124800*var->e02 + 570*var->e04 + 5273*var->e06)*pms->sx)*var->vom6)/4423680;
	return PN4;
}

REAL8 spart_EPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1935360*(pms->cos0Thp3Phi*var->e05*pms->sinp1Th0PhiTO3*(-((124656 + 67844*var->e02 + 46639*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 12*pms->dm*(4368 + 1792*var->e02 + 1007*var->e04)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1935360*(var->e05*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((124656 + 67844*var->e02 + 46639*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 12*pms->dm*(4368 + 1792*var->e02 + 1007*var->e04)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e03*pms->sinp1Th0Phi*((var->e06*(23164853 - 18185535*pms->eta) + 1440*(19067 - 5985*pms->eta) - 183600*var->e02*(-89 + 75*pms->eta) - 54*var->e04*(-390481 + 296355*pms->eta))*pms->sigx + 12*pms->dm*(973440 + 963120*var->e02 + 1164912*var->e04 + 1307233*var->e06)*pms->sx + pms->cosp2Th0Phi*(-((1262880 + 1095120*var->e02 + 1341306*var->e04 + 1498099*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*pms->sx))*var->vom6)/1658880;
	return PN4;
}

REAL8 cpart_EPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e03*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((var->e06*(23164853 - 18185535*pms->eta) + 1440*(19067 - 5985*pms->eta) - 183600*var->e02*(-89 + 75*pms->eta) - 54*var->e04*(-390481 + 296355*pms->eta))*pms->sigx + 12*pms->dm*(973440 + 963120*var->e02 + 1164912*var->e04 + 1307233*var->e06)*pms->sx + pms->cosp2Th0Phi*(-((1262880 + 1095120*var->e02 + 1341306*var->e04 + 1498099*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*pms->sx))*var->vom6)/1658880;
	return PN4;
}

REAL8 spart_EPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e0*pms->sinp1Th0Phi*((25920*(69 + 353*pms->eta) - 720*var->e02*(4523 + 7695*pms->eta) + 540*var->e04*(-4953 + 8155*pms->eta) + 15*var->e06*(-219541 + 165807*pms->eta) + 4*var->e08*(-931139 + 769239*pms->eta))*pms->sigx - 2*pms->dm*(2200320 - 938880*var->e02 + 1477680*var->e04 + 1096400*var->e06 + 1303519*var->e08)*pms->sx + pms->cosp2Th0Phi*((336960 - 94320*var->e02 + 252900*var->e04 + 210765*var->e06 + 247036*var->e08)*(-1 + 3*pms->eta)*pms->sigx + 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*pms->sx))*var->vom6)/276480;
	return PN4;
}

REAL8 cpart_EPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/276480*(var->e0*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((25920*(69 + 353*pms->eta) - 720*var->e02*(4523 + 7695*pms->eta) + 540*var->e04*(-4953 + 8155*pms->eta) + 15*var->e06*(-219541 + 165807*pms->eta) + 4*var->e08*(-931139 + 769239*pms->eta))*pms->sigx - 2*pms->dm*(2200320 - 938880*var->e02 + 1477680*var->e04 + 1096400*var->e06 + 1303519*var->e08)*pms->sx + pms->cosp2Th0Phi*((336960 - 94320*var->e02 + 252900*var->e04 + 210765*var->e06 + 247036*var->e08)*(-1 + 3*pms->eta)*pms->sigx + 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/69120*(pms->cos0Thp3Phi*var->e0*pms->sinp1Th0PhiTO3*(-((125280 - 188280*var->e02 + 87510*var->e04 - 14415*var->e06 + 1897*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(34560 - 63360*var->e02 + 31920*var->e04 - 5280*var->e06 + 629*var->e08)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((125280 - 188280*var->e02 + 87510*var->e04 - 14415*var->e06 + 1897*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(34560 - 63360*var->e02 + 31920*var->e04 - 5280*var->e06 + 629*var->e08)*pms->sx)*var->vom6)/69120;
	return PN4;
}

REAL8 spart_EPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-9*pms->cos0Thp3Phi*var->e06*pms->sinp1Th0PhiTO3*(-19*(686 + 309*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(1918 + 627*var->e02)*pms->sx)*var->vom6)/1146880;
	return PN4;
}

REAL8 cpart_EPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-9*var->e06*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-19*(686 + 309*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(1918 + 627*var->e02)*pms->sx)*var->vom6)/1146880;
	return PN4;
}

REAL8 spart_EPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e04*pms->sinp1Th0Phi*((var->e04*(56270949 - 39784335*pms->eta) + 320*(311177 - 72827*pms->eta) - 384*var->e02*(-75167 + 95801*pms->eta))*pms->sigx + pms->dm*(38067520 + 27057216*var->e02 + 35721861*var->e04)*pms->sx + pms->cosp2Th0Phi*(-((4239040 + 2434944*var->e02 + 3457347*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*pms->sx))*var->vom6)/3932160;
	return PN4;
}

REAL8 cpart_EPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((var->e04*(56270949 - 39784335*pms->eta) + 320*(311177 - 72827*pms->eta) - 384*var->e02*(-75167 + 95801*pms->eta))*pms->sigx + pms->dm*(38067520 + 27057216*var->e02 + 35721861*var->e04)*pms->sx + pms->cosp2Th0Phi*(-((4239040 + 2434944*var->e02 + 3457347*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*pms->sx))*var->vom6)/3932160;
	return PN4;
}

REAL8 spart_EPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/983040*(pms->cos0Thp1Phi*var->e02*pms->sinp1Th0Phi*((var->e04*(7630950 - 44892210*pms->eta) + var->e06*(12804993 - 3074835*pms->eta) - 3840*(4159 + 20035*pms->eta) + 640*var->e02*(36367 + 122435*pms->eta))*pms->sigx + pms->dm*(36099840 - 33107840*var->e02 + 24480390*var->e04 + 5291703*var->e06)*pms->sx + pms->cosp2Th0Phi*(-((2607360 - 2072960*var->e02 + 1844490*var->e04 + 599223*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e02*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((var->e04*(7630950 - 44892210*pms->eta) + var->e06*(12804993 - 3074835*pms->eta) - 3840*(4159 + 20035*pms->eta) + 640*var->e02*(36367 + 122435*pms->eta))*pms->sigx + pms->dm*(36099840 - 33107840*var->e02 + 24480390*var->e04 + 5291703*var->e06)*pms->sx + pms->cosp2Th0Phi*(-((2607360 - 2072960*var->e02 + 1844490*var->e04 + 599223*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*pms->sx))*var->vom6)/983040;
	return PN4;
}

REAL8 spart_EPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*pms->sinp1Th0PhiTO3*(-((1982464 - 10174464*var->e02 + 13668096*var->e04 - 7407104*var->e06 + 1929477*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(16384 - 98304*var->e02 + 151296*var->e04 - 89344*var->e06 + 23997*var->e08)*pms->sx)*var->vom6)/786432;
	return PN4;
}

REAL8 cpart_EPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/786432*(pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((1982464 - 10174464*var->e02 + 13668096*var->e04 - 7407104*var->e06 + 1929477*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(16384 - 98304*var->e02 + 151296*var->e04 - 89344*var->e06 + 23997*var->e08)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/30240*(pms->cos0Thp3Phi*var->e07*pms->sinp1Th0PhiTO3*(-4*(1128 + 365*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(684 + 145*var->e02)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/30240*(var->e07*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-4*(1128 + 365*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(684 + 145*var->e02)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e05*pms->sinp1Th0Phi*((var->e04*(34028033 - 20014515*pms->eta) - 756*(-96647 + 17509*pms->eta) - 210*var->e02*(-1523 + 98793*pms->eta))*pms->sigx + 112*pms->dm*(230748 + 99622*var->e02 + 173489*var->e04)*pms->sx + pms->cosp2Th0Phi*(-7*(420588 + 121206*var->e02 + 274993*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*pms->sx))*var->vom6)/1935360;
	return PN4;
}

REAL8 cpart_EPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((var->e04*(34028033 - 20014515*pms->eta) - 756*(-96647 + 17509*pms->eta) - 210*var->e02*(-1523 + 98793*pms->eta))*pms->sigx + 112*pms->dm*(230748 + 99622*var->e02 + 173489*var->e04)*pms->sx + pms->cosp2Th0Phi*(-7*(420588 + 121206*var->e02 + 274993*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*pms->sx))*var->vom6)/1935360;
	return PN4;
}

REAL8 spart_EPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/829440*(pms->cos0Thp1Phi*var->e03*pms->sinp1Th0Phi*((-1242*var->e04*(847 + 88899*pms->eta) - 1440*(18859 + 90927*pms->eta) + 540*var->e02*(74009 + 327813*pms->eta) + var->e06*(13139789 + 20346921*pms->eta))*pms->sigx - 144*pms->dm*(-421920 + 543980*var->e02 - 379310*var->e04 + 42709*var->e06)*pms->sx + pms->cosp2Th0Phi*((-4243680 + 5046300*var->e02 - 3798198*var->e04 + 175829*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e03*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((-1242*var->e04*(847 + 88899*pms->eta) - 1440*(18859 + 90927*pms->eta) + 540*var->e02*(74009 + 327813*pms->eta) + var->e06*(13139789 + 20346921*pms->eta))*pms->sigx - 144*pms->dm*(-421920 + 543980*var->e02 - 379310*var->e04 + 42709*var->e06)*pms->sx + pms->cosp2Th0Phi*((-4243680 + 5046300*var->e02 - 3798198*var->e04 + 175829*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*pms->sx))*var->vom6)/829440;
	return PN4;
}

REAL8 spart_EPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*var->e0*pms->sinp1Th0PhiTO3*(-((1287936 - 5435136*var->e02 + 7559904*var->e04 - 4828960*var->e06 + 1663831*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 384*pms->dm*(2304 - 10944*var->e02 + 16896*var->e04 - 11620*var->e06 + 4165*var->e08)*pms->sx)*var->vom6)/110592;
	return PN4;
}

REAL8 cpart_EPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/110592*(var->e0*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((1287936 - 5435136*var->e02 + 7559904*var->e04 - 4828960*var->e06 + 1663831*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 384*pms->dm*(2304 - 10944*var->e02 + 16896*var->e04 - 11620*var->e06 + 4165*var->e08)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-3125*pms->cos0Thp3Phi*var->e08*pms->sinp1Th0PhiTO3*(-6641*(-1 + 3*pms->eta)*pms->sigx + 3081*pms->dm*pms->sx)*var->vom6)/99090432;
	return PN4;
}

REAL8 cpart_EPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-3125*var->e08*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-6641*(-1 + 3*pms->eta)*pms->sigx + 3081*pms->dm*pms->sx)*var->vom6)/99090432;
	return PN4;
}

REAL8 spart_EPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/12386304*(pms->cos0Thp1Phi*var->e06*pms->sinp1Th0Phi*((-685803286 + 98094402*pms->eta + 3*var->e02*(61893997 + 51791721*pms->eta))*pms->sigx - pms->dm*(228435606 + 35319839*var->e02)*pms->sx + 5*pms->cosp2Th0Phi*((5301394 + 39411*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 625*pms->dm*(-434 + 299*var->e02)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/12386304*(var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((-685803286 + 98094402*pms->eta + 3*var->e02*(61893997 + 51791721*pms->eta))*pms->sigx - pms->dm*(228435606 + 35319839*var->e02)*pms->sx + 5*pms->cosp2Th0Phi*((5301394 + 39411*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 625*pms->dm*(-434 + 299*var->e02)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e04*pms->sinp1Th0Phi*(3*(6720*(20857 + 102453*pms->eta) - 128*var->e02*(1749763 + 8896059*pms->eta) + var->e04*(63359809 + 827420637*pms->eta))*pms->sigx + pms->dm*(-952898880 + 1537963968*var->e02 - 1181992333*var->e04)*pms->sx + 5*pms->cosp2Th0Phi*(3*(4342080 - 6646144*var->e02 + 5274789*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 625*pms->dm*(3648 - 7872*var->e02 + 6097*var->e04)*pms->sx))*var->vom6)/7077888;
	return PN4;
}

REAL8 cpart_EPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/7077888*(var->e04*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(3*(6720*(20857 + 102453*pms->eta) - 128*var->e02*(1749763 + 8896059*pms->eta) + var->e04*(63359809 + 827420637*pms->eta))*pms->sigx + pms->dm*(-952898880 + 1537963968*var->e02 - 1181992333*var->e04)*pms->sx + 5*pms->cosp2Th0Phi*(3*(4342080 - 6646144*var->e02 + 5274789*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 625*pms->dm*(3648 - 7872*var->e02 + 6097*var->e04)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-25*pms->cos0Thp3Phi*var->e02*pms->sinp1Th0PhiTO3*(-((-1232640 + 5037696*var->e02 - 7485150*var->e04 + 5516755*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 375*pms->dm*(-2304 + 10368*var->e02 - 16770*var->e04 + 13171*var->e06)*pms->sx)*var->vom6)/884736;
	return PN4;
}

REAL8 cpart_EPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(25*var->e02*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-1232640 + 5037696*var->e02 - 7485150*var->e04 + 5516755*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 375*pms->dm*(-2304 + 10368*var->e02 - 16770*var->e04 + 13171*var->e06)*pms->sx)*var->vom6)/884736;
	return PN4;
}

REAL8 spart_EPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-243*pms->cos0Thp3Phi*var->e09*pms->sinp1Th0PhiTO3*(17*(1 - 3*pms->eta)*pms->sigx + 8*pms->dm*pms->sx)*var->vom6)/14336;
	return PN4;
}

REAL8 cpart_EPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-243*var->e09*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(17*(1 - 3*pms->eta)*pms->sigx + 8*pms->dm*pms->sx)*var->vom6)/14336;
	return PN4;
}

REAL8 spart_EPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/430080*(pms->cos0Thp1Phi*var->e07*pms->sinp1Th0Phi*((-34530218 + 3934814*pms->eta + 243*var->e02*(76691 + 26679*pms->eta))*pms->sigx + 8*pms->dm*(-1369840 + 164511*var->e02)*pms->sx + pms->cosp2Th0Phi*(-((-1291334 + 347247*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 5832*pms->dm*(-12 + 11*var->e02)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/430080*(var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((-34530218 + 3934814*pms->eta + 243*var->e02*(76691 + 26679*pms->eta))*pms->sigx + 8*pms->dm*(-1369840 + 164511*var->e02)*pms->sx + pms->cosp2Th0Phi*(-((-1291334 + 347247*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 5832*pms->dm*(-12 + 11*var->e02)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e05*pms->sinp1Th0Phi*(7*(48*(259507 + 1306711*pms->eta) - 20*var->e02*(1103477 + 6083953*pms->eta) + 9*var->e04*(1187591 + 11435675*pms->eta))*pms->sigx - 16*pms->dm*(12619824 - 24163664*var->e02 + 21107367*var->e04)*pms->sx + pms->cosp2Th0Phi*((13594224 - 25071452*var->e02 + 22194369*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 46656*pms->dm*(56 - 133*var->e02 + 121*var->e04)*pms->sx))*var->vom6)/860160;
	return PN4;
}

REAL8 cpart_EPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/860160*(var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(7*(48*(259507 + 1306711*pms->eta) - 20*var->e02*(1103477 + 6083953*pms->eta) + 9*var->e04*(1187591 + 11435675*pms->eta))*pms->sigx - 16*pms->dm*(12619824 - 24163664*var->e02 + 21107367*var->e04)*pms->sx + pms->cosp2Th0Phi*((13594224 - 25071452*var->e02 + 22194369*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 46656*pms->dm*(56 - 133*var->e02 + 121*var->e04)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/61440*(pms->cos0Thp3Phi*var->e03*pms->sinp1Th0PhiTO3*(-((-5238080 + 21726960*var->e02 - 34718448*var->e04 + 28963445*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(-80 + 360*var->e02 - 618*var->e04 + 545*var->e06)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e03*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-5238080 + 21726960*var->e02 - 34718448*var->e04 + 28963445*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(-80 + 360*var->e02 - 618*var->e04 + 545*var->e06)*pms->sx)*var->vom6)/61440;
	return PN4;
}

REAL8 spart_EPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e08*pms->sinp1Th0Phi*(3*(5448077611 - 495070305*pms->eta)*pms->sigx + 4983117593*pms->dm*pms->sx + 7*pms->cosp2Th0Phi*(-84995649*(-1 + 3*pms->eta)*pms->sigx + 4823609*pms->dm*pms->sx))*var->vom6)/141557760;
	return PN4;
}

REAL8 cpart_EPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(3*(5448077611 - 495070305*pms->eta)*pms->sigx + 4983117593*pms->dm*pms->sx + 7*pms->cosp2Th0Phi*(-84995649*(-1 + 3*pms->eta)*pms->sigx + 4823609*pms->dm*pms->sx))*var->vom6)/141557760;
	return PN4;
}

REAL8 spart_EPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/8847360*(pms->cos0Thp1Phi*var->e06*pms->sinp1Th0Phi*(-14*(105000707 + 543048759*pms->eta)*pms->sigx + 3*var->e02*(965239627 + 5617807215*pms->eta)*pms->sigx + pms->dm*(3490227174 - 7684373561*var->e02)*pms->sx + 7*pms->cosp2Th0Phi*((-33198358 + 71086671*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 117649*pms->dm*(-58 + 151*var->e02)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-14*(105000707 + 543048759*pms->eta)*pms->sigx + 3*var->e02*(965239627 + 5617807215*pms->eta)*pms->sigx + pms->dm*(3490227174 - 7684373561*var->e02)*pms->sx + 7*pms->cosp2Th0Phi*((-33198358 + 71086671*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 117649*pms->dm*(-58 + 151*var->e02)*pms->sx))*var->vom6)/8847360;
	return PN4;
}

REAL8 spart_EPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(7*pms->cos0Thp3Phi*var->e04*pms->sinp1Th0PhiTO3*(-((468966720 - 2010052992*var->e02 + 3452762117*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 352947*pms->dm*(960 - 4416*var->e02 + 8071*var->e04)*pms->sx)*var->vom6)/17694720;
	return PN4;
}

REAL8 cpart_EPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-7*var->e04*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((468966720 - 2010052992*var->e02 + 3452762117*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 352947*pms->dm*(960 - 4416*var->e02 + 8071*var->e04)*pms->sx)*var->vom6)/17694720;
	return PN4;
}

REAL8 spart_EPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e09*pms->sinp1Th0Phi*(7*(1642132769 - 118234899*pms->eta)*pms->sigx + 3387359184*pms->dm*pms->sx + pms->cosp2Th0Phi*(-409099393*(-1 + 3*pms->eta)*pms->sigx + 24117248*pms->dm*pms->sx))*var->vom6)/69672960;
	return PN4;
}

REAL8 cpart_EPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(7*(1642132769 - 118234899*pms->eta)*pms->sigx + 3387359184*pms->dm*pms->sx + pms->cosp2Th0Phi*(-409099393*(-1 + 3*pms->eta)*pms->sigx + 24117248*pms->dm*pms->sx))*var->vom6)/69672960;
	return PN4;
}

REAL8 spart_EPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/7741440*(pms->cos0Thp1Phi*var->e07*pms->sinp1Th0Phi*(-48*(42694189 + 226858185*pms->eta)*pms->sigx + var->e02*(4471750991 + 27088688835*pms->eta)*pms->sigx - 16*pms->dm*(-312140368 + 774078283*var->e02)*pms->sx + pms->cosp2Th0Phi*((-329724912 + 800407847*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 1048576*pms->dm*(-68 + 193*var->e02)*pms->sx))*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-48*(42694189 + 226858185*pms->eta)*pms->sigx + var->e02*(4471750991 + 27088688835*pms->eta)*pms->sigx - 16*pms->dm*(-312140368 + 774078283*var->e02)*pms->sx + pms->cosp2Th0Phi*((-329724912 + 800407847*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 1048576*pms->dm*(-68 + 193*var->e02)*pms->sx))*var->vom6)/7741440;
	return PN4;
}

REAL8 spart_EPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*var->e05*pms->sinp1Th0PhiTO3*(-((180700716 - 806430996*var->e02 + 1484951219*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 1572864*pms->dm*(84 - 399*var->e02 + 776*var->e04)*pms->sx)*var->vom6)/483840;
	return PN4;
}

REAL8 cpart_EPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/483840*(var->e05*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((180700716 - 806430996*var->e02 + 1484951219*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 1572864*pms->dm*(84 - 399*var->e02 + 776*var->e04)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 spart_EPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(3*pms->cos0Thp1Phi*var->e08*pms->sinp1Th0Phi*((5052175553 + 27568005149*pms->eta)*pms->sigx - 12638188999*pms->dm*pms->sx + pms->cosp2Th0Phi*(828848249*(-1 + 3*pms->eta)*pms->sigx + 186535791*pms->dm*pms->sx))*var->vom6)/36700160;
	return PN4;
}

REAL8 cpart_EPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-3*var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((5052175553 + 27568005149*pms->eta)*pms->sigx - 12638188999*pms->dm*pms->sx + pms->cosp2Th0Phi*(828848249*(-1 + 3*pms->eta)*pms->sigx + 186535791*pms->dm*pms->sx))*var->vom6)/36700160;
	return PN4;
}

REAL8 spart_EPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1146880*(pms->cos0Thp3Phi*var->e06*pms->sinp1Th0PhiTO3*(-((-815706094 + 3802238259*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 43046721*pms->dm*(-14 + 69*var->e02)*pms->sx)*var->vom6);
	return PN4;
}

REAL8 cpart_EPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e06*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-815706094 + 3802238259*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 43046721*pms->dm*(-14 + 69*var->e02)*pms->sx)*var->vom6)/1146880;
	return PN4;
}

REAL8 spart_EPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(5*pms->cos0Thp1Phi*var->e09*pms->sinp1Th0Phi*((1766670431 + 9892033299*pms->eta)*pms->sigx - 4534287744*pms->dm*pms->sx + 5*pms->cosp2Th0Phi*(59156587*(-1 + 3*pms->eta)*pms->sigx + 13750000*pms->dm*pms->sx))*var->vom6)/13934592;
	return PN4;
}

REAL8 cpart_EPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-5*var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((1766670431 + 9892033299*pms->eta)*pms->sigx - 4534287744*pms->dm*pms->sx + 5*pms->cosp2Th0Phi*(59156587*(-1 + 3*pms->eta)*pms->sigx + 13750000*pms->dm*pms->sx))*var->vom6)/13934592;
	return PN4;
}

REAL8 spart_EPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-25*pms->cos0Thp3Phi*var->e07*pms->sinp1Th0PhiTO3*(-((-40232480 + 196065449*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3750000*pms->dm*(-8 + 41*var->e02)*pms->sx)*var->vom6)/774144;
	return PN4;
}

REAL8 cpart_EPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(25*var->e07*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-40232480 + 196065449*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3750000*pms->dm*(-8 + 41*var->e02)*pms->sx)*var->vom6)/774144;
	return PN4;
}

REAL8 spart_EPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(11*pms->cos0Thp3Phi*var->e08*pms->sinp1Th0PhiTO3*(-103492859363*(-1 + 3*pms->eta)*pms->sigx + 77812273803*pms->dm*pms->sx)*var->vom6)/495452160;
	return PN4;
}

REAL8 cpart_EPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-11*var->e08*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-103492859363*(-1 + 3*pms->eta)*pms->sigx + 77812273803*pms->dm*pms->sx)*var->vom6)/495452160;
	return PN4;
}

REAL8 spart_EPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*var->e09*pms->sinp1Th0PhiTO3*(-1702882603*(-1 + 3*pms->eta)*pms->sigx + 1289945088*pms->dm*pms->sx)*var->vom6)/430080;
	return PN4;
}

REAL8 cpart_EPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/430080*(var->e09*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-1702882603*(-1 + 3*pms->eta)*pms->sigx + 1289945088*pms->dm*pms->sx)*var->vom6);
	return PN4;
}
