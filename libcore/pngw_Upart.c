/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#include "pngw_Upart.h"

INT spart_UFunc_lkList[81][2]={{1,-4},{1,-3},{1,-2},{1,-1},{1,0},{1,1},{1,2},{1,3},{1,4},{2,-4},
	{2,-3},{2,-2},{2,-1},{2,0},{2,1},{2,2},{2,3},{2,4},{3,-4},{3,-3},
	{3,-2},{3,-1},{3,0},{3,1},{3,2},{3,3},{3,4},{4,-4},{4,-3},{4,-2},
	{4,-1},{4,0},{4,1},{4,2},{4,3},{4,4},{5,-4},{5,-3},{5,-2},{5,-1},
	{5,0},{5,1},{5,2},{5,3},{5,4},{6,-3},{6,-2},{6,-1},{6,0},{6,1},
	{6,2},{6,3},{6,4},{7,-2},{7,-1},{7,0},{7,1},{7,2},{7,3},{7,4},
	{8,-1},{8,0},{8,1},{8,2},{8,3},{8,4},{9,0},{9,1},{9,2},{9,3},
	{9,4},{10,1},{10,2},{10,3},{10,4},{11,2},{11,3},{11,4},{12,3},{12,4},
	{13,4}};

REAL8 (*spart_UFunc_fList[81])(BBHDynVariables*, BBHDynParams*)={
	spart_UPartsl1_km4,
	spart_UPartsl1_km3,
	spart_UPartsl1_km2,
	spart_UPartsl1_km1,
	spart_UPartsl1_k0,
	spart_UPartsl1_k1,
	spart_UPartsl1_k2,
	spart_UPartsl1_k3,
	spart_UPartsl1_k4,
	spart_UPartsl2_km4,
	spart_UPartsl2_km3,
	spart_UPartsl2_km2,
	spart_UPartsl2_km1,
	spart_UPartsl2_k0,
	spart_UPartsl2_k1,
	spart_UPartsl2_k2,
	spart_UPartsl2_k3,
	spart_UPartsl2_k4,
	spart_UPartsl3_km4,
	spart_UPartsl3_km3,
	spart_UPartsl3_km2,
	spart_UPartsl3_km1,
	spart_UPartsl3_k0,
	spart_UPartsl3_k1,
	spart_UPartsl3_k2,
	spart_UPartsl3_k3,
	spart_UPartsl3_k4,
	spart_UPartsl4_km4,
	spart_UPartsl4_km3,
	spart_UPartsl4_km2,
	spart_UPartsl4_km1,
	spart_UPartsl4_k0,
	spart_UPartsl4_k1,
	spart_UPartsl4_k2,
	spart_UPartsl4_k3,
	spart_UPartsl4_k4,
	spart_UPartsl5_km4,
	spart_UPartsl5_km3,
	spart_UPartsl5_km2,
	spart_UPartsl5_km1,
	spart_UPartsl5_k0,
	spart_UPartsl5_k1,
	spart_UPartsl5_k2,
	spart_UPartsl5_k3,
	spart_UPartsl5_k4,
	spart_UPartsl6_km3,
	spart_UPartsl6_km2,
	spart_UPartsl6_km1,
	spart_UPartsl6_k0,
	spart_UPartsl6_k1,
	spart_UPartsl6_k2,
	spart_UPartsl6_k3,
	spart_UPartsl6_k4,
	spart_UPartsl7_km2,
	spart_UPartsl7_km1,
	spart_UPartsl7_k0,
	spart_UPartsl7_k1,
	spart_UPartsl7_k2,
	spart_UPartsl7_k3,
	spart_UPartsl7_k4,
	spart_UPartsl8_km1,
	spart_UPartsl8_k0,
	spart_UPartsl8_k1,
	spart_UPartsl8_k2,
	spart_UPartsl8_k3,
	spart_UPartsl8_k4,
	spart_UPartsl9_k0,
	spart_UPartsl9_k1,
	spart_UPartsl9_k2,
	spart_UPartsl9_k3,
	spart_UPartsl9_k4,
	spart_UPartsl10_k1,
	spart_UPartsl10_k2,
	spart_UPartsl10_k3,
	spart_UPartsl10_k4,
	spart_UPartsl11_k2,
	spart_UPartsl11_k3,
	spart_UPartsl11_k4,
	spart_UPartsl12_k3,
	spart_UPartsl12_k4,
	spart_UPartsl13_k4
};

INT cpart_UFunc_lkList[81][2]={{1,-4},{1,-3},{1,-2},{1,-1},{1,0},{1,1},{1,2},{1,3},{1,4},{2,-4},
	{2,-3},{2,-2},{2,-1},{2,0},{2,1},{2,2},{2,3},{2,4},{3,-4},{3,-3},
	{3,-2},{3,-1},{3,0},{3,1},{3,2},{3,3},{3,4},{4,-4},{4,-3},{4,-2},
	{4,-1},{4,0},{4,1},{4,2},{4,3},{4,4},{5,-4},{5,-3},{5,-2},{5,-1},
	{5,0},{5,1},{5,2},{5,3},{5,4},{6,-3},{6,-2},{6,-1},{6,0},{6,1},
	{6,2},{6,3},{6,4},{7,-2},{7,-1},{7,0},{7,1},{7,2},{7,3},{7,4},
	{8,-1},{8,0},{8,1},{8,2},{8,3},{8,4},{9,0},{9,1},{9,2},{9,3},
	{9,4},{10,1},{10,2},{10,3},{10,4},{11,2},{11,3},{11,4},{12,3},{12,4},
	{13,4}};
REAL8 (*cpart_UFunc_fList[81])(BBHDynVariables*, BBHDynParams*)={
	cpart_UPartsl1_km4,
	cpart_UPartsl1_km3,
	cpart_UPartsl1_km2,
	cpart_UPartsl1_km1,
	cpart_UPartsl1_k0,
	cpart_UPartsl1_k1,
	cpart_UPartsl1_k2,
	cpart_UPartsl1_k3,
	cpart_UPartsl1_k4,
	cpart_UPartsl2_km4,
	cpart_UPartsl2_km3,
	cpart_UPartsl2_km2,
	cpart_UPartsl2_km1,
	cpart_UPartsl2_k0,
	cpart_UPartsl2_k1,
	cpart_UPartsl2_k2,
	cpart_UPartsl2_k3,
	cpart_UPartsl2_k4,
	cpart_UPartsl3_km4,
	cpart_UPartsl3_km3,
	cpart_UPartsl3_km2,
	cpart_UPartsl3_km1,
	cpart_UPartsl3_k0,
	cpart_UPartsl3_k1,
	cpart_UPartsl3_k2,
	cpart_UPartsl3_k3,
	cpart_UPartsl3_k4,
	cpart_UPartsl4_km4,
	cpart_UPartsl4_km3,
	cpart_UPartsl4_km2,
	cpart_UPartsl4_km1,
	cpart_UPartsl4_k0,
	cpart_UPartsl4_k1,
	cpart_UPartsl4_k2,
	cpart_UPartsl4_k3,
	cpart_UPartsl4_k4,
	cpart_UPartsl5_km4,
	cpart_UPartsl5_km3,
	cpart_UPartsl5_km2,
	cpart_UPartsl5_km1,
	cpart_UPartsl5_k0,
	cpart_UPartsl5_k1,
	cpart_UPartsl5_k2,
	cpart_UPartsl5_k3,
	cpart_UPartsl5_k4,
	cpart_UPartsl6_km3,
	cpart_UPartsl6_km2,
	cpart_UPartsl6_km1,
	cpart_UPartsl6_k0,
	cpart_UPartsl6_k1,
	cpart_UPartsl6_k2,
	cpart_UPartsl6_k3,
	cpart_UPartsl6_k4,
	cpart_UPartsl7_km2,
	cpart_UPartsl7_km1,
	cpart_UPartsl7_k0,
	cpart_UPartsl7_k1,
	cpart_UPartsl7_k2,
	cpart_UPartsl7_k3,
	cpart_UPartsl7_k4,
	cpart_UPartsl8_km1,
	cpart_UPartsl8_k0,
	cpart_UPartsl8_k1,
	cpart_UPartsl8_k2,
	cpart_UPartsl8_k3,
	cpart_UPartsl8_k4,
	cpart_UPartsl9_k0,
	cpart_UPartsl9_k1,
	cpart_UPartsl9_k2,
	cpart_UPartsl9_k3,
	cpart_UPartsl9_k4,
	cpart_UPartsl10_k1,
	cpart_UPartsl10_k2,
	cpart_UPartsl10_k3,
	cpart_UPartsl10_k4,
	cpart_UPartsl11_k2,
	cpart_UPartsl11_k3,
	cpart_UPartsl11_k4,
	cpart_UPartsl12_k3,
	cpart_UPartsl12_k4,
	cpart_UPartsl13_k4
};

REAL8 spart_UPartsl1_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/4954521600*(pms->cos0Thp4Phi*(-25386816 - 2629592*var->e02 + 401379*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl1_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/4954521600*(pms->cos0Thp4Phi*(-25386816 - 2629592*var->e02 + 401379*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((129600 + 132096*var->e02 + 107089*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(72000 + 34368*var->e02 + 20117*var->e04)*pms->sx)*var->vom6)/35389440;
	REAL8 PN3=(pms->dm*var->e04*(-1187520 - 167712*var->e02 + 9569*var->e04)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/35389440;
	return PN4+PN3;
}

REAL8 cpart_UPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((129600 + 132096*var->e02 + 107089*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(72000 + 34368*var->e02 + 20117*var->e04)*pms->sx)*var->vom6)/35389440;
	REAL8 PN3=(pms->dm*var->e04*(-1187520 - 167712*var->e02 + 9569*var->e04)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/35389440;
	return PN4+PN3;
}

REAL8 spart_UPartsl1_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3185049600*(pms->cos0Thp2Phi*var->e03*(var->e06*(-30359479653 + 97397625415*pms->eta - 15703386855*pms->eta2) + 3*pms->cosp2Th0Phi*(322145280 + 395058240*var->e02 + 472103352*var->e04 + 538582529*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 46080*(220527 - 724025*pms->eta + 167025*pms->eta2) - 2880*var->e02*(6524241 - 21090035*pms->eta + 3766755*pms->eta2) - 72*var->e04*(349136007 - 1123186825*pms->eta + 188460465*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/4423680*(pms->cos0Thp2Phi*var->e03*(322560 + 135360*var->e02 + 78552*var->e04 + 51575*var->e06)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*var->e03*(4654080 + 947520*var->e02 + 343944*var->e04 + 120865*var->e06)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/26542080;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl1_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3185049600*(pms->cos0Thp2Phi*var->e03*(var->e06*(-30359479653 + 97397625415*pms->eta - 15703386855*pms->eta2) + 3*pms->cosp2Th0Phi*(322145280 + 395058240*var->e02 + 472103352*var->e04 + 538582529*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 46080*(220527 - 724025*pms->eta + 167025*pms->eta2) - 2880*var->e02*(6524241 - 21090035*pms->eta + 3766755*pms->eta2) - 72*var->e04*(349136007 - 1123186825*pms->eta + 188460465*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/4423680*(pms->cos0Thp2Phi*var->e03*(322560 + 135360*var->e02 + 78552*var->e04 + 51575*var->e06)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*var->e03*(4654080 + 947520*var->e02 + 343944*var->e04 + 120865*var->e06)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/26542080;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/17694720*(var->e02*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((11520*(-1283 + 1897*pms->eta) + 1920*var->e02*(-10681 + 15803*pms->eta) + 90*var->e04*(-279427 + 100585*pms->eta) - var->e06*(27708113 + 19243229*pms->eta))*pms->sigx - 5*pms->dm*(9333504 + 10856064*var->e02 + 9490374*var->e04 + 6846743*var->e06)*pms->sx + pms->cosp2Th0Phi*((4481280 + 5496960*var->e02 + 6605250*var->e04 + 7534007*var->e06)*(-1 + 3*pms->eta)*pms->sigx + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e02*(var->e06*(4796131 - 514390*pms->eta) + pms->cosp2Th0Phi*(823680 + 541440*var->e02 + 535335*var->e04 + 532867*var->e06)*(-1 + 2*pms->eta) + 5760*(-521 + 82*pms->eta) - 1280*var->e02*(-379 + 126*pms->eta) - 75*var->e04*(-35469 + 4570*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/2949120;
	REAL8 PN2=-1.0/46080*(var->e02*(5760 + 1920*var->e02 + 1125*var->e04 + 734*var->e06)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/184320*(pms->dm*var->e02*(126720 + 24960*var->e02 + 16470*var->e04 + 10649*var->e06)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/17694720*(var->e02*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((11520*(-1283 + 1897*pms->eta) + 1920*var->e02*(-10681 + 15803*pms->eta) + 90*var->e04*(-279427 + 100585*pms->eta) - var->e06*(27708113 + 19243229*pms->eta))*pms->sigx - 5*pms->dm*(9333504 + 10856064*var->e02 + 9490374*var->e04 + 6846743*var->e06)*pms->sx + pms->cosp2Th0Phi*((4481280 + 5496960*var->e02 + 6605250*var->e04 + 7534007*var->e06)*(-1 + 3*pms->eta)*pms->sigx + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e02*(var->e06*(4796131 - 514390*pms->eta) + pms->cosp2Th0Phi*(823680 + 541440*var->e02 + 535335*var->e04 + 532867*var->e06)*(-1 + 2*pms->eta) + 5760*(-521 + 82*pms->eta) - 1280*var->e02*(-379 + 126*pms->eta) - 75*var->e04*(-35469 + 4570*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/2949120;
	REAL8 PN2=-1.0/46080*(var->e02*(5760 + 1920*var->e02 + 1125*var->e04 + 734*var->e06)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/184320*(pms->dm*var->e02*(126720 + 24960*var->e02 + 16470*var->e04 + 10649*var->e06)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl1_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*(4*pms->cosp2Th0Phi*(737280*(-2901 + 9125*pms->eta + 75*pms->eta2) + 92160*var->e02*(-61317 + 164365*pms->eta + 126195*pms->eta2) + 3840*var->e04*(-2443761 + 7220465*pms->eta + 1980255*pms->eta2) + 80*var->e06*(-145085001 + 430664545*pms->eta + 108074175*pms->eta2) + var->e08*(-13626753741 + 40639221245*pms->eta + 9212936115*pms->eta2)) + 3*(-3*pms->cosp4Th0Phi*(5160960 + 103127040*var->e02 + 101786880*var->e04 + 111886960*var->e06 + 120996687*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) + 737280*(-11087 + 9915*pms->eta + 5*pms->eta2 - 34560*pms->sigx2 + 19200*pms->kappa1*pms->sigx2 - 19200*pms->dm*pms->kappa1*pms->sigx2 + 19200*pms->kappa2*pms->sigx2 + 19200*pms->dm*pms->kappa2*pms->sigx2 - 7680*pms->eta*(-8 + 5*pms->kappa1 + 5*pms->kappa2)*pms->sigx2 + 7680*(-8*pms->dm + 5*(-1 + pms->dm)*pms->kappa1 + 5*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-8 + 5*pms->kappa1 + 5*pms->kappa2)*pms->sx2) + 92160*var->e02*(187641 + 100685*pms->eta2 - 3840*(81 + 53*(-1 + pms->dm)*pms->kappa1 - 53*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(364201 + 1536*(-56 + 53*pms->kappa1 + 53*pms->kappa2)*pms->sigx2) + 7680*(-56*pms->dm + 53*(-1 + pms->dm)*pms->kappa1 + 53*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-56 + 53*pms->kappa1 + 53*pms->kappa2)*pms->sx2) + 3840*var->e04*(14067213 + 3066705*pms->eta2 - 9020160*pms->sigx2 + 6301440*pms->kappa1*pms->sigx2 - 6301440*pms->dm*pms->kappa1*pms->sigx2 + 6301440*pms->kappa2*pms->sigx2 + 6301440*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(12032669 + 4608*(-472 + 547*pms->kappa1 + 547*pms->kappa2)*pms->sigx2) + 23040*(-472*pms->dm + 547*(-1 + pms->dm)*pms->kappa1 + 547*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-472 + 547*pms->kappa1 + 547*pms->kappa2)*pms->sx2) + 80*var->e06*(1370559293 + 190773025*pms->eta2 - 494519040*pms->sigx2 + 364404480*pms->kappa1*pms->sigx2 - 364404480*pms->dm*pms->kappa1*pms->sigx2 + 364404480*pms->kappa2*pms->sigx2 + 364404480*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(255507535 + 512*(-67768 + 94897*pms->kappa1 + 94897*pms->kappa2)*pms->sigx2) + 7680*(-67768*pms->dm + 94897*(-1 + pms->dm)*pms->kappa1 + 94897*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-67768 + 94897*pms->kappa1 + 94897*pms->kappa2)*pms->sx2) + var->e08*(173236993833 + 18043455325*pms->eta2 - 43950677760*pms->sigx2 + 33838621440*pms->kappa1*pms->sigx2 - 33838621440*pms->dm*pms->kappa1*pms->sigx2 + 33838621440*pms->kappa2*pms->sigx2 + 33838621440*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(75492721337 + 1536*(-5266696 + 8812141*pms->kappa1 + 8812141*pms->kappa2)*pms->sigx2) + 7680*(-5266696*pms->dm + 8812141*(-1 + pms->dm)*pms->kappa1 + 8812141*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-5266696 + 8812141*pms->kappa1 + 8812141*pms->kappa2)*pms->sx2)))*var->vom6)/16986931200;
	REAL8 PN3=-1.0/2211840*(var->e0*(-(pms->dm*(5160960 + 2119680*var->e02 + 1962240*var->e04 + 1553200*var->e06 + 1201207*var->e08)*pms->sigx) + 3*(-3686400 - 829440*var->e02 - 633600*var->e04 - 207440*var->e06 + 156987*var->e08)*pms->sx)*var->vom5);
	REAL8 PN2=(var->e0*(var->e08*(16287159 - 10286597*pms->eta) + pms->cosp2Th0Phi*(-737280 + 92160*var->e02 + 549120*var->e04 + 426320*var->e06 + 381023*var->e08)*(-1 + 3*pms->eta) - 737280*(9 + 5*pms->eta) - 92160*var->e02*(-177 + 259*pms->eta) - 3840*var->e04*(-2871 + 3365*pms->eta) - 80*var->e06*(-180945 + 144643*pms->eta))*var->vom4)/17694720;
	REAL8 PN0=(var->e0*(737280 - 92160*var->e02 + 3840*var->e04 - 80*var->e06 + var->e08)*var->vom2)/737280;
	return PN4+PN3+PN2+PN0;
}

REAL8 cpart_UPartsl1_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*(4*pms->cosp2Th0Phi*(737280*(-2901 + 9125*pms->eta + 75*pms->eta2) + 92160*var->e02*(-61317 + 164365*pms->eta + 126195*pms->eta2) + 3840*var->e04*(-2443761 + 7220465*pms->eta + 1980255*pms->eta2) + 80*var->e06*(-145085001 + 430664545*pms->eta + 108074175*pms->eta2) + var->e08*(-13626753741 + 40639221245*pms->eta + 9212936115*pms->eta2)) + 3*(-3*pms->cosp4Th0Phi*(5160960 + 103127040*var->e02 + 101786880*var->e04 + 111886960*var->e06 + 120996687*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) + 737280*(-11087 + 9915*pms->eta + 5*pms->eta2 - 34560*pms->sigx2 + 19200*pms->kappa1*pms->sigx2 - 19200*pms->dm*pms->kappa1*pms->sigx2 + 19200*pms->kappa2*pms->sigx2 + 19200*pms->dm*pms->kappa2*pms->sigx2 - 7680*pms->eta*(-8 + 5*pms->kappa1 + 5*pms->kappa2)*pms->sigx2 + 7680*(-8*pms->dm + 5*(-1 + pms->dm)*pms->kappa1 + 5*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-8 + 5*pms->kappa1 + 5*pms->kappa2)*pms->sx2) + 92160*var->e02*(187641 + 100685*pms->eta2 - 3840*(81 + 53*(-1 + pms->dm)*pms->kappa1 - 53*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(364201 + 1536*(-56 + 53*pms->kappa1 + 53*pms->kappa2)*pms->sigx2) + 7680*(-56*pms->dm + 53*(-1 + pms->dm)*pms->kappa1 + 53*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-56 + 53*pms->kappa1 + 53*pms->kappa2)*pms->sx2) + 3840*var->e04*(14067213 + 3066705*pms->eta2 - 9020160*pms->sigx2 + 6301440*pms->kappa1*pms->sigx2 - 6301440*pms->dm*pms->kappa1*pms->sigx2 + 6301440*pms->kappa2*pms->sigx2 + 6301440*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(12032669 + 4608*(-472 + 547*pms->kappa1 + 547*pms->kappa2)*pms->sigx2) + 23040*(-472*pms->dm + 547*(-1 + pms->dm)*pms->kappa1 + 547*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-472 + 547*pms->kappa1 + 547*pms->kappa2)*pms->sx2) + 80*var->e06*(1370559293 + 190773025*pms->eta2 - 494519040*pms->sigx2 + 364404480*pms->kappa1*pms->sigx2 - 364404480*pms->dm*pms->kappa1*pms->sigx2 + 364404480*pms->kappa2*pms->sigx2 + 364404480*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(255507535 + 512*(-67768 + 94897*pms->kappa1 + 94897*pms->kappa2)*pms->sigx2) + 7680*(-67768*pms->dm + 94897*(-1 + pms->dm)*pms->kappa1 + 94897*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-67768 + 94897*pms->kappa1 + 94897*pms->kappa2)*pms->sx2) + var->e08*(173236993833 + 18043455325*pms->eta2 - 43950677760*pms->sigx2 + 33838621440*pms->kappa1*pms->sigx2 - 33838621440*pms->dm*pms->kappa1*pms->sigx2 + 33838621440*pms->kappa2*pms->sigx2 + 33838621440*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(75492721337 + 1536*(-5266696 + 8812141*pms->kappa1 + 8812141*pms->kappa2)*pms->sigx2) + 7680*(-5266696*pms->dm + 8812141*(-1 + pms->dm)*pms->kappa1 + 8812141*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-5266696 + 8812141*pms->kappa1 + 8812141*pms->kappa2)*pms->sx2)))*var->vom6)/16986931200;
	REAL8 PN3=-1.0/2211840*(var->e0*(-(pms->dm*(5160960 + 2119680*var->e02 + 1962240*var->e04 + 1553200*var->e06 + 1201207*var->e08)*pms->sigx) + 3*(-3686400 - 829440*var->e02 - 633600*var->e04 - 207440*var->e06 + 156987*var->e08)*pms->sx)*var->vom5);
	REAL8 PN2=(var->e0*(var->e08*(16287159 - 10286597*pms->eta) + pms->cosp2Th0Phi*(-737280 + 92160*var->e02 + 549120*var->e04 + 426320*var->e06 + 381023*var->e08)*(-1 + 3*pms->eta) - 737280*(9 + 5*pms->eta) - 92160*var->e02*(-177 + 259*pms->eta) - 3840*var->e04*(-2871 + 3365*pms->eta) - 80*var->e06*(-180945 + 144643*pms->eta))*var->vom4)/17694720;
	REAL8 PN0=(var->e0*(737280 - 92160*var->e02 + 3840*var->e04 - 80*var->e06 + var->e08)*var->vom2)/737280;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((737280*var->e02*(-181 + 215*pms->eta) + 147456*(847 + 2419*pms->eta) + 2304*var->e04*(-75631 + 102317*pms->eta) + 1024*var->e06*(-179011 + 175571*pms->eta) + var->e08*(-191954485 + 131476991*pms->eta))*pms->sigx) + pms->dm*(216023040 + 203194368*var->e02 + 227153664*var->e04 + 205353728*var->e06 + 181596173*var->e08)*pms->sx + pms->cosp2Th0Phi*(-((5750784 + 3391488*var->e02 + 9126144*var->e04 + 10447872*var->e06 + 11979907*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08)*pms->sx))*var->vom6)/28311552;
	REAL8 PN3=(pms->dm*(var->e08*(6019549 - 5884602*pms->eta) + 3*pms->cosp2Th0Phi*(442368 + 4055040*var->e02 + 1698048*var->e04 + 1895808*var->e06 + 1819063*var->e08)*(-1 + 2*pms->eta) - 147456*(607 + 66*pms->eta) + 73728*var->e02*(-2003 + 390*pms->eta) - 6912*var->e04*(8839 + 1266*pms->eta) - 128*var->e06*(182695 + 33042*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/28311552;
	REAL8 PN2=((-147456 + 73728*var->e02 + 2304*var->e04 + 3712*var->e06 + 2347*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/147456;
	REAL8 PN1=-1.0/294912*(pms->dm*(147456 + 147456*var->e02 + 25344*var->e04 + 20480*var->e06 + 13901*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((737280*var->e02*(-181 + 215*pms->eta) + 147456*(847 + 2419*pms->eta) + 2304*var->e04*(-75631 + 102317*pms->eta) + 1024*var->e06*(-179011 + 175571*pms->eta) + var->e08*(-191954485 + 131476991*pms->eta))*pms->sigx) + pms->dm*(216023040 + 203194368*var->e02 + 227153664*var->e04 + 205353728*var->e06 + 181596173*var->e08)*pms->sx + pms->cosp2Th0Phi*(-((5750784 + 3391488*var->e02 + 9126144*var->e04 + 10447872*var->e06 + 11979907*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08)*pms->sx))*var->vom6)/28311552;
	REAL8 PN3=(pms->dm*(var->e08*(6019549 - 5884602*pms->eta) + 3*pms->cosp2Th0Phi*(442368 + 4055040*var->e02 + 1698048*var->e04 + 1895808*var->e06 + 1819063*var->e08)*(-1 + 2*pms->eta) - 147456*(607 + 66*pms->eta) + 73728*var->e02*(-2003 + 390*pms->eta) - 6912*var->e04*(8839 + 1266*pms->eta) - 128*var->e06*(182695 + 33042*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/28311552;
	REAL8 PN2=((-147456 + 73728*var->e02 + 2304*var->e04 + 3712*var->e06 + 2347*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/147456;
	REAL8 PN1=-1.0/294912*(pms->dm*(147456 + 147456*var->e02 + 25344*var->e04 + 20480*var->e06 + 13901*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl1_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/707788800*(pms->cos0Thp2Phi*var->e0*(var->e08*(-8349476519 + 26402827645*pms->eta - 3304278765*pms->eta2) + pms->cosp2Th0Phi*(266158080 + 151787520*var->e02 + 277052160*var->e04 + 319862320*var->e06 + 363463521*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 737280*(2959 - 9125*pms->eta + 245*pms->eta2) - 92160*var->e02*(87493 - 280355*pms->eta + 54075*pms->eta2) - 3840*var->e04*(1881611 - 5884865*pms->eta + 537505*pms->eta2) - 80*var->e06*(97078181 - 306252315*pms->eta + 36699715*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/2949120*(pms->cos0Thp2Phi*var->e0*(-2211840 + 1198080*var->e02 + 19200*var->e04 + 54480*var->e06 + 34349*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*var->e0*(442368 - 460800*var->e02 + 45312*var->e04 + 7856*var->e06 + 9143*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/1179648;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl1_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/707788800*(pms->cos0Thp2Phi*var->e0*(var->e08*(-8349476519 + 26402827645*pms->eta - 3304278765*pms->eta2) + pms->cosp2Th0Phi*(266158080 + 151787520*var->e02 + 277052160*var->e04 + 319862320*var->e06 + 363463521*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 737280*(2959 - 9125*pms->eta + 245*pms->eta2) - 92160*var->e02*(87493 - 280355*pms->eta + 54075*pms->eta2) - 3840*var->e04*(1881611 - 5884865*pms->eta + 537505*pms->eta2) - 80*var->e06*(97078181 - 306252315*pms->eta + 36699715*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/2949120*(pms->cos0Thp2Phi*var->e0*(-2211840 + 1198080*var->e02 + 19200*var->e04 + 54480*var->e06 + 34349*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*var->e0*(442368 - 460800*var->e02 + 45312*var->e04 + 7856*var->e06 + 9143*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/1179648;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/8847360*(var->e02*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((1117440 - 470400*var->e02 + 22290*var->e04 + 2311*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(-218880 + 124800*var->e02 + 570*var->e04 + 5273*var->e06)*pms->sx)*var->vom6);
	REAL8 PN3=-1.0/4423680*(pms->dm*var->e02*(-1664640 + 1470720*var->e02 + 71355*var->e04 + 116947*var->e06)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 cpart_UPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/8847360*(var->e02*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((1117440 - 470400*var->e02 + 22290*var->e04 + 2311*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(-218880 + 124800*var->e02 + 570*var->e04 + 5273*var->e06)*pms->sx)*var->vom6);
	REAL8 PN3=-1.0/4423680*(pms->dm*var->e02*(-1664640 + 1470720*var->e02 + 71355*var->e04 + 116947*var->e06)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl1_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e03*(380113920 - 236894400*var->e02 + 11858472*var->e04 + 101269*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/2123366400;
	return PN4;
}

REAL8 cpart_UPartsl1_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e03*(380113920 - 236894400*var->e02 + 11858472*var->e04 + 101269*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/2123366400;
	return PN4;
}

REAL8 spart_UPartsl2_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/9676800*(pms->cos0Thp4Phi*(-80717 + 44164*var->e02)*var->e06*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl2_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/9676800*(pms->cos0Thp4Phi*(-80717 + 44164*var->e02)*var->e06*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((19824 + 24836*var->e02 + 22471*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 12*pms->dm*(4368 + 1792*var->e02 + 1007*var->e04)*pms->sx)*var->vom6)/3870720;
	REAL8 PN3=(pms->dm*(-405552 + 10052*var->e02 + 56117*var->e04)*var->e05*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/7741440;
	return PN4+PN3;
}

REAL8 cpart_UPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((19824 + 24836*var->e02 + 22471*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 12*pms->dm*(4368 + 1792*var->e02 + 1007*var->e04)*pms->sx)*var->vom6)/3870720;
	REAL8 PN3=(pms->dm*(-405552 + 10052*var->e02 + 56117*var->e04)*var->e05*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/7741440;
	return PN4+PN3;
}

REAL8 spart_UPartsl2_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/5529600*(pms->cos0Thp2Phi*var->e04*(var->e04*(-48197303 + 155012435*pms->eta - 25963615*pms->eta2) + pms->cosp2Th0Phi*(1991760 + 2165760*var->e02 + 2583947*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 480*var->e02*(76759 - 247937*pms->eta + 43092*pms->eta2) - 240*(95311 - 314555*pms->eta + 78815*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/5760*(pms->cos0Thp2Phi*var->e04*(720 + 264*var->e02 + 173*var->e04)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*var->e04*(5040 + 480*var->e02 + 277*var->e04)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/23040;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl2_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/5529600*(pms->cos0Thp2Phi*var->e04*(var->e04*(-48197303 + 155012435*pms->eta - 25963615*pms->eta2) + pms->cosp2Th0Phi*(1991760 + 2165760*var->e02 + 2583947*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 480*var->e02*(76759 - 247937*pms->eta + 43092*pms->eta2) - 240*(95311 - 314555*pms->eta + 78815*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/5760*(pms->cos0Thp2Phi*var->e04*(720 + 264*var->e02 + 173*var->e04)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*var->e04*(5040 + 480*var->e02 + 277*var->e04)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/23040;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3317760*(var->e03*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((-720*var->e02*(-1073 + 1957*pms->eta) + 1440*(499 + 2815*pms->eta) + 18*var->e04*(66739 + 214903*pms->eta) + var->e06*(1366567 + 9120577*pms->eta))*pms->sigx) - 2*pms->dm*(3288960 + 3589200*var->e02 + 2751264*var->e04 + 1451041*var->e06)*pms->sx + pms->cosp2Th0Phi*(3*(390240 + 366960*var->e02 + 445758*var->e04 + 498937*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e03*(var->e06*(7375408 - 671028*pms->eta) + var->e04*(5438313 - 495234*pms->eta) + 27*pms->cosp2Th0Phi*(34320 + 20080*var->e02 + 20995*var->e04 + 21366*var->e06)*(-1 + 2*pms->eta) + 720*(1871 + 402*pms->eta) - 720*var->e02*(-5003 + 786*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/3317760;
	REAL8 PN2=-1.0/17280*(var->e03*(2880 + 720*var->e02 + 576*var->e04 + 389*var->e06)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/34560*(pms->dm*var->e03*(24480 + 720*var->e02 + 2844*var->e04 + 1727*var->e06)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3317760*(var->e03*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((-720*var->e02*(-1073 + 1957*pms->eta) + 1440*(499 + 2815*pms->eta) + 18*var->e04*(66739 + 214903*pms->eta) + var->e06*(1366567 + 9120577*pms->eta))*pms->sigx) - 2*pms->dm*(3288960 + 3589200*var->e02 + 2751264*var->e04 + 1451041*var->e06)*pms->sx + pms->cosp2Th0Phi*(3*(390240 + 366960*var->e02 + 445758*var->e04 + 498937*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e03*(var->e06*(7375408 - 671028*pms->eta) + var->e04*(5438313 - 495234*pms->eta) + 27*pms->cosp2Th0Phi*(34320 + 20080*var->e02 + 20995*var->e04 + 21366*var->e06)*(-1 + 2*pms->eta) + 720*(1871 + 402*pms->eta) - 720*var->e02*(-5003 + 786*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/3317760;
	REAL8 PN2=-1.0/17280*(var->e03*(2880 + 720*var->e02 + 576*var->e04 + 389*var->e06)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/34560*(pms->dm*var->e03*(24480 + 720*var->e02 + 2844*var->e04 + 1727*var->e06)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl2_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e02*(4*pms->cosp2Th0Phi*(-720*(20349 - 66625*pms->eta + 9705*pms->eta2) + 240*var->e02*(-67647 + 166475*pms->eta + 184125*pms->eta2) + 15*var->e04*(-1625301 + 4955705*pms->eta + 531615*pms->eta2) + var->e06*(-27552681 + 81875965*pms->eta + 18204315*pms->eta2)) + 3*(-3*pms->cosp4Th0Phi*(30960 + 299760*var->e02 + 189405*var->e04 + 232207*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 720*(-512643 - 18735*pms->eta2 - 103680*pms->sigx2 + 51840*pms->kappa1*pms->sigx2 - 51840*pms->dm*pms->kappa1*pms->sigx2 + 51840*pms->kappa2*pms->sigx2 + 51840*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(-81155 + 20736*(-2 + pms->kappa1 + pms->kappa2)*pms->sigx2) + 103680*(-2*pms->dm + (-1 + pms->dm)*pms->kappa1 + pms->kappa2 + pms->dm*pms->kappa2)*pms->sigx*pms->sx + 103680*(-2 + pms->kappa1 + pms->kappa2)*pms->sx2) + 240*var->e02*(-225929 + 181235*pms->eta2 - 241920*pms->sigx2 + 151680*pms->kappa1*pms->sigx2 - 151680*pms->dm*pms->kappa1*pms->sigx2 + 151680*pms->kappa2*pms->sigx2 + 151680*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(146045 + 256*(-94 + 79*pms->kappa1 + 79*pms->kappa2)*pms->sigx2) + 3840*(-94*pms->dm + 79*(-1 + pms->dm)*pms->kappa1 + 79*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(-94 + 79*pms->kappa1 + 79*pms->kappa2)*pms->sx2) + 15*var->e04*(-6972267 + 1431625*pms->eta2 - 4872960*pms->sigx2 + 3143040*pms->kappa1*pms->sigx2 - 3143040*pms->dm*pms->kappa1*pms->sigx2 + 3143040*pms->kappa2*pms->sigx2 + 3143040*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(5132309 + 768*(-1802 + 1637*pms->kappa1 + 1637*pms->kappa2)*pms->sigx2) + 3840*(-1802*pms->dm + 1637*(-1 + pms->dm)*pms->kappa1 + 1637*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(-1802 + 1637*pms->kappa1 + 1637*pms->kappa2)*pms->sx2) + var->e06*(33602685*pms->eta2 - 5*pms->eta*(110045113 + 9216*(-2282 + 2405*pms->kappa1 + 2405*pms->kappa2)*pms->sigx2) - 9*(1995983 + 2560*(3546 + 2405*(-1 + pms->dm)*pms->kappa1 - 2405*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 46080*(-2282*pms->dm + 2405*(-1 + pms->dm)*pms->kappa1 + 2405*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 46080*(-2282 + 2405*pms->kappa1 + 2405*pms->kappa2)*pms->sx2)))*var->vom6)/33177600;
	REAL8 PN3=(var->e02*(pms->dm*(33120 + 4080*var->e02 + 9930*var->e04 + 7963*var->e06)*pms->sigx + 90*(864 - 16*var->e02 + 162*var->e04 + 95*var->e06)*pms->sx)*var->vom5)/8640;
	REAL8 PN2=(var->e02*(var->e06*(19647 - 21901*pms->eta) + pms->cosp2Th0Phi*(5040 - 3840*var->e02 + 1965*var->e04 + 679*var->e06)*(-1 + 3*pms->eta) + 720*(-153 + 11*pms->eta) - 1920*var->e02*(-45 + 37*pms->eta) - 15*var->e04*(69 + 1025*pms->eta))*var->vom4)/34560;
	REAL8 PN0=-1.0/360*(var->e02*(-360 + 120*var->e02 - 15*var->e04 + var->e06)*var->vom2);
	return PN4+PN3+PN2+PN0;
}

REAL8 cpart_UPartsl2_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e02*(4*pms->cosp2Th0Phi*(-720*(20349 - 66625*pms->eta + 9705*pms->eta2) + 240*var->e02*(-67647 + 166475*pms->eta + 184125*pms->eta2) + 15*var->e04*(-1625301 + 4955705*pms->eta + 531615*pms->eta2) + var->e06*(-27552681 + 81875965*pms->eta + 18204315*pms->eta2)) + 3*(-3*pms->cosp4Th0Phi*(30960 + 299760*var->e02 + 189405*var->e04 + 232207*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 720*(-512643 - 18735*pms->eta2 - 103680*pms->sigx2 + 51840*pms->kappa1*pms->sigx2 - 51840*pms->dm*pms->kappa1*pms->sigx2 + 51840*pms->kappa2*pms->sigx2 + 51840*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(-81155 + 20736*(-2 + pms->kappa1 + pms->kappa2)*pms->sigx2) + 103680*(-2*pms->dm + (-1 + pms->dm)*pms->kappa1 + pms->kappa2 + pms->dm*pms->kappa2)*pms->sigx*pms->sx + 103680*(-2 + pms->kappa1 + pms->kappa2)*pms->sx2) + 240*var->e02*(-225929 + 181235*pms->eta2 - 241920*pms->sigx2 + 151680*pms->kappa1*pms->sigx2 - 151680*pms->dm*pms->kappa1*pms->sigx2 + 151680*pms->kappa2*pms->sigx2 + 151680*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(146045 + 256*(-94 + 79*pms->kappa1 + 79*pms->kappa2)*pms->sigx2) + 3840*(-94*pms->dm + 79*(-1 + pms->dm)*pms->kappa1 + 79*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(-94 + 79*pms->kappa1 + 79*pms->kappa2)*pms->sx2) + 15*var->e04*(-6972267 + 1431625*pms->eta2 - 4872960*pms->sigx2 + 3143040*pms->kappa1*pms->sigx2 - 3143040*pms->dm*pms->kappa1*pms->sigx2 + 3143040*pms->kappa2*pms->sigx2 + 3143040*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(5132309 + 768*(-1802 + 1637*pms->kappa1 + 1637*pms->kappa2)*pms->sigx2) + 3840*(-1802*pms->dm + 1637*(-1 + pms->dm)*pms->kappa1 + 1637*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(-1802 + 1637*pms->kappa1 + 1637*pms->kappa2)*pms->sx2) + var->e06*(33602685*pms->eta2 - 5*pms->eta*(110045113 + 9216*(-2282 + 2405*pms->kappa1 + 2405*pms->kappa2)*pms->sigx2) - 9*(1995983 + 2560*(3546 + 2405*(-1 + pms->dm)*pms->kappa1 - 2405*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 46080*(-2282*pms->dm + 2405*(-1 + pms->dm)*pms->kappa1 + 2405*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 46080*(-2282 + 2405*pms->kappa1 + 2405*pms->kappa2)*pms->sx2)))*var->vom6)/33177600;
	REAL8 PN3=(var->e02*(pms->dm*(33120 + 4080*var->e02 + 9930*var->e04 + 7963*var->e06)*pms->sigx + 90*(864 - 16*var->e02 + 162*var->e04 + 95*var->e06)*pms->sx)*var->vom5)/8640;
	REAL8 PN2=(var->e02*(var->e06*(19647 - 21901*pms->eta) + pms->cosp2Th0Phi*(5040 - 3840*var->e02 + 1965*var->e04 + 679*var->e06)*(-1 + 3*pms->eta) + 720*(-153 + 11*pms->eta) - 1920*var->e02*(-45 + 37*pms->eta) - 15*var->e04*(69 + 1025*pms->eta))*var->vom4)/34560;
	REAL8 PN0=-1.0/360*(var->e02*(-360 + 120*var->e02 - 15*var->e04 + var->e06)*var->vom2);
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((var->e06*(3920395 - 5121185*pms->eta) + var->e08*(4211487 - 4594308*pms->eta) + 28080*var->e02*(133 + 185*pms->eta) - 2880*(2285 + 8057*pms->eta) - 60*var->e04*(-75041 + 159715*pms->eta))*pms->sigx + 5*pms->dm*(2603520 + 418176*var->e02 + 1434144*var->e04 + 1113232*var->e06 + 1047411*var->e08)*pms->sx + pms->cosp2Th0Phi*(-((383040 - 186480*var->e02 + 286500*var->e04 + 207085*var->e06 + 247544*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*pms->sx))*var->vom6)/552960;
	REAL8 PN3=(pms->dm*var->e0*(3*pms->cosp2Th0Phi*(-17280 + 707040*var->e02 - 66840*var->e04 + 182130*var->e06 + 140101*var->e08)*(-1 + 2*pms->eta) - 5760*(2593 + 270*pms->eta) + 4320*var->e02*(-5741 + 1226*pms->eta) - 10*var->e06*(393977 + 4734*pms->eta) - 360*var->e04*(1797 + 8902*pms->eta) - 21*var->e08*(40393 + 29030*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/2211840;
	REAL8 PN2=(var->e0*(-11520 + 8640*var->e02 - 1200*var->e04 + 320*var->e06 + 123*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/5760;
	REAL8 PN1=-1.0/23040*(pms->dm*var->e0*(28800 + 840*var->e04 + 1180*var->e06 + 789*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((var->e06*(3920395 - 5121185*pms->eta) + var->e08*(4211487 - 4594308*pms->eta) + 28080*var->e02*(133 + 185*pms->eta) - 2880*(2285 + 8057*pms->eta) - 60*var->e04*(-75041 + 159715*pms->eta))*pms->sigx + 5*pms->dm*(2603520 + 418176*var->e02 + 1434144*var->e04 + 1113232*var->e06 + 1047411*var->e08)*pms->sx + pms->cosp2Th0Phi*(-((383040 - 186480*var->e02 + 286500*var->e04 + 207085*var->e06 + 247544*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*pms->sx))*var->vom6)/552960;
	REAL8 PN3=(pms->dm*var->e0*(3*pms->cosp2Th0Phi*(-17280 + 707040*var->e02 - 66840*var->e04 + 182130*var->e06 + 140101*var->e08)*(-1 + 2*pms->eta) - 5760*(2593 + 270*pms->eta) + 4320*var->e02*(-5741 + 1226*pms->eta) - 10*var->e06*(393977 + 4734*pms->eta) - 360*var->e04*(1797 + 8902*pms->eta) - 21*var->e08*(40393 + 29030*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/2211840;
	REAL8 PN2=(var->e0*(-11520 + 8640*var->e02 - 1200*var->e04 + 320*var->e06 + 123*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/5760;
	REAL8 PN1=-1.0/23040*(pms->dm*var->e0*(28800 + 840*var->e04 + 1180*var->e06 + 789*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl2_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3317760*(pms->cos0Thp2Phi*(var->e08*(-44380911 + 139600075*pms->eta - 16355175*pms->eta2) + 3*pms->cosp2Th0Phi*(147456 + 1035648*var->e02 - 360000*var->e04 + 702584*var->e06 + 501953*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 73728*(-216 + 605*pms->eta + 105*pms->eta2) + 1152*var->e02*(-53193 + 157045*pms->eta + 9615*pms->eta2) - 2880*var->e04*(21747 - 71867*pms->eta + 21099*pms->eta2) + 8*var->e06*(-4761261 + 14216105*pms->eta + 1085595*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/1152*(pms->cos0Thp2Phi*(2304 - 5760*var->e02 + 3312*var->e04 - 520*var->e06 + 85*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*(9216 - 9792*var->e02 - 4464*var->e04 + 2492*var->e06 + 59*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/13824;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl2_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3317760*(pms->cos0Thp2Phi*(var->e08*(-44380911 + 139600075*pms->eta - 16355175*pms->eta2) + 3*pms->cosp2Th0Phi*(147456 + 1035648*var->e02 - 360000*var->e04 + 702584*var->e06 + 501953*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 73728*(-216 + 605*pms->eta + 105*pms->eta2) + 1152*var->e02*(-53193 + 157045*pms->eta + 9615*pms->eta2) - 2880*var->e04*(21747 - 71867*pms->eta + 21099*pms->eta2) + 8*var->e06*(-4761261 + 14216105*pms->eta + 1085595*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/1152*(pms->cos0Thp2Phi*(2304 - 5760*var->e02 + 3312*var->e04 - 520*var->e06 + 85*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*(9216 - 9792*var->e02 - 4464*var->e04 + 2492*var->e06 + 59*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/13824;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/138240*(var->e0*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((82080 - 191880*var->e02 + 104010*var->e04 - 17265*var->e06 + 1877*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(34560 - 63360*var->e02 + 31920*var->e04 - 5280*var->e06 + 629*var->e08)*pms->sx)*var->vom6);
	REAL8 PN3=-1.0/276480*(pms->dm*var->e0*(-7200 - 286920*var->e02 + 352110*var->e04 - 68635*var->e06 + 16301*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 cpart_UPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/138240*(var->e0*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((82080 - 191880*var->e02 + 104010*var->e04 - 17265*var->e06 + 1877*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(34560 - 63360*var->e02 + 31920*var->e04 - 5280*var->e06 + 629*var->e08)*pms->sx)*var->vom6);
	REAL8 PN3=-1.0/276480*(pms->dm*var->e0*(-7200 - 286920*var->e02 + 352110*var->e04 - 68635*var->e06 + 16301*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl2_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e02*(-810360 + 2366160*var->e02 - 1673640*var->e04 + 329017*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/1382400;
	return PN4;
}

REAL8 cpart_UPartsl2_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e02*(-810360 + 2366160*var->e02 - 1673640*var->e04 + 329017*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/1382400;
	return PN4;
}

REAL8 spart_UPartsl3_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-9*pms->cos0Thp4Phi*(-1204576 + 747101*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/734003200;
	return PN4;
}

REAL8 cpart_UPartsl3_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-9*pms->cos0Thp4Phi*(-1204576 + 747101*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/734003200;
	return PN4;
}

REAL8 spart_UPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(9*var->e06*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((1526 + 2109*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(1918 + 627*var->e02)*pms->sx)*var->vom6)/2293760;
	REAL8 PN3=(9*pms->dm*(-9695 + 1221*var->e02)*var->e06*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/1146880;
	return PN4+PN3;
}

REAL8 cpart_UPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(9*var->e06*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((1526 + 2109*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(1918 + 627*var->e02)*pms->sx)*var->vom6)/2293760;
	REAL8 PN3=(9*pms->dm*(-9695 + 1221*var->e02)*var->e06*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/1146880;
	return PN4+PN3;
}

REAL8 spart_UPartsl3_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/275251200*(pms->cos0Thp2Phi*var->e05*(21*pms->cosp2Th0Phi*(5822272 + 5297736*var->e02 + 6438525*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 1344*(1089667 - 3617545*pms->eta + 982665*pms->eta2) - 56*var->e02*(35167489 - 113425695*pms->eta + 18566055*pms->eta2) - 5*var->e04*(507577243 - 1634953113*pms->eta + 280894761*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-27*pms->cos0Thp2Phi*(7616 + 1960*var->e02 + 1723*var->e04)*var->e05*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/1146880;
	REAL8 PN2=(3*pms->cos0Thp2Phi*(209216 - 10472*var->e02 + 12721*var->e04)*var->e05*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/2293760;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl3_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/275251200*(pms->cos0Thp2Phi*var->e05*(21*pms->cosp2Th0Phi*(5822272 + 5297736*var->e02 + 6438525*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 1344*(1089667 - 3617545*pms->eta + 982665*pms->eta2) - 56*var->e02*(35167489 - 113425695*pms->eta + 18566055*pms->eta2) - 5*var->e04*(507577243 - 1634953113*pms->eta + 280894761*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-27*pms->cos0Thp2Phi*(7616 + 1960*var->e02 + 1723*var->e04)*var->e05*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/1146880;
	REAL8 PN2=(3*pms->cos0Thp2Phi*(209216 - 10472*var->e02 + 12721*var->e04)*var->e05*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/2293760;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/7864320*(var->e04*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((1536*var->e02*(1073 + 3664*pms->eta) - 320*(-3241 + 87835*pms->eta) - 27*var->e04*(-30383 + 549165*pms->eta))*pms->sigx - pms->dm*(14560960 + 15499200*var->e02 + 11190507*var->e04)*pms->sx + pms->cosp2Th0Phi*((3876160 + 2528256*var->e02 + 3433533*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 81*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e04*(var->e04*(14915203 - 1120518*pms->eta) + 3*pms->cosp2Th0Phi*(791360 + 392672*var->e02 + 424169*var->e04)*(-1 + 2*pms->eta) + 320*(35843 + 1530*pms->eta) - 32*var->e02*(-307061 + 71370*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/7864320;
	REAL8 PN2=(-27*var->e04*(320 + 32*var->e02 + 61*var->e04)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/40960;
	REAL8 PN1=(-9*pms->dm*var->e04*(1472 - 256*var->e02 + 187*var->e04)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/16384;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/7864320*(var->e04*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((1536*var->e02*(1073 + 3664*pms->eta) - 320*(-3241 + 87835*pms->eta) - 27*var->e04*(-30383 + 549165*pms->eta))*pms->sigx - pms->dm*(14560960 + 15499200*var->e02 + 11190507*var->e04)*pms->sx + pms->cosp2Th0Phi*((3876160 + 2528256*var->e02 + 3433533*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 81*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e04*(var->e04*(14915203 - 1120518*pms->eta) + 3*pms->cosp2Th0Phi*(791360 + 392672*var->e02 + 424169*var->e04)*(-1 + 2*pms->eta) + 320*(35843 + 1530*pms->eta) - 32*var->e02*(-307061 + 71370*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/7864320;
	REAL8 PN2=(-27*var->e04*(320 + 32*var->e02 + 61*var->e04)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/40960;
	REAL8 PN1=(-9*pms->dm*var->e04*(1472 - 256*var->e02 + 187*var->e04)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/16384;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl3_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e03*(4*pms->cosp2Th0Phi*(-5120*(123459 - 427835*pms->eta + 125115*pms->eta2) + 320*var->e02*(-2009871 + 4191055*pms->eta + 7906785*pms->eta2) - 24*var->e04*(33508101 - 109939325*pms->eta + 20324445*pms->eta2) + 3*var->e06*(-295477593 + 866086025*pms->eta + 233401575*pms->eta2)) + 3*(-9*pms->cosp4Th0Phi*(-558080 + 5234880*var->e02 + 865656*var->e04 + 2528531*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 5120*(-4714833 + 4306565*pms->eta - 254085*pms->eta2 - 23040*pms->eta*(-56 + 25*pms->kappa1 + 25*pms->kappa2)*pms->sigx2 - 11520*(53 + 25*(-1 + pms->dm)*pms->kappa1 - 25*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + 23040*(-56*pms->dm + 25*(-1 + pms->dm)*pms->kappa1 + 25*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-56 + 25*pms->kappa1 + 25*pms->kappa2)*pms->sx2) + 320*var->e02*(8468403 + 9214575*pms->eta2 - 4527360*pms->sigx2 + 3006720*pms->kappa1*pms->sigx2 - 3006720*pms->dm*pms->kappa1*pms->sigx2 + 3006720*pms->kappa2*pms->sigx2 + 3006720*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(19243555 + 13824*(-88 + 87*pms->kappa1 + 87*pms->kappa2)*pms->sigx2) + 69120*(-88*pms->dm + 87*(-1 + pms->dm)*pms->kappa1 + 87*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 69120*(-88 + 87*pms->kappa1 + 87*pms->kappa2)*pms->sx2) + 24*var->e04*(-501315*pms->eta2 - 5*pms->eta*(45968345 + 4608*(-6376 + 5063*pms->kappa1 + 5063*pms->kappa2)*pms->sigx2) - 9*(38491423 + 1280*(8251 + 5063*(-1 + pms->dm)*pms->kappa1 - 5063*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 23040*(-6376*pms->dm + 5063*(-1 + pms->dm)*pms->kappa1 + 5063*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-6376 + 5063*pms->kappa1 + 5063*pms->kappa2)*pms->sx2) + 3*var->e06*(-1265577851 + 398367465*pms->eta2 - 812378880*pms->sigx2 + 529125120*pms->kappa1*pms->sigx2 - 529125120*pms->dm*pms->kappa1*pms->sigx2 + 529125120*pms->kappa2*pms->sigx2 + 529125120*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(360482375 + 1536*(-49176 + 45931*pms->kappa1 + 45931*pms->kappa2)*pms->sigx2) + 23040*(-49176*pms->dm + 45931*(-1 + pms->dm)*pms->kappa1 + 45931*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-49176 + 45931*pms->kappa1 + 45931*pms->kappa2)*pms->sx2)))*var->vom6)/943718400;
	REAL8 PN3=(var->e03*(pms->dm*(240640 - 38720*var->e02 + 65656*var->e04 + 39719*var->e06)*pms->sigx + (588800 - 166720*var->e02 + 123608*var->e04 + 47743*var->e06)*pms->sx)*var->vom5)/40960;
	REAL8 PN2=-1.0/983040*(var->e03*(pms->cosp2Th0Phi*(-363520 + 352960*var->e02 - 153912*var->e04 + 1047*var->e06)*(-1 + 3*pms->eta) - 15360*(-419 + 57*pms->eta) - 504*var->e04*(-3047 + 549*pms->eta) + 4800*var->e02*(-1255 + 693*pms->eta) + 9*var->e06*(-77065 + 79803*pms->eta))*var->vom4);
	REAL8 PN0=(-9*var->e03*(-5120 + 2880*var->e02 - 648*var->e04 + 81*var->e06)*var->vom2)/40960;
	return PN4+PN3+PN2+PN0;
}

REAL8 cpart_UPartsl3_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e03*(4*pms->cosp2Th0Phi*(-5120*(123459 - 427835*pms->eta + 125115*pms->eta2) + 320*var->e02*(-2009871 + 4191055*pms->eta + 7906785*pms->eta2) - 24*var->e04*(33508101 - 109939325*pms->eta + 20324445*pms->eta2) + 3*var->e06*(-295477593 + 866086025*pms->eta + 233401575*pms->eta2)) + 3*(-9*pms->cosp4Th0Phi*(-558080 + 5234880*var->e02 + 865656*var->e04 + 2528531*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 5120*(-4714833 + 4306565*pms->eta - 254085*pms->eta2 - 23040*pms->eta*(-56 + 25*pms->kappa1 + 25*pms->kappa2)*pms->sigx2 - 11520*(53 + 25*(-1 + pms->dm)*pms->kappa1 - 25*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + 23040*(-56*pms->dm + 25*(-1 + pms->dm)*pms->kappa1 + 25*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-56 + 25*pms->kappa1 + 25*pms->kappa2)*pms->sx2) + 320*var->e02*(8468403 + 9214575*pms->eta2 - 4527360*pms->sigx2 + 3006720*pms->kappa1*pms->sigx2 - 3006720*pms->dm*pms->kappa1*pms->sigx2 + 3006720*pms->kappa2*pms->sigx2 + 3006720*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(19243555 + 13824*(-88 + 87*pms->kappa1 + 87*pms->kappa2)*pms->sigx2) + 69120*(-88*pms->dm + 87*(-1 + pms->dm)*pms->kappa1 + 87*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 69120*(-88 + 87*pms->kappa1 + 87*pms->kappa2)*pms->sx2) + 24*var->e04*(-501315*pms->eta2 - 5*pms->eta*(45968345 + 4608*(-6376 + 5063*pms->kappa1 + 5063*pms->kappa2)*pms->sigx2) - 9*(38491423 + 1280*(8251 + 5063*(-1 + pms->dm)*pms->kappa1 - 5063*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 23040*(-6376*pms->dm + 5063*(-1 + pms->dm)*pms->kappa1 + 5063*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-6376 + 5063*pms->kappa1 + 5063*pms->kappa2)*pms->sx2) + 3*var->e06*(-1265577851 + 398367465*pms->eta2 - 812378880*pms->sigx2 + 529125120*pms->kappa1*pms->sigx2 - 529125120*pms->dm*pms->kappa1*pms->sigx2 + 529125120*pms->kappa2*pms->sigx2 + 529125120*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(360482375 + 1536*(-49176 + 45931*pms->kappa1 + 45931*pms->kappa2)*pms->sigx2) + 23040*(-49176*pms->dm + 45931*(-1 + pms->dm)*pms->kappa1 + 45931*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-49176 + 45931*pms->kappa1 + 45931*pms->kappa2)*pms->sx2)))*var->vom6)/943718400;
	REAL8 PN3=(var->e03*(pms->dm*(240640 - 38720*var->e02 + 65656*var->e04 + 39719*var->e06)*pms->sigx + (588800 - 166720*var->e02 + 123608*var->e04 + 47743*var->e06)*pms->sx)*var->vom5)/40960;
	REAL8 PN2=-1.0/983040*(var->e03*(pms->cosp2Th0Phi*(-363520 + 352960*var->e02 - 153912*var->e04 + 1047*var->e06)*(-1 + 3*pms->eta) - 15360*(-419 + 57*pms->eta) - 504*var->e04*(-3047 + 549*pms->eta) + 4800*var->e02*(-1255 + 693*pms->eta) + 9*var->e06*(-77065 + 79803*pms->eta))*var->vom4);
	REAL8 PN0=(-9*var->e03*(-5120 + 2880*var->e02 - 648*var->e04 + 81*var->e06)*var->vom2)/40960;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1966080*(var->e02*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((3840*(11233 + 48637*pms->eta) - 640*var->e02*(33637 + 182657*pms->eta) + 90*var->e04*(-267569 + 979827*pms->eta) + 3*var->e06*(-4454177 + 5130387*pms->eta))*pms->sigx - pms->dm*(99621120 - 27728000*var->e02 + 48374490*var->e04 + 22266009*var->e06)*pms->sx + pms->cosp2Th0Phi*((3229440 - 3213440*var->e02 + 2413110*var->e04 + 477237*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 81*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e02*(var->e04*(8645375 - 4233150*pms->eta) + 3*pms->cosp2Th0Phi*(-163200 + 766720*var->e02 - 347555*var->e04 + 174589*var->e06)*(-1 + 2*pms->eta) - 1920*(4519 + 626*pms->eta) + 1280*var->e02*(-18743 + 3942*pms->eta) + var->e06*(-5029225 + 887682*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/983040;
	REAL8 PN2=(27*var->e02*(-640 + 640*var->e02 - 185*var->e04 + 38*var->e06)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/5120;
	REAL8 PN1=(-3*pms->dm*var->e02*(14080 - 5760*var->e02 + 1230*var->e04 + 181*var->e06)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/20480;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1966080*(var->e02*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((3840*(11233 + 48637*pms->eta) - 640*var->e02*(33637 + 182657*pms->eta) + 90*var->e04*(-267569 + 979827*pms->eta) + 3*var->e06*(-4454177 + 5130387*pms->eta))*pms->sigx - pms->dm*(99621120 - 27728000*var->e02 + 48374490*var->e04 + 22266009*var->e06)*pms->sx + pms->cosp2Th0Phi*((3229440 - 3213440*var->e02 + 2413110*var->e04 + 477237*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 81*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e02*(var->e04*(8645375 - 4233150*pms->eta) + 3*pms->cosp2Th0Phi*(-163200 + 766720*var->e02 - 347555*var->e04 + 174589*var->e06)*(-1 + 2*pms->eta) - 1920*(4519 + 626*pms->eta) + 1280*var->e02*(-18743 + 3942*pms->eta) + var->e06*(-5029225 + 887682*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/983040;
	REAL8 PN2=(27*var->e02*(-640 + 640*var->e02 - 185*var->e04 + 38*var->e06)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/5120;
	REAL8 PN1=(-3*pms->dm*var->e02*(14080 - 5760*var->e02 + 1230*var->e04 + 181*var->e06)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/20480;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl3_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/235929600*(pms->cos0Thp2Phi*var->e0*(9*pms->cosp2Th0Phi*(9420800 + 65218560*var->e02 - 71141120*var->e04 + 51516240*var->e06 + 3929683*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 409600*(-12471 + 35453*pms->eta + 3747*pms->eta2) + 10240*var->e02*(-1310499 + 3810565*pms->eta + 243555*pms->eta2) - 1280*var->e04*(4742691 - 16970825*pms->eta + 7940985*pms->eta2) + 240*var->e06*(-6638601 + 13782215*pms->eta + 21765345*pms->eta2) - 3*var->e08*(1451030591 - 4642326245*pms->eta + 837604965*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-27*pms->cos0Thp2Phi*var->e0*(81920 - 194560*var->e02 + 136960*var->e04 - 38320*var->e06 + 6521*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/327680;
	REAL8 PN2=-1.0/1966080*(pms->cos0Thp2Phi*var->e0*(-5324800 + 8837120*var->e02 - 2840320*var->e04 - 47760*var->e06 + 10119*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl3_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/235929600*(pms->cos0Thp2Phi*var->e0*(9*pms->cosp2Th0Phi*(9420800 + 65218560*var->e02 - 71141120*var->e04 + 51516240*var->e06 + 3929683*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 409600*(-12471 + 35453*pms->eta + 3747*pms->eta2) + 10240*var->e02*(-1310499 + 3810565*pms->eta + 243555*pms->eta2) - 1280*var->e04*(4742691 - 16970825*pms->eta + 7940985*pms->eta2) + 240*var->e06*(-6638601 + 13782215*pms->eta + 21765345*pms->eta2) - 3*var->e08*(1451030591 - 4642326245*pms->eta + 837604965*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-27*pms->cos0Thp2Phi*var->e0*(81920 - 194560*var->e02 + 136960*var->e04 - 38320*var->e06 + 6521*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/327680;
	REAL8 PN2=-1.0/1966080*(pms->cos0Thp2Phi*var->e0*(-5324800 + 8837120*var->e02 - 2840320*var->e04 - 47760*var->e06 + 10119*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((671744 - 5750784*var->e02 + 10841856*var->e04 - 7066624*var->e06 + 1958037*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(16384 - 98304*var->e02 + 151296*var->e04 - 89344*var->e06 + 23997*var->e08)*pms->sx)*var->vom6)/1572864;
	REAL8 PN3=(pms->dm*(-442368 + 1712128*var->e02 - 741632*var->e04 - 919936*var->e06 + 497529*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/524288;
	return PN4+PN3;
}

REAL8 cpart_UPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((671744 - 5750784*var->e02 + 10841856*var->e04 - 7066624*var->e06 + 1958037*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(16384 - 98304*var->e02 + 151296*var->e04 - 89344*var->e06 + 23997*var->e08)*pms->sx)*var->vom6)/1572864;
	REAL8 PN3=(pms->dm*(-442368 + 1712128*var->e02 - 741632*var->e04 - 919936*var->e06 + 497529*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/524288;
	return PN4+PN3;
}

REAL8 spart_UPartsl3_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e0*(-33832960 - 11642880*var->e02 + 233478400*var->e04 - 251175440*var->e06 + 89148419*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/52428800;
	return PN4;
}

REAL8 cpart_UPartsl3_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e0*(-33832960 - 11642880*var->e02 + 233478400*var->e04 - 251175440*var->e06 + 89148419*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/52428800;
	return PN4;
}

REAL8 spart_UPartsl4_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(2077*pms->cos0Thp4Phi*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/86400;
	return PN4;
}

REAL8 cpart_UPartsl4_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(2077*pms->cos0Thp4Phi*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/86400;
	return PN4;
}

REAL8 spart_UPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(2*(204 + 295*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(684 + 145*var->e02)*pms->sx)*var->vom6)/60480;
	REAL8 PN3=(pms->dm*(-12812 + 3151*var->e02)*var->e07*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/120960;
	return PN4+PN3;
}

REAL8 cpart_UPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(2*(204 + 295*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(684 + 145*var->e02)*pms->sx)*var->vom6)/60480;
	REAL8 PN3=(pms->dm*(-12812 + 3151*var->e02)*var->e07*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/120960;
	return PN4+PN3;
}

REAL8 spart_UPartsl4_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/58060800*(pms->cos0Thp2Phi*var->e06*(var->e02*(-430776813 + 1382149945*pms->eta - 191238225*pms->eta2) + 3*pms->cosp2Th0Phi*(10808126 + 7727519*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 14*(28708083 - 95790935*pms->eta + 27792615*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/630*(pms->cos0Thp2Phi*(154 + 17*var->e02)*var->e06*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=-1.0/15120*(pms->cos0Thp2Phi*(-5222 + 1165*var->e02)*var->e06*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl4_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/58060800*(pms->cos0Thp2Phi*var->e06*(var->e02*(-430776813 + 1382149945*pms->eta - 191238225*pms->eta2) + 3*pms->cosp2Th0Phi*(10808126 + 7727519*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 14*(28708083 - 95790935*pms->eta + 27792615*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/630*(pms->cos0Thp2Phi*(154 + 17*var->e02)*var->e06*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=-1.0/15120*(pms->cos0Thp2Phi*(-5222 + 1165*var->e02)*var->e06*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3870720*(var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((84*(21133 - 305315*pms->eta) + 14*var->e02*(138133 + 659935*pms->eta) - 3*var->e04*(-498905 + 3684863*pms->eta))*pms->sigx - 4*pms->dm*(1799868 + 1908347*var->e02 + 1253355*var->e04)*pms->sx + pms->cosp2Th0Phi*((2664564 + 979258*var->e02 + 1887959*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e05*(var->e04*(33611385 - 1299138*pms->eta) + 3*pms->cosp2Th0Phi*(1731912 + 725760*var->e02 + 763387*var->e04)*(-1 + 2*pms->eta) + 504*(81861 + 1814*pms->eta) - 112*var->e02*(-126229 + 61920*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/15482880;
	REAL8 PN2=-1.0/630*((168 - 14*var->e02 + 33*var->e04)*var->e05*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/5040*(pms->dm*(4872 - 1918*var->e02 + 873*var->e04)*var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3870720*(var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((84*(21133 - 305315*pms->eta) + 14*var->e02*(138133 + 659935*pms->eta) - 3*var->e04*(-498905 + 3684863*pms->eta))*pms->sigx - 4*pms->dm*(1799868 + 1908347*var->e02 + 1253355*var->e04)*pms->sx + pms->cosp2Th0Phi*((2664564 + 979258*var->e02 + 1887959*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e05*(var->e04*(33611385 - 1299138*pms->eta) + 3*pms->cosp2Th0Phi*(1731912 + 725760*var->e02 + 763387*var->e04)*(-1 + 2*pms->eta) + 504*(81861 + 1814*pms->eta) - 112*var->e02*(-126229 + 61920*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/15482880;
	REAL8 PN2=-1.0/630*((168 - 14*var->e02 + 33*var->e04)*var->e05*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/5040*(pms->dm*(4872 - 1918*var->e02 + 873*var->e04)*var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl4_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*(-4*pms->cosp2Th0Phi*(60*(225741 - 856145*pms->eta + 434985*pms->eta2) - 3*var->e02*(-5832549 + 9994825*pms->eta + 29410575*pms->eta2) + var->e04*(13536153 - 53551085*pms->eta + 42228645*pms->eta2)) + 3*(3*pms->cosp4Th0Phi*(150780 - 562329*var->e02 + 127429*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 60*(-12973367 - 898675*pms->eta2 - 1330560*pms->sigx2 + 603840*pms->kappa1*pms->sigx2 - 603840*pms->dm*pms->kappa1*pms->sigx2 + 603840*pms->kappa2*pms->sigx2 + 603840*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(-879421 + 128*(-1514 + 629*pms->kappa1 + 629*pms->kappa2)*pms->sigx2) + 1920*(-1514*pms->dm + 629*(-1 + pms->dm)*pms->kappa1 + 629*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1920*(-1514 + 629*pms->kappa1 + 629*pms->kappa2)*pms->sx2) + 3*var->e02*(102530037 + 38651945*pms->eta2 - 4458240*pms->sigx2 + 4195200*pms->kappa1*pms->sigx2 - 4195200*pms->dm*pms->kappa1*pms->sigx2 + 4195200*pms->kappa2*pms->sigx2 + 4195200*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(76228213 + 768*(-274 + 2185*pms->kappa1 + 2185*pms->kappa2)*pms->sigx2) + 3840*(-274*pms->dm + 2185*(-1 + pms->dm)*pms->kappa1 + 2185*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(-274 + 2185*pms->kappa1 + 2185*pms->kappa2)*pms->sx2) + var->e04*(-37905135*pms->eta2 + pms->eta*(201578255 - 5760*(-13622 + 9371*pms->kappa1 + 9371*pms->kappa2)*pms->sigx2) - 9*(34807659 + 320*(16182 + 9371*(-1 + pms->dm)*pms->kappa1 - 9371*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 5760*(-13622*pms->dm + 9371*(-1 + pms->dm)*pms->kappa1 + 9371*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 5760*(-13622 + 9371*pms->kappa1 + 9371*pms->kappa2)*pms->sx2)))*var->vom6)/16588800;
	REAL8 PN3=(var->e04*(pms->dm*(75480 - 33024*var->e02 + 23953*var->e04)*pms->sigx + 18*(10520 - 5760*var->e02 + 3049*var->e04)*pms->sx)*var->vom5)/8640;
	REAL8 PN2=(var->e04*(pms->cosp2Th0Phi*(23460 - 28434*var->e02 + 14473*var->e04)*(-1 + 3*pms->eta) + 60*(-6417 + 1091*pms->eta) + 7*var->e04*(-26217 + 9419*pms->eta) - 6*var->e02*(-74229 + 32815*pms->eta))*var->vom4)/34560;
	REAL8 PN0=(4*var->e04*(15 - 12*var->e02 + 4*var->e04)*var->vom2)/45;
	return PN4+PN3+PN2+PN0;
}

REAL8 cpart_UPartsl4_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*(-4*pms->cosp2Th0Phi*(60*(225741 - 856145*pms->eta + 434985*pms->eta2) - 3*var->e02*(-5832549 + 9994825*pms->eta + 29410575*pms->eta2) + var->e04*(13536153 - 53551085*pms->eta + 42228645*pms->eta2)) + 3*(3*pms->cosp4Th0Phi*(150780 - 562329*var->e02 + 127429*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 60*(-12973367 - 898675*pms->eta2 - 1330560*pms->sigx2 + 603840*pms->kappa1*pms->sigx2 - 603840*pms->dm*pms->kappa1*pms->sigx2 + 603840*pms->kappa2*pms->sigx2 + 603840*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(-879421 + 128*(-1514 + 629*pms->kappa1 + 629*pms->kappa2)*pms->sigx2) + 1920*(-1514*pms->dm + 629*(-1 + pms->dm)*pms->kappa1 + 629*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1920*(-1514 + 629*pms->kappa1 + 629*pms->kappa2)*pms->sx2) + 3*var->e02*(102530037 + 38651945*pms->eta2 - 4458240*pms->sigx2 + 4195200*pms->kappa1*pms->sigx2 - 4195200*pms->dm*pms->kappa1*pms->sigx2 + 4195200*pms->kappa2*pms->sigx2 + 4195200*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(76228213 + 768*(-274 + 2185*pms->kappa1 + 2185*pms->kappa2)*pms->sigx2) + 3840*(-274*pms->dm + 2185*(-1 + pms->dm)*pms->kappa1 + 2185*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(-274 + 2185*pms->kappa1 + 2185*pms->kappa2)*pms->sx2) + var->e04*(-37905135*pms->eta2 + pms->eta*(201578255 - 5760*(-13622 + 9371*pms->kappa1 + 9371*pms->kappa2)*pms->sigx2) - 9*(34807659 + 320*(16182 + 9371*(-1 + pms->dm)*pms->kappa1 - 9371*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 5760*(-13622*pms->dm + 9371*(-1 + pms->dm)*pms->kappa1 + 9371*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 5760*(-13622 + 9371*pms->kappa1 + 9371*pms->kappa2)*pms->sx2)))*var->vom6)/16588800;
	REAL8 PN3=(var->e04*(pms->dm*(75480 - 33024*var->e02 + 23953*var->e04)*pms->sigx + 18*(10520 - 5760*var->e02 + 3049*var->e04)*pms->sx)*var->vom5)/8640;
	REAL8 PN2=(var->e04*(pms->cosp2Th0Phi*(23460 - 28434*var->e02 + 14473*var->e04)*(-1 + 3*pms->eta) + 60*(-6417 + 1091*pms->eta) + 7*var->e04*(-26217 + 9419*pms->eta) - 6*var->e02*(-74229 + 32815*pms->eta))*var->vom4)/34560;
	REAL8 PN0=(4*var->e04*(15 - 12*var->e02 + 4*var->e04)*var->vom2)/45;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1658880*(var->e03*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((var->e04*(33718374 - 200734398*pms->eta) - 1440*(40967 + 211775*pms->eta) + 180*var->e02*(161207 + 1647839*pms->eta) + var->e06*(5148265 + 19870777*pms->eta))*pms->sigx) - 4*pms->dm*(39129120 - 25299900*var->e02 + 22557753*var->e04 + 2348129*var->e06)*pms->sx + pms->cosp2Th0Phi*(-9*(-614880 + 842300*var->e02 - 601478*var->e04 + 74989*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e03*(9*pms->cosp2Th0Phi*(-1154880 + 3941400*var->e02 - 2732928*var->e04 + 1197301*var->e06)*(-1 + 2*pms->eta) - 2880*(17041 + 5070*pms->eta) - 432*var->e04*(-539659 + 165024*pms->eta) + 360*var->e02*(-946697 + 189714*pms->eta) + var->e06*(-109807547 + 26668902*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/6635520;
	REAL8 PN2=(var->e03*(-1440 + 1800*var->e02 - 774*var->e04 + 197*var->e06)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/270;
	REAL8 PN1=(pms->dm*var->e03*(-53640 + 39240*var->e02 - 12483*var->e04 + 1486*var->e06)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/17280;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1658880*(var->e03*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((var->e04*(33718374 - 200734398*pms->eta) - 1440*(40967 + 211775*pms->eta) + 180*var->e02*(161207 + 1647839*pms->eta) + var->e06*(5148265 + 19870777*pms->eta))*pms->sigx) - 4*pms->dm*(39129120 - 25299900*var->e02 + 22557753*var->e04 + 2348129*var->e06)*pms->sx + pms->cosp2Th0Phi*(-9*(-614880 + 842300*var->e02 - 601478*var->e04 + 74989*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e03*(9*pms->cosp2Th0Phi*(-1154880 + 3941400*var->e02 - 2732928*var->e04 + 1197301*var->e06)*(-1 + 2*pms->eta) - 2880*(17041 + 5070*pms->eta) - 432*var->e04*(-539659 + 165024*pms->eta) + 360*var->e02*(-946697 + 189714*pms->eta) + var->e06*(-109807547 + 26668902*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/6635520;
	REAL8 PN2=(var->e03*(-1440 + 1800*var->e02 - 774*var->e04 + 197*var->e06)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/270;
	REAL8 PN1=(pms->dm*var->e03*(-53640 + 39240*var->e02 - 12483*var->e04 + 1486*var->e06)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/17280;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl4_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2764800*(pms->cos0Thp2Phi*var->e02*(pms->cosp2Th0Phi*(594720 + 19361040*var->e02 - 28685610*var->e04 + 20026327*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 1440*(-114643 + 328255*pms->eta + 20965*pms->eta2) + 240*var->e02*(-1528639 + 4388715*pms->eta + 255985*pms->eta2) - 30*var->e04*(2633917 - 11383385*pms->eta + 8528025*pms->eta2) + var->e06*(46559657 - 209428165*pms->eta + 206614525*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(pms->cos0Thp2Phi*var->e02*(-1440 + 3600*var->e02 - 3030*var->e04 + 1177*var->e06)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/90;
	REAL8 PN2=-1.0/5760*(pms->cos0Thp2Phi*var->e02*(-38520 + 75900*var->e02 - 43620*var->e04 + 10069*var->e06)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl4_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2764800*(pms->cos0Thp2Phi*var->e02*(pms->cosp2Th0Phi*(594720 + 19361040*var->e02 - 28685610*var->e04 + 20026327*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 1440*(-114643 + 328255*pms->eta + 20965*pms->eta2) + 240*var->e02*(-1528639 + 4388715*pms->eta + 255985*pms->eta2) - 30*var->e04*(2633917 - 11383385*pms->eta + 8528025*pms->eta2) + var->e06*(46559657 - 209428165*pms->eta + 206614525*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(pms->cos0Thp2Phi*var->e02*(-1440 + 3600*var->e02 - 3030*var->e04 + 1177*var->e06)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/90;
	REAL8 PN2=-1.0/5760*(pms->cos0Thp2Phi*var->e02*(-38520 + 75900*var->e02 - 43620*var->e04 + 10069*var->e06)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((481536 - 2969856*var->e02 + 5416224*var->e04 - 4095200*var->e06 + 1534889*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 384*pms->dm*(2304 - 10944*var->e02 + 16896*var->e04 - 11620*var->e06 + 4165*var->e08)*pms->sx)*var->vom6)/221184;
	REAL8 PN3=(pms->dm*var->e0*(-10010880 + 36869760*var->e02 - 36261120*var->e04 + 8848960*var->e06 + 1553413*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/2211840;
	return PN4+PN3;
}

REAL8 cpart_UPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((481536 - 2969856*var->e02 + 5416224*var->e04 - 4095200*var->e06 + 1534889*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 384*pms->dm*(2304 - 10944*var->e02 + 16896*var->e04 - 11620*var->e06 + 4165*var->e08)*pms->sx)*var->vom6)/221184;
	REAL8 PN3=(pms->dm*var->e0*(-10010880 + 36869760*var->e02 - 36261120*var->e04 + 8848960*var->e06 + 1553413*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/2211840;
	return PN4+PN3;
}

REAL8 spart_UPartsl4_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/552960*(pms->cos0Thp4Phi*(-589824 + 4835232*var->e02 - 8019504*var->e04 + 1267588*var->e06 + 4681423*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl4_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/552960*(pms->cos0Thp4Phi*(-589824 + 4835232*var->e02 - 8019504*var->e04 + 1267588*var->e06 + 4681423*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl5_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(262120625*pms->cos0Thp4Phi*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/7134511104;
	return PN4;
}

REAL8 cpart_UPartsl5_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(262120625*pms->cos0Thp4Phi*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/7134511104;
	return PN4;
}

REAL8 spart_UPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(3125*var->e08*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(479*(-1 + 3*pms->eta)*pms->sigx + 3081*pms->dm*pms->sx)*var->vom6)/198180864;
	REAL8 PN3=(-28613125*pms->dm*var->e08*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/198180864;
	return PN4+PN3;
}

REAL8 cpart_UPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(3125*var->e08*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(479*(-1 + 3*pms->eta)*pms->sigx + 3081*pms->dm*pms->sx)*var->vom6)/198180864;
	REAL8 PN3=(-28613125*pms->dm*var->e08*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/198180864;
	return PN4+PN3;
}

REAL8 spart_UPartsl5_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1981808640*(pms->cos0Thp2Phi*var->e07*(var->e02*(-14379037979 + 45565500121*pms->eta - 3765787545*pms->eta2) + pms->cosp2Th0Phi*(1407922912 + 719033853*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 32*(562839893 - 1886264827*pms->eta + 578112115*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(3125*pms->cos0Thp2Phi*(-864 + 53*var->e02)*var->e07*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/8257536;
	REAL8 PN2=(-625*pms->cos0Thp2Phi*(-11616 + 4817*var->e02)*var->e07*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/16515072;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl5_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1981808640*(pms->cos0Thp2Phi*var->e07*(var->e02*(-14379037979 + 45565500121*pms->eta - 3765787545*pms->eta2) + pms->cosp2Th0Phi*(1407922912 + 719033853*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 32*(562839893 - 1886264827*pms->eta + 578112115*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(3125*pms->cos0Thp2Phi*(-864 + 53*var->e02)*var->e07*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/8257536;
	REAL8 PN2=(-625*pms->cos0Thp2Phi*(-11616 + 4817*var->e02)*var->e07*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/16515072;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((14*(7412737 - 96145763*pms->eta) + var->e02*(85427849 + 762500789*pms->eta))*pms->sigx) + pms->dm*(238362866 + 260815733*var->e02)*pms->sx + 25*pms->cosp2Th0Phi*(-7*(679842 + 59023*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 625*pms->dm*(-434 + 299*var->e02)*pms->sx))*var->vom6)/123863040;
	REAL8 PN3=(pms->dm*var->e06*(15*pms->cosp2Th0Phi*(1555029 + 575149*var->e02)*(-1 + 2*pms->eta) + 7*(37466981 + 666870*pms->eta) - 5*var->e02*(1385945 + 8349342*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/61931520;
	REAL8 PN2=(3125*(-7 + 2*var->e02)*var->e06*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/64512;
	REAL8 PN1=(3125*pms->dm*(-98 + 61*var->e02)*var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/258048;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((14*(7412737 - 96145763*pms->eta) + var->e02*(85427849 + 762500789*pms->eta))*pms->sigx) + pms->dm*(238362866 + 260815733*var->e02)*pms->sx + 25*pms->cosp2Th0Phi*(-7*(679842 + 59023*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 625*pms->dm*(-434 + 299*var->e02)*pms->sx))*var->vom6)/123863040;
	REAL8 PN3=(pms->dm*var->e06*(15*pms->cosp2Th0Phi*(1555029 + 575149*var->e02)*(-1 + 2*pms->eta) + 7*(37466981 + 666870*pms->eta) - 5*var->e02*(1385945 + 8349342*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/61931520;
	REAL8 PN2=(3125*(-7 + 2*var->e02)*var->e06*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/64512;
	REAL8 PN1=(3125*pms->dm*(-98 + 61*var->e02)*var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/258048;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl5_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*(-4*pms->cosp2Th0Phi*(6720*(1460349 - 6529213*pms->eta + 5604141*pms->eta2) - 56*var->e02*(-392142273 + 590975065*pms->eta + 2176912455*pms->eta2) + var->e04*(4454529597 - 37631338925*pms->eta + 86192431485*pms->eta2)) + 3*(3*pms->cosp4Th0Phi*(282031680 - 827615656*var->e02 + 424706721*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 6720*(-139438167 - 11608803*pms->eta2 - 12254976*pms->sigx2 + 5407488*pms->kappa1*pms->sigx2 - 5407488*pms->dm*pms->kappa1*pms->sigx2 + 5407488*pms->kappa2*pms->sigx2 + 5407488*pms->dm*pms->kappa2*pms->sigx2 + pms->eta*(154233379 - 4608*(-5944 + 2347*pms->kappa1 + 2347*pms->kappa2)*pms->sigx2) + 4608*(-5944*pms->dm + 2347*(-1 + pms->dm)*pms->kappa1 + 2347*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 4608*(-5944 + 2347*pms->kappa1 + 2347*pms->kappa2)*pms->sx2) + 56*var->e02*(11355942869 + 3106224025*pms->eta2 + 172350720*pms->sigx2 + 35024640*pms->kappa1*pms->sigx2 - 35024640*pms->dm*pms->kappa1*pms->sigx2 + 35024640*pms->kappa2*pms->sigx2 + 35024640*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(1979768407 + 512*(108008 + 9121*pms->kappa1 + 9121*pms->kappa2)*pms->sigx2) + 7680*(108008*pms->dm + 9121*(-1 + pms->dm)*pms->kappa1 + 9121*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(108008 + 9121*pms->kappa1 + 9121*pms->kappa2)*pms->sx2) + var->e04*(-490912530279 + 697377999155*pms->eta - 97615648115*pms->eta2 - 38400*pms->eta*(-2112776 + 1202513*pms->kappa1 + 1202513*pms->kappa2)*pms->sigx2 - 19200*(2258901 + 1202513*(-1 + pms->dm)*pms->kappa1 - 1202513*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + 38400*(-2112776*pms->dm + 1202513*(-1 + pms->dm)*pms->kappa1 + 1202513*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 38400*(-2112776 + 1202513*pms->kappa1 + 1202513*pms->kappa2)*pms->sx2)))*var->vom6)/11890851840;
	REAL8 PN3=(var->e05*(pms->dm*(19766208 - 14006552*var->e02 + 8564203*var->e04)*pms->sigx + 3*(16817472 - 13619368*var->e02 + 7302177*var->e04)*pms->sx)*var->vom5)/1548288;
	REAL8 PN2=(var->e05*(7*pms->cosp2Th0Phi*(1981248 - 2890936*var->e02 + 1773593*var->e04)*(-1 + 3*pms->eta) + 1344*(-162441 + 31387*pms->eta) - 56*var->e02*(-5438313 + 2118091*pms->eta) + var->e04*(-167120889 + 64790923*pms->eta))*var->vom4)/12386304;
	REAL8 PN0=(625*(1344 - 1400*var->e02 + 625*var->e04)*var->e05*var->vom2)/516096;
	return PN4+PN3+PN2+PN0;
}

REAL8 cpart_UPartsl5_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*(-4*pms->cosp2Th0Phi*(6720*(1460349 - 6529213*pms->eta + 5604141*pms->eta2) - 56*var->e02*(-392142273 + 590975065*pms->eta + 2176912455*pms->eta2) + var->e04*(4454529597 - 37631338925*pms->eta + 86192431485*pms->eta2)) + 3*(3*pms->cosp4Th0Phi*(282031680 - 827615656*var->e02 + 424706721*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 6720*(-139438167 - 11608803*pms->eta2 - 12254976*pms->sigx2 + 5407488*pms->kappa1*pms->sigx2 - 5407488*pms->dm*pms->kappa1*pms->sigx2 + 5407488*pms->kappa2*pms->sigx2 + 5407488*pms->dm*pms->kappa2*pms->sigx2 + pms->eta*(154233379 - 4608*(-5944 + 2347*pms->kappa1 + 2347*pms->kappa2)*pms->sigx2) + 4608*(-5944*pms->dm + 2347*(-1 + pms->dm)*pms->kappa1 + 2347*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 4608*(-5944 + 2347*pms->kappa1 + 2347*pms->kappa2)*pms->sx2) + 56*var->e02*(11355942869 + 3106224025*pms->eta2 + 172350720*pms->sigx2 + 35024640*pms->kappa1*pms->sigx2 - 35024640*pms->dm*pms->kappa1*pms->sigx2 + 35024640*pms->kappa2*pms->sigx2 + 35024640*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(1979768407 + 512*(108008 + 9121*pms->kappa1 + 9121*pms->kappa2)*pms->sigx2) + 7680*(108008*pms->dm + 9121*(-1 + pms->dm)*pms->kappa1 + 9121*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(108008 + 9121*pms->kappa1 + 9121*pms->kappa2)*pms->sx2) + var->e04*(-490912530279 + 697377999155*pms->eta - 97615648115*pms->eta2 - 38400*pms->eta*(-2112776 + 1202513*pms->kappa1 + 1202513*pms->kappa2)*pms->sigx2 - 19200*(2258901 + 1202513*(-1 + pms->dm)*pms->kappa1 - 1202513*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + 38400*(-2112776*pms->dm + 1202513*(-1 + pms->dm)*pms->kappa1 + 1202513*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 38400*(-2112776 + 1202513*pms->kappa1 + 1202513*pms->kappa2)*pms->sx2)))*var->vom6)/11890851840;
	REAL8 PN3=(var->e05*(pms->dm*(19766208 - 14006552*var->e02 + 8564203*var->e04)*pms->sigx + 3*(16817472 - 13619368*var->e02 + 7302177*var->e04)*pms->sx)*var->vom5)/1548288;
	REAL8 PN2=(var->e05*(7*pms->cosp2Th0Phi*(1981248 - 2890936*var->e02 + 1773593*var->e04)*(-1 + 3*pms->eta) + 1344*(-162441 + 31387*pms->eta) - 56*var->e02*(-5438313 + 2118091*pms->eta) + var->e04*(-167120889 + 64790923*pms->eta))*var->vom4)/12386304;
	REAL8 PN0=(625*(1344 - 1400*var->e02 + 625*var->e04)*var->e05*var->vom2)/516096;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((var->e04*(2599199903 - 21884911357*pms->eta) + 4608*var->e02*(403812 + 6519967*pms->eta) - 960*(3959903 + 24189443*pms->eta))*pms->sigx + pms->dm*(11557548480 - 11375906112*var->e02 + 9005878639*var->e04)*pms->sx + 25*pms->cosp2Th0Phi*(-((17586240 - 29778432*var->e02 + 23445617*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 625*pms->dm*(3648 - 7872*var->e02 + 6097*var->e04)*pms->sx))*var->vom6)/70778880;
	REAL8 PN3=-1.0/23592960*(pms->dm*var->e04*(5*pms->cosp2Th0Phi*(16899264 - 53393376*var->e02 + 46924079*var->e04)*(-1 + 2*pms->eta) + 320*(-24133 + 296586*pms->eta) - 1248*var->e02*(-1971467 + 372790*pms->eta) + 5*var->e04*(-461987881 + 114276946*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(-3125*var->e04*(192 - 288*var->e02 + 163*var->e04)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/73728;
	REAL8 PN1=-1.0/147456*(pms->dm*var->e04*(663744 - 679680*var->e02 + 299215*var->e04)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((var->e04*(2599199903 - 21884911357*pms->eta) + 4608*var->e02*(403812 + 6519967*pms->eta) - 960*(3959903 + 24189443*pms->eta))*pms->sigx + pms->dm*(11557548480 - 11375906112*var->e02 + 9005878639*var->e04)*pms->sx + 25*pms->cosp2Th0Phi*(-((17586240 - 29778432*var->e02 + 23445617*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 625*pms->dm*(3648 - 7872*var->e02 + 6097*var->e04)*pms->sx))*var->vom6)/70778880;
	REAL8 PN3=-1.0/23592960*(pms->dm*var->e04*(5*pms->cosp2Th0Phi*(16899264 - 53393376*var->e02 + 46924079*var->e04)*(-1 + 2*pms->eta) + 320*(-24133 + 296586*pms->eta) - 1248*var->e02*(-1971467 + 372790*pms->eta) + 5*var->e04*(-461987881 + 114276946*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(-3125*var->e04*(192 - 288*var->e02 + 163*var->e04)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/73728;
	REAL8 PN1=-1.0/147456*(pms->dm*var->e04*(663744 - 679680*var->e02 + 299215*var->e04)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl5_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/637009920*(pms->cos0Thp2Phi*var->e03*(3*pms->cosp2Th0Phi*(-239662080 + 3942469440*var->e02 - 6619332168*var->e04 + 5121329813*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 46080*(-1791441 + 5140375*pms->eta + 188913*pms->eta2) + 2880*var->e02*(-59168301 + 167633735*pms->eta + 8526201*pms->eta2) - 72*var->e04*(249049095 - 1556673049*pms->eta + 1641830865*pms->eta2) + var->e06*(56868917895 - 219466189373*pms->eta + 126409717965*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(3125*pms->cos0Thp2Phi*var->e03*(-9216 + 24768*var->e02 - 24264*var->e04 + 11903*var->e06)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/884736;
	REAL8 PN2=-1.0/5308416*(pms->cos0Thp2Phi*var->e03*(-72336384 + 162044352*var->e02 - 123266952*var->e04 + 45112019*var->e06)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl5_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/637009920*(pms->cos0Thp2Phi*var->e03*(3*pms->cosp2Th0Phi*(-239662080 + 3942469440*var->e02 - 6619332168*var->e04 + 5121329813*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 46080*(-1791441 + 5140375*pms->eta + 188913*pms->eta2) + 2880*var->e02*(-59168301 + 167633735*pms->eta + 8526201*pms->eta2) - 72*var->e04*(249049095 - 1556673049*pms->eta + 1641830865*pms->eta2) + var->e06*(56868917895 - 219466189373*pms->eta + 126409717965*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(3125*pms->cos0Thp2Phi*var->e03*(-9216 + 24768*var->e02 - 24264*var->e04 + 11903*var->e06)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/884736;
	REAL8 PN2=-1.0/5308416*(pms->cos0Thp2Phi*var->e03*(-72336384 + 162044352*var->e02 - 123266952*var->e04 + 45112019*var->e06)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-25*var->e02*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-495360 + 2738304*var->e02 - 5092350*var->e04 + 4361495*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 375*pms->dm*(-2304 + 10368*var->e02 - 16770*var->e04 + 13171*var->e06)*pms->sx)*var->vom6)/1769472;
	REAL8 PN3=(pms->dm*var->e02*(-12774528 + 47844096*var->e02 - 58629045*var->e04 + 30054815*var->e06)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/884736;
	return PN4+PN3;
}

REAL8 cpart_UPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-25*var->e02*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-495360 + 2738304*var->e02 - 5092350*var->e04 + 4361495*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 375*pms->dm*(-2304 + 10368*var->e02 - 16770*var->e04 + 13171*var->e06)*pms->sx)*var->vom6)/1769472;
	REAL8 PN3=(pms->dm*var->e02*(-12774528 + 47844096*var->e02 - 58629045*var->e04 + 30054815*var->e06)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/884736;
	return PN4+PN3;
}

REAL8 spart_UPartsl5_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e0*(404176896 - 2613786624*var->e02 + 5083048704*var->e04 - 3747316400*var->e06 + 705267129*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/56623104;
	return PN4;
}

REAL8 cpart_UPartsl5_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e0*(404176896 - 2613786624*var->e02 + 5083048704*var->e04 - 3747316400*var->e06 + 705267129*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/56623104;
	return PN4;
}

REAL8 spart_UPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(243*var->e09*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((-1 + 3*pms->eta)*pms->sigx + 8*pms->dm*pms->sx)*var->vom6)/28672;
	REAL8 PN3=(-55809*pms->dm*var->e09*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/286720;
	return PN4+PN3;
}

REAL8 cpart_UPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(243*var->e09*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((-1 + 3*pms->eta)*pms->sigx + 8*pms->dm*pms->sx)*var->vom6)/28672;
	REAL8 PN3=(-55809*pms->dm*var->e09*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/286720;
	return PN4+PN3;
}

REAL8 spart_UPartsl6_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/4300800*(pms->cos0Thp2Phi*var->e08*(-51650917 + 173767065*pms->eta - 55810125*pms->eta2 + 3917913*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-243*pms->cos0Thp2Phi*var->e08*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/560;
	REAL8 PN2=(5049*pms->cos0Thp2Phi*var->e08*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/8960;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl6_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/4300800*(pms->cos0Thp2Phi*var->e08*(-51650917 + 173767065*pms->eta - 55810125*pms->eta2 + 3917913*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-243*pms->cos0Thp2Phi*var->e08*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/560;
	REAL8 PN2=(5049*pms->cos0Thp2Phi*var->e08*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/8960;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((1134358 - 14509666*pms->eta + 3*var->e02*(219110 + 3817483*pms->eta))*pms->sigx) + pms->dm*(1726016 + 2062053*var->e02)*pms->sx + pms->cosp2Th0Phi*((-1151366 + 218943*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 5832*pms->dm*(-12 + 11*var->e02)*pms->sx))*var->vom6)/860160;
	REAL8 PN3=(pms->dm*var->e07*(5474981 + 100134*pms->eta + 3*pms->cosp2Th0Phi*(121087 + 44311*var->e02)*(-1 + 2*pms->eta) - 2*var->e02*(953132 + 434853*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/860160;
	REAL8 PN2=(243*(-2 + var->e02)*var->e07*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/1120;
	REAL8 PN1=(81*pms->dm*(-328 + 281*var->e02)*var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/17920;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((1134358 - 14509666*pms->eta + 3*var->e02*(219110 + 3817483*pms->eta))*pms->sigx) + pms->dm*(1726016 + 2062053*var->e02)*pms->sx + pms->cosp2Th0Phi*((-1151366 + 218943*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 5832*pms->dm*(-12 + 11*var->e02)*pms->sx))*var->vom6)/860160;
	REAL8 PN3=(pms->dm*var->e07*(5474981 + 100134*pms->eta + 3*pms->cosp2Th0Phi*(121087 + 44311*var->e02)*(-1 + 2*pms->eta) - 2*var->e02*(953132 + 434853*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/860160;
	REAL8 PN2=(243*(-2 + var->e02)*var->e07*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/1120;
	REAL8 PN1=(81*pms->dm*(-328 + 281*var->e02)*var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/17920;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl6_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e06*(4*pms->cosp2Th0Phi*(-7*(2159709 - 14384225*pms->eta + 21690825*pms->eta2) + var->e02*(-89672697 + 131943565*pms->eta + 494541195*pms->eta2)) - 3*(4347*pms->cosp4Th0Phi*(-891 + 2471*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + var->e02*(-3127587081 - 746492685*pms->eta2 - 622080*(162 + 41*(-1 + pms->dm)*pms->kappa1 - 41*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + pms->eta*(6976405805 - 1244160*(-242 + 41*pms->kappa1 + 41*pms->kappa2)*pms->sigx2) + 1244160*(-242*pms->dm + 41*(-1 + pms->dm)*pms->kappa1 + 41*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1244160*(-242 + 41*pms->kappa1 + 41*pms->kappa2)*pms->sx2) + 7*(465494883 + 44749455*pms->eta2 + 5760*(6334 + 2735*(-1 + pms->dm)*pms->kappa1 - 2735*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + 5*pms->eta*(-110301667 + 2304*(-7198 + 2735*pms->kappa1 + 2735*pms->kappa2)*pms->sigx2) - 11520*(-7198*pms->dm + 2735*(-1 + pms->dm)*pms->kappa1 + 2735*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx - 11520*(-7198 + 2735*pms->kappa1 + 2735*pms->kappa2)*pms->sx2)))*var->vom6)/25804800;
	REAL8 PN3=(var->e06*(91*pms->dm*(454 - 443*var->e02)*pms->sigx - 2*(-53410 + 57161*var->e02)*pms->sx)*var->vom5)/2240;
	REAL8 PN2=-1.0/26880*(var->e06*(721707 - 152145*pms->eta + pms->cosp2Th0Phi*(-47117 + 80489*var->e02)*(-1 + 3*pms->eta) + 3*var->e02*(-394469 + 142623*pms->eta))*var->vom4);
	REAL8 PN0=(-81*(-7 + 9*var->e02)*var->e06*var->vom2)/280;
	return PN4+PN3+PN2+PN0;
}

REAL8 cpart_UPartsl6_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e06*(4*pms->cosp2Th0Phi*(-7*(2159709 - 14384225*pms->eta + 21690825*pms->eta2) + var->e02*(-89672697 + 131943565*pms->eta + 494541195*pms->eta2)) - 3*(4347*pms->cosp4Th0Phi*(-891 + 2471*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + var->e02*(-3127587081 - 746492685*pms->eta2 - 622080*(162 + 41*(-1 + pms->dm)*pms->kappa1 - 41*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + pms->eta*(6976405805 - 1244160*(-242 + 41*pms->kappa1 + 41*pms->kappa2)*pms->sigx2) + 1244160*(-242*pms->dm + 41*(-1 + pms->dm)*pms->kappa1 + 41*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1244160*(-242 + 41*pms->kappa1 + 41*pms->kappa2)*pms->sx2) + 7*(465494883 + 44749455*pms->eta2 + 5760*(6334 + 2735*(-1 + pms->dm)*pms->kappa1 - 2735*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + 5*pms->eta*(-110301667 + 2304*(-7198 + 2735*pms->kappa1 + 2735*pms->kappa2)*pms->sigx2) - 11520*(-7198*pms->dm + 2735*(-1 + pms->dm)*pms->kappa1 + 2735*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx - 11520*(-7198 + 2735*pms->kappa1 + 2735*pms->kappa2)*pms->sx2)))*var->vom6)/25804800;
	REAL8 PN3=(var->e06*(91*pms->dm*(454 - 443*var->e02)*pms->sigx - 2*(-53410 + 57161*var->e02)*pms->sx)*var->vom5)/2240;
	REAL8 PN2=-1.0/26880*(var->e06*(721707 - 152145*pms->eta + pms->cosp2Th0Phi*(-47117 + 80489*var->e02)*(-1 + 3*pms->eta) + 3*var->e02*(-394469 + 142623*pms->eta))*var->vom4);
	REAL8 PN0=(-81*(-7 + 9*var->e02)*var->e06*var->vom2)/280;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((-336*(396023 + 2853255*pms->eta) + 28*var->e02*(2218969 + 54766805*pms->eta) - 3*var->e04*(-40277425 + 419537863*pms->eta))*pms->sigx + 4*pms->dm*(116308752 - 151688432*var->e02 + 125304345*var->e04)*pms->sx + pms->cosp2Th0Phi*(-((18819696 - 37481948*var->e02 + 33485121*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(56 - 133*var->e02 + 121*var->e04)*pms->sx))*var->vom6)/1720320;
	REAL8 PN3=-1.0/3440640*(pms->dm*var->e05*(3*pms->cosp2Th0Phi*(8144976 - 25792060*var->e02 + 26793371*var->e04)*(-1 + 2*pms->eta) + 336*(-193693 + 74618*pms->eta) - 28*var->e02*(-25066573 + 4486410*pms->eta) + var->e04*(-802420415 + 175446846*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(-243*(112 - 196*var->e02 + 137*var->e04)*var->e05*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/2240;
	REAL8 PN1=(-3*pms->dm*(76496 - 99624*var->e02 + 56379*var->e04)*var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/35840;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((-336*(396023 + 2853255*pms->eta) + 28*var->e02*(2218969 + 54766805*pms->eta) - 3*var->e04*(-40277425 + 419537863*pms->eta))*pms->sigx + 4*pms->dm*(116308752 - 151688432*var->e02 + 125304345*var->e04)*pms->sx + pms->cosp2Th0Phi*(-((18819696 - 37481948*var->e02 + 33485121*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(56 - 133*var->e02 + 121*var->e04)*pms->sx))*var->vom6)/1720320;
	REAL8 PN3=-1.0/3440640*(pms->dm*var->e05*(3*pms->cosp2Th0Phi*(8144976 - 25792060*var->e02 + 26793371*var->e04)*(-1 + 2*pms->eta) + 336*(-193693 + 74618*pms->eta) - 28*var->e02*(-25066573 + 4486410*pms->eta) + var->e04*(-802420415 + 175446846*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(-243*(112 - 196*var->e02 + 137*var->e04)*var->e05*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/2240;
	REAL8 PN1=(-3*pms->dm*(76496 - 99624*var->e02 + 56379*var->e04)*var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/35840;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl6_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e04*(9*pms->cosp2Th0Phi*(1067440 - 9256312*var->e02 + 16755977*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 80*(-5655843 + 16216015*pms->eta + 268845*pms->eta2) - 8*var->e02*(-112743579 + 314534855*pms->eta + 13551105*pms->eta2) + var->e04*(69126363 - 594948295*pms->eta + 652044675*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/1843200;
	REAL8 PN3=(-243*pms->cos0Thp2Phi*var->e04*(80 - 232*var->e02 + 259*var->e04)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/320;
	REAL8 PN2=(pms->cos0Thp2Phi*var->e04*(192800 - 481708*var->e02 + 444815*var->e04)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/7680;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl6_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e04*(9*pms->cosp2Th0Phi*(1067440 - 9256312*var->e02 + 16755977*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 80*(-5655843 + 16216015*pms->eta + 268845*pms->eta2) - 8*var->e02*(-112743579 + 314534855*pms->eta + 13551105*pms->eta2) + var->e04*(69126363 - 594948295*pms->eta + 652044675*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/1843200;
	REAL8 PN3=(-243*pms->cos0Thp2Phi*var->e04*(80 - 232*var->e02 + 259*var->e04)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/320;
	REAL8 PN2=(pms->cos0Thp2Phi*var->e04*(192800 - 481708*var->e02 + 444815*var->e04)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/7680;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/122880*(var->e03*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-2226880 + 11865360*var->e02 - 22948368*var->e04 + 21891595*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(-80 + 360*var->e02 - 618*var->e04 + 545*var->e06)*pms->sx)*var->vom6);
	REAL8 PN3=(pms->dm*var->e03*(-2985280 + 11613520*var->e02 - 16305776*var->e04 + 10997343*var->e06)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/81920;
	return PN4+PN3;
}

REAL8 cpart_UPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/122880*(var->e03*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-2226880 + 11865360*var->e02 - 22948368*var->e04 + 21891595*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(-80 + 360*var->e02 - 618*var->e04 + 545*var->e06)*pms->sx)*var->vom6);
	REAL8 PN3=(pms->dm*var->e03*(-2985280 + 11613520*var->e02 - 16305776*var->e04 + 10997343*var->e06)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/81920;
	return PN4+PN3;
}

REAL8 spart_UPartsl6_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/51200*(pms->cos0Thp4Phi*var->e02*(-1422360 + 8566080*var->e02 - 17939275*var->e04 + 17271121*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl6_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/51200*(pms->cos0Thp4Phi*var->e02*(-1422360 + 8566080*var->e02 - 17939275*var->e04 + 17271121*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl7_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/267544166400*(pms->cos0Thp2Phi*var->e09*(-4266263211093 + 14402480354135*pms->eta - 4818777742695*pms->eta2 + 314322306627*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-30471091*pms->cos0Thp2Phi*var->e09*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/53084160;
	REAL8 PN2=(231415583*pms->cos0Thp2Phi*var->e09*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/318504960;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl7_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/267544166400*(pms->cos0Thp2Phi*var->e09*(-4266263211093 + 14402480354135*pms->eta - 4818777742695*pms->eta2 + 314322306627*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-30471091*pms->cos0Thp2Phi*var->e09*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/53084160;
	REAL8 PN2=(231415583*pms->cos0Thp2Phi*var->e09*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/318504960;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1981808640*(var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((3867989383 - 50321596853*pms->eta)*pms->sigx - 4112756833*pms->dm*pms->sx + 49*pms->cosp2Th0Phi*(75348431*(-1 + 3*pms->eta)*pms->sigx + 4823609*pms->dm*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e08*(6142158875 + 127386826*pms->eta + 309930131*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/660602880;
	REAL8 PN2=(-823543*var->e08*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/1474560;
	REAL8 PN1=(-5529503*pms->dm*var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/2949120;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1981808640*(var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((3867989383 - 50321596853*pms->eta)*pms->sigx - 4112756833*pms->dm*pms->sx + 49*pms->cosp2Th0Phi*(75348431*(-1 + 3*pms->eta)*pms->sigx + 4823609*pms->dm*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e08*(6142158875 + 127386826*pms->eta + 309930131*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/660602880;
	REAL8 PN2=(-823543*var->e08*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/1474560;
	REAL8 PN1=(-5529503*pms->dm*var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/2949120;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl7_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*(-9*pms->cosp4Th0Phi*(-3220095328 + 9049217937*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 4*pms->cosp2Th0Phi*(32*(91309497 + 3588361775*pms->eta - 11013721935*pms->eta2) + var->e02*(-226263517011 + 345248416675*pms->eta + 1182951991725*pms->eta2)) + 96*(-208661610221 + 261899934225*pms->eta - 22556544145*pms->eta2 - 14933064960*pms->sigx2 + 6337102080*pms->kappa1*pms->sigx2 - 6337102080*pms->dm*pms->kappa1*pms->sigx2 + 6337102080*pms->kappa2*pms->sigx2 + 6337102080*pms->dm*pms->kappa2*pms->sigx2 - 7680*pms->eta*(-4477064 + 1650287*pms->kappa1 + 1650287*pms->kappa2)*pms->sigx2 + 7680*(-4477064*pms->dm + 1650287*(-1 + pms->dm)*pms->kappa1 + 1650287*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-4477064 + 1650287*pms->kappa1 + 1650287*pms->kappa2)*pms->sx2) - 3*var->e02*(-8268760511223 - 1856351673155*pms->eta2 - 3840*(82993761 + 26967229*(-1 + pms->dm)*pms->kappa1 - 26967229*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(-3402441161575 + 1536*(-112053064 + 26967229*pms->kappa1 + 26967229*pms->kappa2)*pms->sigx2) + 7680*(-112053064*pms->dm + 26967229*(-1 + pms->dm)*pms->kappa1 + 26967229*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-112053064 + 26967229*pms->kappa1 + 26967229*pms->kappa2)*pms->sx2))*var->vom6)/33973862400;
	REAL8 PN3=(var->e07*(pms->dm*(116912672 - 144979567*var->e02)*pms->sigx + (305355936 - 405843399*var->e02)*pms->sx)*var->vom5)/4423680;
	REAL8 PN2=-1.0/35389440*(var->e07*(32*(44201601 - 9942547*pms->eta) + pms->cosp2Th0Phi*(-94187488 + 184441343*var->e02)*(-1 + 3*pms->eta) + var->e02*(-2669843625 + 923239963*pms->eta))*var->vom4);
	REAL8 PN0=(-117649*(-32 + 49*var->e02)*var->e07*var->vom2)/1474560;
	return PN4+PN3+PN2+PN0;
}

REAL8 cpart_UPartsl7_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*(-9*pms->cosp4Th0Phi*(-3220095328 + 9049217937*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 4*pms->cosp2Th0Phi*(32*(91309497 + 3588361775*pms->eta - 11013721935*pms->eta2) + var->e02*(-226263517011 + 345248416675*pms->eta + 1182951991725*pms->eta2)) + 96*(-208661610221 + 261899934225*pms->eta - 22556544145*pms->eta2 - 14933064960*pms->sigx2 + 6337102080*pms->kappa1*pms->sigx2 - 6337102080*pms->dm*pms->kappa1*pms->sigx2 + 6337102080*pms->kappa2*pms->sigx2 + 6337102080*pms->dm*pms->kappa2*pms->sigx2 - 7680*pms->eta*(-4477064 + 1650287*pms->kappa1 + 1650287*pms->kappa2)*pms->sigx2 + 7680*(-4477064*pms->dm + 1650287*(-1 + pms->dm)*pms->kappa1 + 1650287*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-4477064 + 1650287*pms->kappa1 + 1650287*pms->kappa2)*pms->sx2) - 3*var->e02*(-8268760511223 - 1856351673155*pms->eta2 - 3840*(82993761 + 26967229*(-1 + pms->dm)*pms->kappa1 - 26967229*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(-3402441161575 + 1536*(-112053064 + 26967229*pms->kappa1 + 26967229*pms->kappa2)*pms->sigx2) + 7680*(-112053064*pms->dm + 26967229*(-1 + pms->dm)*pms->kappa1 + 26967229*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-112053064 + 26967229*pms->kappa1 + 26967229*pms->kappa2)*pms->sx2))*var->vom6)/33973862400;
	REAL8 PN3=(var->e07*(pms->dm*(116912672 - 144979567*var->e02)*pms->sigx + (305355936 - 405843399*var->e02)*pms->sx)*var->vom5)/4423680;
	REAL8 PN2=-1.0/35389440*(var->e07*(32*(44201601 - 9942547*pms->eta) + pms->cosp2Th0Phi*(-94187488 + 184441343*var->e02)*(-1 + 3*pms->eta) + var->e02*(-2669843625 + 923239963*pms->eta))*var->vom4);
	REAL8 PN0=(-117649*(-32 + 49*var->e02)*var->e07*var->vom2)/1474560;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/123863040*(var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(14*(949857931 + 8098212223*pms->eta)*pms->sigx - var->e02*(5374846837 + 214834980145*pms->eta)*pms->sigx + pms->dm*(-53862768470 + 86833581889*var->e02)*pms->sx + 49*pms->cosp2Th0Phi*(-((-46845642 + 106616669*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 117649*pms->dm*(-58 + 151*var->e02)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e06*(91*(37872083 - 8800230*pms->eta) + 21*pms->cosp2Th0Phi*(-38294331 + 125452673*var->e02)*(-1 + 2*pms->eta) + var->e02*(-23853691723 + 4073215398*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/61931520;
	REAL8 PN2=(823543*(-1 + 2*var->e02)*var->e06*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/46080;
	REAL8 PN1=(pms->dm*(-331978 + 522137*var->e02)*var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/36864;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/123863040*(var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(14*(949857931 + 8098212223*pms->eta)*pms->sigx - var->e02*(5374846837 + 214834980145*pms->eta)*pms->sigx + pms->dm*(-53862768470 + 86833581889*var->e02)*pms->sx + 49*pms->cosp2Th0Phi*(-((-46845642 + 106616669*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 117649*pms->dm*(-58 + 151*var->e02)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e06*(91*(37872083 - 8800230*pms->eta) + 21*pms->cosp2Th0Phi*(-38294331 + 125452673*var->e02)*(-1 + 2*pms->eta) + var->e02*(-23853691723 + 4073215398*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/61931520;
	REAL8 PN2=(823543*(-1 + 2*var->e02)*var->e06*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/46080;
	REAL8 PN1=(pms->dm*(-331978 + 522137*var->e02)*var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/36864;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl7_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e05*(7*pms->cosp2Th0Phi*(5234892864 - 36063702968*var->e02 + 69331592025*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 1344*(785083493 - 2244310255*pms->eta + 112735*pms->eta2) - 56*var->e02*(-36740366869 + 100538882395*pms->eta + 3567424045*pms->eta2) + 5*var->e04*(50592665723 - 379772850073*pms->eta + 321880796601*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/2477260800;
	REAL8 PN3=(-823543*pms->cos0Thp2Phi*(192 - 600*var->e02 + 751*var->e04)*var->e05*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/1474560;
	REAL8 PN2=(pms->cos0Thp2Phi*(128238144 - 352980008*var->e02 + 379379309*var->e04)*var->e05*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/2949120;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl7_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e05*(7*pms->cosp2Th0Phi*(5234892864 - 36063702968*var->e02 + 69331592025*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 1344*(785083493 - 2244310255*pms->eta + 112735*pms->eta2) - 56*var->e02*(-36740366869 + 100538882395*pms->eta + 3567424045*pms->eta2) + 5*var->e04*(50592665723 - 379772850073*pms->eta + 321880796601*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/2477260800;
	REAL8 PN3=(-823543*pms->cos0Thp2Phi*(192 - 600*var->e02 + 751*var->e04)*var->e05*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/1474560;
	REAL8 PN2=(pms->cos0Thp2Phi*(128238144 - 352980008*var->e02 + 379379309*var->e04)*var->e05*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/2949120;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(7*var->e04*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((208691520 - 1107174912*var->e02 + 2244508357*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 352947*pms->dm*(960 - 4416*var->e02 + 8071*var->e04)*pms->sx)*var->vom6)/35389440;
	REAL8 PN3=-1.0/35389440*(pms->dm*var->e04*(2846216640 - 11592728160*var->e02 + 18091897187*var->e04)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 cpart_UPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(7*var->e04*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((208691520 - 1107174912*var->e02 + 2244508357*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 352947*pms->dm*(960 - 4416*var->e02 + 8071*var->e04)*pms->sx)*var->vom6)/35389440;
	REAL8 PN3=-1.0/35389440*(pms->dm*var->e04*(2846216640 - 11592728160*var->e02 + 18091897187*var->e04)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl7_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2123366400*(pms->cos0Thp4Phi*var->e03*(-176807900160 + 1045673760960*var->e02 - 2321841013992*var->e04 + 2583024157147*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl7_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2123366400*(pms->cos0Thp4Phi*var->e03*(-176807900160 + 1045673760960*var->e02 - 2321841013992*var->e04 + 2583024157147*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/139345920*(var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((389920799 - 5223637651*pms->eta)*pms->sigx - 291618590*pms->dm*pms->sx + pms->cosp2Th0Phi*(360864897*(-1 + 3*pms->eta)*pms->sigx + 24117248*pms->dm*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e09*(3722132243 + 89652210*pms->eta + 142626807*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/278691840;
	REAL8 PN2=(-2048*var->e09*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/2835;
	REAL8 PN1=(-6784*pms->dm*var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/2835;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/139345920*(var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((389920799 - 5223637651*pms->eta)*pms->sigx - 291618590*pms->dm*pms->sx + pms->cosp2Th0Phi*(360864897*(-1 + 3*pms->eta)*pms->sigx + 24117248*pms->dm*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e09*(3722132243 + 89652210*pms->eta + 142626807*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/278691840;
	REAL8 PN2=(-2048*var->e09*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/2835;
	REAL8 PN1=(-6784*pms->dm*var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/2835;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl8_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e08*(pms->cosp2Th0Phi*(689050944 + 717040640*pms->eta - 8186087760*pms->eta2) + 3*(-34823851443 + 45926130815*pms->eta - 4154411535*pms->eta2 + 58603251*pms->cosp4Th0Phi*(1 - 5*pms->eta + 5*pms->eta2) - 2311169760*pms->sigx2 + 5377314240*pms->eta*pms->sigx2 + 966841200*pms->kappa1*pms->sigx2 - 966841200*pms->dm*pms->kappa1*pms->sigx2 - 1933682400*pms->eta*pms->kappa1*pms->sigx2 + 966841200*pms->kappa2*pms->sigx2 + 966841200*pms->dm*pms->kappa2*pms->sigx2 - 1933682400*pms->eta*pms->kappa2*pms->sigx2 + 1440*(-3734246*pms->dm + 1342835*(-1 + pms->dm)*pms->kappa1 + 1342835*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1440*(-3734246 + 1342835*pms->kappa1 + 1342835*pms->kappa2)*pms->sx2))*var->vom6)/116121600;
	REAL8 PN3=(var->e08*(4552793*pms->dm*pms->sigx + 11989170*pms->sx)*var->vom5)/120960;
	REAL8 PN2=(var->e08*(-56695941 + 13419743*pms->eta + 3833203*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4)/967680;
	REAL8 PN0=(1024*var->e08*var->vom2)/315;
	return PN4+PN3+PN2+PN0;
}

REAL8 cpart_UPartsl8_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e08*(pms->cosp2Th0Phi*(689050944 + 717040640*pms->eta - 8186087760*pms->eta2) + 3*(-34823851443 + 45926130815*pms->eta - 4154411535*pms->eta2 + 58603251*pms->cosp4Th0Phi*(1 - 5*pms->eta + 5*pms->eta2) - 2311169760*pms->sigx2 + 5377314240*pms->eta*pms->sigx2 + 966841200*pms->kappa1*pms->sigx2 - 966841200*pms->dm*pms->kappa1*pms->sigx2 - 1933682400*pms->eta*pms->kappa1*pms->sigx2 + 966841200*pms->kappa2*pms->sigx2 + 966841200*pms->dm*pms->kappa2*pms->sigx2 - 1933682400*pms->eta*pms->kappa2*pms->sigx2 + 1440*(-3734246*pms->dm + 1342835*(-1 + pms->dm)*pms->kappa1 + 1342835*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1440*(-3734246 + 1342835*pms->kappa1 + 1342835*pms->kappa2)*pms->sx2))*var->vom6)/116121600;
	REAL8 PN3=(var->e08*(4552793*pms->dm*pms->sigx + 11989170*pms->sx)*var->vom5)/120960;
	REAL8 PN2=(var->e08*(-56695941 + 13419743*pms->eta + 3833203*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4)/967680;
	REAL8 PN0=(1024*var->e08*var->vom2)/315;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/15482880*(var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((2234504576 + 22717231472*pms->eta - 3*var->e02*(206978063 + 16528848153*pms->eta))*pms->sigx + 2*pms->dm*(-5299269448 + 10128862443*var->e02)*pms->sx + pms->cosp2Th0Phi*(-((-472331248 + 1205158183*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 1048576*pms->dm*(-68 + 193*var->e02)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e07*(3774101792 - 694066176*pms->eta + 3*pms->cosp2Th0Phi*(-232533120 + 798848861*var->e02)*(-1 + 2*pms->eta) + 3*var->e02*(-7272225351 + 1195182566*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/30965760;
	REAL8 PN2=(2048*(-4 + 9*var->e02)*var->e07*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/315;
	REAL8 PN1=(pms->dm*(-1013849 + 1863858*var->e02)*var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/80640;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/15482880*(var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((2234504576 + 22717231472*pms->eta - 3*var->e02*(206978063 + 16528848153*pms->eta))*pms->sigx + 2*pms->dm*(-5299269448 + 10128862443*var->e02)*pms->sx + pms->cosp2Th0Phi*(-((-472331248 + 1205158183*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 1048576*pms->dm*(-68 + 193*var->e02)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e07*(3774101792 - 694066176*pms->eta + 3*pms->cosp2Th0Phi*(-232533120 + 798848861*var->e02)*(-1 + 2*pms->eta) + 3*var->e02*(-7272225351 + 1195182566*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/30965760;
	REAL8 PN2=(2048*(-4 + 9*var->e02)*var->e07*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/315;
	REAL8 PN1=(pms->dm*(-1013849 + 1863858*var->e02)*var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/80640;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl8_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/29030400*(pms->cos0Thp2Phi*var->e06*(3*pms->cosp2Th0Phi*(-335210330 + 2088619369*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 70*(287943129 - 819119857*pms->eta + 12191847*pms->eta2) + var->e02*(-38358898143 + 102294167135*pms->eta + 2881293135*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(4096*pms->cos0Thp2Phi*(-14 + 47*var->e02)*var->e06*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/315;
	REAL8 PN2=-1.0/483840*(pms->cos0Thp2Phi*(-34963810 + 105054617*var->e02)*var->e06*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl8_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/29030400*(pms->cos0Thp2Phi*var->e06*(3*pms->cosp2Th0Phi*(-335210330 + 2088619369*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 70*(287943129 - 819119857*pms->eta + 12191847*pms->eta2) + var->e02*(-38358898143 + 102294167135*pms->eta + 2881293135*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(4096*pms->cos0Thp2Phi*(-14 + 47*var->e02)*var->e06*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/315;
	REAL8 PN2=-1.0/483840*(pms->cos0Thp2Phi*(-34963810 + 105054617*var->e02)*var->e06*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((83540436 - 448714476*var->e02 + 956133709*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 1572864*pms->dm*(84 - 399*var->e02 + 776*var->e04)*pms->sx)*var->vom6)/967680;
	REAL8 PN3=-1.0/3870720*(pms->dm*(629852664 - 2693407304*var->e02 + 4597995541*var->e04)*var->e05*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 cpart_UPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((83540436 - 448714476*var->e02 + 956133709*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 1572864*pms->dm*(84 - 399*var->e02 + 776*var->e04)*pms->sx)*var->vom6)/967680;
	REAL8 PN3=-1.0/3870720*(pms->dm*(629852664 - 2693407304*var->e02 + 4597995541*var->e04)*var->e05*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl8_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e04*(295033440 - 1753866126*var->e02 + 4107863017*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/1382400;
	return PN4;
}

REAL8 cpart_UPartsl8_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e04*(295033440 - 1753866126*var->e02 + 4107863017*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/1382400;
	return PN4;
}

REAL8 spart_UPartsl9_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*(-4*pms->cosp2Th0Phi*(-107351253051 + 66795965195*pms->eta + 769542516165*pms->eta2) + 3*(-11918321020863 + 16411055299435*pms->eta - 1547349775275*pms->eta2 + 22654134171*pms->cosp4Th0Phi*(1 - 5*pms->eta + 5*pms->eta2) - 741550544640*pms->sigx2 + 1740233502720*pms->eta*pms->sigx2 + 306492168960*pms->kappa1*pms->sigx2 - 306492168960*pms->dm*pms->kappa1*pms->sigx2 - 612984337920*pms->eta*pms->kappa1*pms->sigx2 + 306492168960*pms->kappa2*pms->sigx2 + 306492168960*pms->dm*pms->kappa2*pms->sigx2 - 612984337920*pms->eta*pms->kappa2*pms->sigx2 + 23040*(-75530968*pms->dm + 26605223*(-1 + pms->dm)*pms->kappa1 + 26605223*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-75530968 + 26605223*pms->kappa1 + 26605223*pms->kappa2)*pms->sx2))*var->vom6)/26424115200;
	REAL8 PN3=(var->e09*(61182061*pms->dm*pms->sigx + 162222197*pms->sx)*var->vom5)/1146880;
	REAL8 PN2=(var->e09*(-2338270689 + 576947907*pms->eta + 160030087*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4)/27525120;
	REAL8 PN0=(4782969*var->e09*var->vom2)/1146880;
	return PN4+PN3+PN2+PN0;
}

REAL8 cpart_UPartsl9_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*(-4*pms->cosp2Th0Phi*(-107351253051 + 66795965195*pms->eta + 769542516165*pms->eta2) + 3*(-11918321020863 + 16411055299435*pms->eta - 1547349775275*pms->eta2 + 22654134171*pms->cosp4Th0Phi*(1 - 5*pms->eta + 5*pms->eta2) - 741550544640*pms->sigx2 + 1740233502720*pms->eta*pms->sigx2 + 306492168960*pms->kappa1*pms->sigx2 - 306492168960*pms->dm*pms->kappa1*pms->sigx2 - 612984337920*pms->eta*pms->kappa1*pms->sigx2 + 306492168960*pms->kappa2*pms->sigx2 + 306492168960*pms->dm*pms->kappa2*pms->sigx2 - 612984337920*pms->eta*pms->kappa2*pms->sigx2 + 23040*(-75530968*pms->dm + 26605223*(-1 + pms->dm)*pms->kappa1 + 26605223*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-75530968 + 26605223*pms->kappa1 + 26605223*pms->kappa2)*pms->sx2))*var->vom6)/26424115200;
	REAL8 PN3=(var->e09*(61182061*pms->dm*pms->sigx + 162222197*pms->sx)*var->vom5)/1146880;
	REAL8 PN2=(var->e09*(-2338270689 + 576947907*pms->eta + 160030087*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4)/27525120;
	REAL8 PN0=(4782969*var->e09*var->vom2)/1146880;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(3*var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((4601983871 + 56487828323*pms->eta)*pms->sigx) + 25942719945*pms->dm*pms->sx + pms->cosp2Th0Phi*(-1201919831*(-1 + 3*pms->eta)*pms->sigx + 186535791*pms->dm*pms->sx))*var->vom6)/73400320;
	REAL8 PN3=-1.0/73400320*(pms->dm*var->e08*(-17253654699 + 2788296790*pms->eta + 2765443677*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(-43046721*var->e08*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/1146880;
	REAL8 PN1=(-40057113*pms->dm*var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/2293760;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(3*var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((4601983871 + 56487828323*pms->eta)*pms->sigx) + 25942719945*pms->dm*pms->sx + pms->cosp2Th0Phi*(-1201919831*(-1 + 3*pms->eta)*pms->sigx + 186535791*pms->dm*pms->sx))*var->vom6)/73400320;
	REAL8 PN3=-1.0/73400320*(pms->dm*var->e08*(-17253654699 + 2788296790*pms->eta + 2765443677*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(-43046721*var->e08*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/1146880;
	REAL8 PN1=(-40057113*pms->dm*var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/2293760;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl9_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3303014400*(pms->cos0Thp2Phi*var->e07*(9*pms->cosp2Th0Phi*(-26716789856 + 159551513683*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 32*(111326334273 - 314492064575*pms->eta + 9126974535*pms->eta2) + var->e02*(-6523039078893 + 16764230171615*pms->eta + 352650108945*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(43046721*pms->cos0Thp2Phi*(-32 + 115*var->e02)*var->e07*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/4587520;
	REAL8 PN2=-1.0/27525120*(pms->cos0Thp2Phi*(-3208945184 + 10447804975*var->e02)*var->e07*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl9_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3303014400*(pms->cos0Thp2Phi*var->e07*(9*pms->cosp2Th0Phi*(-26716789856 + 159551513683*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 32*(111326334273 - 314492064575*pms->eta + 9126974535*pms->eta2) + var->e02*(-6523039078893 + 16764230171615*pms->eta + 352650108945*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(43046721*pms->cos0Thp2Phi*(-32 + 115*var->e02)*var->e07*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/4587520;
	REAL8 PN2=-1.0/27525120*(pms->cos0Thp2Phi*(-3208945184 + 10447804975*var->e02)*var->e07*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2293760*(var->e06*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-389602094 + 2138209239*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 43046721*pms->dm*(-14 + 69*var->e02)*pms->sx)*var->vom6);
	REAL8 PN3=(pms->dm*(-355302101 + 1595943147*var->e02)*var->e06*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/1146880;
	return PN4+PN3;
}

REAL8 cpart_UPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2293760*(var->e06*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-389602094 + 2138209239*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 43046721*pms->dm*(-14 + 69*var->e02)*pms->sx)*var->vom6);
	REAL8 PN3=(pms->dm*(-355302101 + 1595943147*var->e02)*var->e06*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/1146880;
	return PN4+PN3;
}

REAL8 spart_UPartsl9_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*(90393053632 - 546518349496*var->e02 + 1346424597527*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/183500800;
	return PN4;
}

REAL8 cpart_UPartsl9_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*(90393053632 - 546518349496*var->e02 + 1346424597527*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/183500800;
	return PN4;
}

REAL8 spart_UPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((33044688457 + 498876565747*pms->eta)*pms->sigx) + 225977802394*pms->dm*pms->sx + 125*pms->cosp2Th0Phi*(-86656587*(-1 + 3*pms->eta)*pms->sigx + 13750000*pms->dm*pms->sx))*var->vom6)/139345920;
	REAL8 PN3=-1.0/278691840*(pms->dm*var->e09*(-117529218277 + 17582958690*pms->eta + 17090778015*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(-1953125*var->e09*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/36288;
	REAL8 PN1=(-14032261*pms->dm*var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/580608;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((33044688457 + 498876565747*pms->eta)*pms->sigx) + 225977802394*pms->dm*pms->sx + 125*pms->cosp2Th0Phi*(-86656587*(-1 + 3*pms->eta)*pms->sigx + 13750000*pms->dm*pms->sx))*var->vom6)/139345920;
	REAL8 PN3=-1.0/278691840*(pms->dm*var->e09*(-117529218277 + 17582958690*pms->eta + 17090778015*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(-1953125*var->e09*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/36288;
	REAL8 PN1=(-14032261*pms->dm*var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/580608;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl10_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e08*(-3115383809 + 8717907237*pms->eta - 377830465*pms->eta2 + 275843375*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/1935360;
	REAL8 PN3=(-1953125*pms->cos0Thp2Phi*var->e08*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/4032;
	REAL8 PN2=(659273*pms->cos0Thp2Phi*var->e08*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/3584;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl10_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e08*(-3115383809 + 8717907237*pms->eta - 377830465*pms->eta2 + 275843375*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/1935360;
	REAL8 PN3=(-1953125*pms->cos0Thp2Phi*var->e08*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/4032;
	REAL8 PN2=(659273*pms->cos0Thp2Phi*var->e08*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/3584;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-25*var->e07*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-19767520 + 111434551*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3750000*pms->dm*(-8 + 41*var->e02)*pms->sx)*var->vom6)/1548288;
	REAL8 PN3=(pms->dm*(-1746161104 + 8233738703*var->e02)*var->e07*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/3096576;
	return PN4+PN3;
}

REAL8 cpart_UPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-25*var->e07*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-19767520 + 111434551*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3750000*pms->dm*(-8 + 41*var->e02)*pms->sx)*var->vom6)/1548288;
	REAL8 PN3=(pms->dm*(-1746161104 + 8233738703*var->e02)*var->e07*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/3096576;
	return PN4+PN3;
}

REAL8 spart_UPartsl10_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/27648*(pms->cos0Thp4Phi*(-29159434 + 180457025*var->e02)*var->e06*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl10_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/27648*(pms->cos0Thp4Phi*(-29159434 + 180457025*var->e02)*var->e06*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl11_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e09*(-620225438154507 + 1713655040732585*pms->eta - 100676493536745*pms->eta2 + 70992686153613*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/267544166400;
	REAL8 PN3=(-285311670611*pms->cos0Thp2Phi*var->e09*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/371589120;
	REAL8 PN2=(127207768349*pms->cos0Thp2Phi*var->e09*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/445906944;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl11_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e09*(-620225438154507 + 1713655040732585*pms->eta - 100676493536745*pms->eta2 + 70992686153613*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/267544166400;
	REAL8 PN3=(-285311670611*pms->cos0Thp2Phi*var->e09*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/371589120;
	REAL8 PN2=(127207768349*pms->cos0Thp2Phi*var->e09*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/445906944;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(11*var->e08*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-52131688243*(-1 + 3*pms->eta)*pms->sigx + 77812273803*pms->dm*pms->sx)*var->vom6)/990904320;
	REAL8 PN3=(-982587757057*pms->dm*var->e08*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/990904320;
	return PN4+PN3;
}

REAL8 cpart_UPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(11*var->e08*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-52131688243*(-1 + 3*pms->eta)*pms->sigx + 77812273803*pms->dm*pms->sx)*var->vom6)/990904320;
	REAL8 PN3=(-982587757057*pms->dm*var->e08*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/990904320;
	return PN4+PN3;
}

REAL8 spart_UPartsl11_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/19818086400*(pms->cos0Thp4Phi*(-42288765716768 + 268844561710119*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl11_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/19818086400*(pms->cos0Thp4Phi*(-42288765716768 + 268844561710119*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-877007573*(-1 + 3*pms->eta)*pms->sigx + 1289945088*pms->dm*pms->sx)*var->vom6)/860160;
	REAL8 PN3=(-972971787*pms->dm*var->e09*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/573440;
	return PN4+PN3;
}

REAL8 cpart_UPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-877007573*(-1 + 3*pms->eta)*pms->sigx + 1289945088*pms->dm*pms->sx)*var->vom6)/860160;
	REAL8 PN3=(-972971787*pms->dm*var->e09*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/573440;
	return PN4+PN3;
}

REAL8 spart_UPartsl12_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(2961035691*pms->cos0Thp4Phi*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/716800;
	return PN4;
}

REAL8 cpart_UPartsl12_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(2961035691*pms->cos0Thp4Phi*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/716800;
	return PN4;
}

REAL8 spart_UPartsl13_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(1376782894456297*pms->cos0Thp4Phi*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/178362777600;
	return PN4;
}

REAL8 cpart_UPartsl13_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(1376782894456297*pms->cos0Thp4Phi*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/178362777600;
	return PN4;
}
