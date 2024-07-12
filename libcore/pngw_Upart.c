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

extern size_t n_scpart_Func;
extern INT scpart_Func_lkList[171][2];

REAL8 (*spart_UFunc_fList[171])(BBHDynVariables*, BBHDynParams*)={
	NULL,
	NULL,
	spart_UPartsl1_km4,
	spart_UPartsl1_km3,
	spart_UPartsl1_km2,
	spart_UPartsl1_km1,
	NULL,
	spart_UPartsl1_k1,
	spart_UPartsl1_k2,
	spart_UPartsl1_k3,
	spart_UPartsl1_k4,
	NULL,
	NULL,
	NULL,
	NULL,
	spart_UPartsl2_km4,
	spart_UPartsl2_km3,
	spart_UPartsl2_km2,
	spart_UPartsl2_km1,
	NULL,
	spart_UPartsl2_k1,
	spart_UPartsl2_k2,
	spart_UPartsl2_k3,
	spart_UPartsl2_k4,
	NULL,
	NULL,
	NULL,
	NULL,
	spart_UPartsl3_km4,
	spart_UPartsl3_km3,
	spart_UPartsl3_km2,
	spart_UPartsl3_km1,
	NULL,
	spart_UPartsl3_k1,
	spart_UPartsl3_k2,
	spart_UPartsl3_k3,
	spart_UPartsl3_k4,
	NULL,
	NULL,
	NULL,
	spart_UPartsl4_km4,
	spart_UPartsl4_km3,
	spart_UPartsl4_km2,
	spart_UPartsl4_km1,
	NULL,
	spart_UPartsl4_k1,
	spart_UPartsl4_k2,
	spart_UPartsl4_k3,
	spart_UPartsl4_k4,
	NULL,
	NULL,
	NULL,
	spart_UPartsl5_km4,
	spart_UPartsl5_km3,
	spart_UPartsl5_km2,
	spart_UPartsl5_km1,
	NULL,
	spart_UPartsl5_k1,
	spart_UPartsl5_k2,
	spart_UPartsl5_k3,
	spart_UPartsl5_k4,
	NULL,
	NULL,
	NULL,
	NULL,
	spart_UPartsl6_km3,
	spart_UPartsl6_km2,
	spart_UPartsl6_km1,
	NULL,
	spart_UPartsl6_k1,
	spart_UPartsl6_k2,
	spart_UPartsl6_k3,
	spart_UPartsl6_k4,
	NULL,
	NULL,
	NULL,
	spart_UPartsl7_km3,
	spart_UPartsl7_km2,
	spart_UPartsl7_km1,
	NULL,
	spart_UPartsl7_k1,
	spart_UPartsl7_k2,
	spart_UPartsl7_k3,
	spart_UPartsl7_k4,
	NULL,
	NULL,
	NULL,
	spart_UPartsl8_km3,
	spart_UPartsl8_km2,
	spart_UPartsl8_km1,
	NULL,
	spart_UPartsl8_k1,
	spart_UPartsl8_k2,
	spart_UPartsl8_k3,
	spart_UPartsl8_k4,
	NULL,
	NULL,
	NULL,
	NULL,
	spart_UPartsl9_km2,
	spart_UPartsl9_km1,
	NULL,
	spart_UPartsl9_k1,
	spart_UPartsl9_k2,
	spart_UPartsl9_k3,
	spart_UPartsl9_k4,
	NULL,
	NULL,
	NULL,
	spart_UPartsl10_km2,
	spart_UPartsl10_km1,
	NULL,
	spart_UPartsl10_k1,
	spart_UPartsl10_k2,
	spart_UPartsl10_k3,
	spart_UPartsl10_k4,
	NULL,
	NULL,
	NULL,
	spart_UPartsl11_km2,
	spart_UPartsl11_km1,
	NULL,
	spart_UPartsl11_k1,
	spart_UPartsl11_k2,
	spart_UPartsl11_k3,
	spart_UPartsl11_k4,
	NULL,
	NULL,
	NULL,
	NULL,
	spart_UPartsl12_km1,
	NULL,
	spart_UPartsl12_k1,
	spart_UPartsl12_k2,
	spart_UPartsl12_k3,
	spart_UPartsl12_k4,
	NULL,
	NULL,
	NULL,
	spart_UPartsl13_km1,
	NULL,
	spart_UPartsl13_k1,
	spart_UPartsl13_k2,
	spart_UPartsl13_k3,
	spart_UPartsl13_k4,
	NULL,
	NULL,
	spart_UPartsl14_km1,
	NULL,
	spart_UPartsl14_k1,
	spart_UPartsl14_k2,
	spart_UPartsl14_k3,
	NULL,
	NULL,
	NULL,
	NULL,
	spart_UPartsl15_k1,
	spart_UPartsl15_k2,
	NULL,
	NULL,
	NULL,
	NULL,
	spart_UPartsl16_k1,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL
};

REAL8 (*cpart_UFunc_fList[171])(BBHDynVariables*, BBHDynParams*)={
	NULL,
	NULL,
	cpart_UPartsl1_km4,
	cpart_UPartsl1_km3,
	cpart_UPartsl1_km2,
	cpart_UPartsl1_km1,
	cpart_UPartsl1_k0,
	cpart_UPartsl1_k1,
	cpart_UPartsl1_k2,
	cpart_UPartsl1_k3,
	cpart_UPartsl1_k4,
	NULL,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl2_km4,
	cpart_UPartsl2_km3,
	cpart_UPartsl2_km2,
	cpart_UPartsl2_km1,
	cpart_UPartsl2_k0,
	cpart_UPartsl2_k1,
	cpart_UPartsl2_k2,
	cpart_UPartsl2_k3,
	cpart_UPartsl2_k4,
	NULL,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl3_km4,
	cpart_UPartsl3_km3,
	cpart_UPartsl3_km2,
	cpart_UPartsl3_km1,
	cpart_UPartsl3_k0,
	cpart_UPartsl3_k1,
	cpart_UPartsl3_k2,
	cpart_UPartsl3_k3,
	cpart_UPartsl3_k4,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl4_km4,
	cpart_UPartsl4_km3,
	cpart_UPartsl4_km2,
	cpart_UPartsl4_km1,
	cpart_UPartsl4_k0,
	cpart_UPartsl4_k1,
	cpart_UPartsl4_k2,
	cpart_UPartsl4_k3,
	cpart_UPartsl4_k4,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl5_km4,
	cpart_UPartsl5_km3,
	cpart_UPartsl5_km2,
	cpart_UPartsl5_km1,
	cpart_UPartsl5_k0,
	cpart_UPartsl5_k1,
	cpart_UPartsl5_k2,
	cpart_UPartsl5_k3,
	cpart_UPartsl5_k4,
	NULL,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl6_km3,
	cpart_UPartsl6_km2,
	cpart_UPartsl6_km1,
	cpart_UPartsl6_k0,
	cpart_UPartsl6_k1,
	cpart_UPartsl6_k2,
	cpart_UPartsl6_k3,
	cpart_UPartsl6_k4,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl7_km3,
	cpart_UPartsl7_km2,
	cpart_UPartsl7_km1,
	cpart_UPartsl7_k0,
	cpart_UPartsl7_k1,
	cpart_UPartsl7_k2,
	cpart_UPartsl7_k3,
	cpart_UPartsl7_k4,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl8_km3,
	cpart_UPartsl8_km2,
	cpart_UPartsl8_km1,
	cpart_UPartsl8_k0,
	cpart_UPartsl8_k1,
	cpart_UPartsl8_k2,
	cpart_UPartsl8_k3,
	cpart_UPartsl8_k4,
	NULL,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl9_km2,
	cpart_UPartsl9_km1,
	cpart_UPartsl9_k0,
	cpart_UPartsl9_k1,
	cpart_UPartsl9_k2,
	cpart_UPartsl9_k3,
	cpart_UPartsl9_k4,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl10_km2,
	cpart_UPartsl10_km1,
	cpart_UPartsl10_k0,
	cpart_UPartsl10_k1,
	cpart_UPartsl10_k2,
	cpart_UPartsl10_k3,
	cpart_UPartsl10_k4,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl11_km2,
	cpart_UPartsl11_km1,
	cpart_UPartsl11_k0,
	cpart_UPartsl11_k1,
	cpart_UPartsl11_k2,
	cpart_UPartsl11_k3,
	cpart_UPartsl11_k4,
	NULL,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl12_km1,
	cpart_UPartsl12_k0,
	cpart_UPartsl12_k1,
	cpart_UPartsl12_k2,
	cpart_UPartsl12_k3,
	cpart_UPartsl12_k4,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl13_km1,
	cpart_UPartsl13_k0,
	cpart_UPartsl13_k1,
	cpart_UPartsl13_k2,
	cpart_UPartsl13_k3,
	cpart_UPartsl13_k4,
	NULL,
	NULL,
	cpart_UPartsl14_km1,
	cpart_UPartsl14_k0,
	cpart_UPartsl14_k1,
	cpart_UPartsl14_k2,
	cpart_UPartsl14_k3,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl15_k0,
	cpart_UPartsl15_k1,
	cpart_UPartsl15_k2,
	NULL,
	NULL,
	NULL,
	NULL,
	cpart_UPartsl16_k1,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL
};

REAL8 calculate_QUPart_waveform(REAL8 lval, BBHDynVariables *var, BBHDynParams *pms)
{
    REAL8 k = calculate_k(var, pms);
    REAL8 ret = 0.0;
    INT nl, nk;
    for (INT i=0; i<n_scpart_Func; i++) {
        nl = scpart_Func_lkList[i][0];
        nk = scpart_Func_lkList[i][1];
		if (cpart_UFunc_fList[i] != NULL)
			ret += cpart_UFunc_fList[i](var, pms)*cos((nl + nk*k)*lval);
		if (spart_UFunc_fList[i] != NULL)
			ret += spart_UFunc_fList[i](var, pms)*sin((nl + nk*k)*lval);
    }
    return ret;
}

REAL8 calculate_QUPart_waveform_emode(INT ilk, REAL8 lval, BBHDynVariables *var, BBHDynParams *pms)
{
    REAL8 k = calculate_k(var, pms);
    REAL8 ret = 0.0;
	if (ilk < 0)
		return ret;
    INT nl, nk;
	nl = scpart_Func_lkList[ilk][0];
	nk = scpart_Func_lkList[ilk][1];
	if (cpart_UFunc_fList[ilk] != NULL) 
		ret += cpart_UFunc_fList[ilk](var, pms)*cos((nl + nk*k)*lval);
	if (spart_UFunc_fList[ilk] != NULL)
		ret += spart_UFunc_fList[ilk](var, pms)*sin((nl + nk*k)*lval);
    return ret;
}

INT calculate_QUPart_waveform_ecoeff(INT ilk, REAL8 lval, BBHDynVariables *var, BBHDynParams *pms,
		COMPLEX16 *ret_QPlus, COMPLEX16 *ret_QMinus)
{
    COMPLEX16 Qc = 0.0, Qs = 0.0;
	if (ilk < 0) {
		*ret_QPlus = 0.0;
		*ret_QMinus = 0.0;
		return X_SUCCESS;
	}
	if (cpart_UFunc_fList[ilk] != NULL) 
		Qc = cpart_UFunc_fList[ilk](var, pms);

	if (spart_UFunc_fList[ilk] != NULL) {
		Qs = spart_UFunc_fList[ilk](var, pms);
	}
	*ret_QPlus = 0.5*(Qc + I*Qs);
	*ret_QMinus = 0.5*(Qc - I*Qs);
	// *ret_QPlus = Qc;
	// *ret_QMinus = Qs;
    return X_SUCCESS;
}

REAL8 spart_UPartsl1_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=((-25386816 - 2629592*var->e02 + 401379*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/4954521600;
	return PN4;
}

REAL8 cpart_UPartsl1_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/4954521600*(pms->cos0Thp4Phi*(-25386816 - 2629592*var->e02 + 401379*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*var->e04*pms->sinp1Th0PhiTO3*((129600 + 132096*var->e02 + 107089*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(72000 + 34368*var->e02 + 20117*var->e04)*pms->sx)*var->vom6)/35389440;
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*var->e04*(-49875840 - 7043904*var->e02 + 401898*var->e04 + 2024789*var->e06)*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/1486356480;
	return PN4+PN3;
}

REAL8 cpart_UPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((129600 + 132096*var->e02 + 107089*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(72000 + 34368*var->e02 + 20117*var->e04)*pms->sx)*var->vom6)/35389440;
	REAL8 PN3=(pms->dm*var->e04*(-49875840 - 7043904*var->e02 + 401898*var->e04 + 2024789*var->e06)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/1486356480;
	return PN4+PN3;
}

REAL8 spart_UPartsl1_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e03*(var->e06*(-30359479653 + 97397625415*pms->eta - 15703386855*pms->eta2) + 3*pms->cosp2Th0Phi*(322145280 + 395058240*var->e02 + 472103352*var->e04 + 538582529*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 46080*(220527 - 724025*pms->eta + 167025*pms->eta2) - 2880*var->e02*(6524241 - 21090035*pms->eta + 3766755*pms->eta2) - 72*var->e04*(349136007 - 1123186825*pms->eta + 188460465*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/3185049600;
	REAL8 PN3=(var->e03*(36126720 + 15160320*var->e02 + 8797824*var->e04 + 5776400*var->e06 + 4139983*var->e08)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/495452160;
	REAL8 PN2=(var->e03*(-83401113600 + 64080871*var->e010 - 16979558400*var->e02 - 6163476480*var->e04 - 2165900800*var->e06 - 608680480*var->e08)*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/475634073600;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl1_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3185049600*(pms->cos0Thp2Phi*var->e03*(var->e06*(-30359479653 + 97397625415*pms->eta - 15703386855*pms->eta2) + 3*pms->cosp2Th0Phi*(322145280 + 395058240*var->e02 + 472103352*var->e04 + 538582529*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 46080*(220527 - 724025*pms->eta + 167025*pms->eta2) - 2880*var->e02*(6524241 - 21090035*pms->eta + 3766755*pms->eta2) - 72*var->e04*(349136007 - 1123186825*pms->eta + 188460465*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/495452160*(pms->cos0Thp2Phi*var->e03*(36126720 + 15160320*var->e02 + 8797824*var->e04 + 5776400*var->e06 + 4139983*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=-1.0/475634073600*(pms->cos0Thp2Phi*var->e03*(-83401113600 + 64080871*var->e010 - 16979558400*var->e02 - 6163476480*var->e04 - 2165900800*var->e06 - 608680480*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/17694720*(pms->cos0Thp1Phi*var->e02*pms->sinp1Th0Phi*((11520*(-1283 + 1897*pms->eta) + 1920*var->e02*(-10681 + 15803*pms->eta) + 90*var->e04*(-279427 + 100585*pms->eta) - var->e06*(27708113 + 19243229*pms->eta))*pms->sigx - 5*pms->dm*(9333504 + 10856064*var->e02 + 9490374*var->e04 + 6846743*var->e06)*pms->sx + pms->cosp2Th0Phi*((4481280 + 5496960*var->e02 + 6605250*var->e04 + 7534007*var->e06)*(-1 + 3*pms->eta)*pms->sigx + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e02*(var->e08*(7728759049 - 736729938*pms->eta) + 9*pms->cosp2Th0Phi*(105431040 + 69304320*var->e02 + 68522880*var->e04 + 68206976*var->e06 + 68072745*var->e08)*(-1 + 2*pms->eta) + 6635520*(-521 + 82*pms->eta) - 1474560*var->e02*(-379 + 126*pms->eta) - 86400*var->e04*(-35469 + 4570*pms->eta) - 1152*var->e06*(-4796131 + 514390*pms->eta))*pms->sinp1Th0Phi*var->vom5)/3397386240;
	REAL8 PN2=-1.0/619315200*(pms->cos0Thp1Phi*var->e02*(77414400 + 5352951*var->e010 + 25804800*var->e02 + 15120000*var->e04 + 9864960*var->e06 + 7051975*var->e08)*pms->sigx*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/951268147200*(pms->cos0Thp1Phi*pms->dm*var->e02*(653996851200 + 29758094208*var->e010 + 23550461729*var->e012 + 128817561600*var->e02 + 85001011200*var->e04 + 54959063040*var->e06 + 39236386560*var->e08)*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/17694720*(var->e02*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((11520*(-1283 + 1897*pms->eta) + 1920*var->e02*(-10681 + 15803*pms->eta) + 90*var->e04*(-279427 + 100585*pms->eta) - var->e06*(27708113 + 19243229*pms->eta))*pms->sigx - 5*pms->dm*(9333504 + 10856064*var->e02 + 9490374*var->e04 + 6846743*var->e06)*pms->sx + pms->cosp2Th0Phi*((4481280 + 5496960*var->e02 + 6605250*var->e04 + 7534007*var->e06)*(-1 + 3*pms->eta)*pms->sigx + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e02*(var->e08*(7728759049 - 736729938*pms->eta) + 9*pms->cosp2Th0Phi*(105431040 + 69304320*var->e02 + 68522880*var->e04 + 68206976*var->e06 + 68072745*var->e08)*(-1 + 2*pms->eta) + 6635520*(-521 + 82*pms->eta) - 1474560*var->e02*(-379 + 126*pms->eta) - 86400*var->e04*(-35469 + 4570*pms->eta) - 1152*var->e06*(-4796131 + 514390*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/3397386240;
	REAL8 PN2=-1.0/619315200*(var->e02*(77414400 + 5352951*var->e010 + 25804800*var->e02 + 15120000*var->e04 + 9864960*var->e06 + 7051975*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/951268147200*(pms->dm*var->e02*(653996851200 + 29758094208*var->e010 + 23550461729*var->e012 + 128817561600*var->e02 + 85001011200*var->e04 + 54959063040*var->e06 + 39236386560*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl1_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*(4*pms->cosp2Th0Phi*(737280*(-2901 + 9125*pms->eta + 75*pms->eta2) + 92160*var->e02*(-61317 + 164365*pms->eta + 126195*pms->eta2) + 3840*var->e04*(-2443761 + 7220465*pms->eta + 1980255*pms->eta2) + 80*var->e06*(-145085001 + 430664545*pms->eta + 108074175*pms->eta2) + var->e08*(-13626753741 + 40639221245*pms->eta + 9212936115*pms->eta2)) + 3*(-3*pms->cosp4Th0Phi*(5160960 + 103127040*var->e02 + 101786880*var->e04 + 111886960*var->e06 + 120996687*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) + 737280*(-11087 + 9915*pms->eta + 5*pms->eta2 - 34560*pms->sigx2 + 19200*pms->kappa1*pms->sigx2 - 19200*pms->dm*pms->kappa1*pms->sigx2 + 19200*pms->kappa2*pms->sigx2 + 19200*pms->dm*pms->kappa2*pms->sigx2 - 7680*pms->eta*(-8 + 5*pms->kappa1 + 5*pms->kappa2)*pms->sigx2 + 7680*(-8*pms->dm + 5*(-1 + pms->dm)*pms->kappa1 + 5*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-8 + 5*pms->kappa1 + 5*pms->kappa2)*pms->sx2) + 92160*var->e02*(187641 + 100685*pms->eta2 - 3840*(81 + 53*(-1 + pms->dm)*pms->kappa1 - 53*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(364201 + 1536*(-56 + 53*pms->kappa1 + 53*pms->kappa2)*pms->sigx2) + 7680*(-56*pms->dm + 53*(-1 + pms->dm)*pms->kappa1 + 53*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-56 + 53*pms->kappa1 + 53*pms->kappa2)*pms->sx2) + 3840*var->e04*(14067213 + 3066705*pms->eta2 - 9020160*pms->sigx2 + 6301440*pms->kappa1*pms->sigx2 - 6301440*pms->dm*pms->kappa1*pms->sigx2 + 6301440*pms->kappa2*pms->sigx2 + 6301440*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(12032669 + 4608*(-472 + 547*pms->kappa1 + 547*pms->kappa2)*pms->sigx2) + 23040*(-472*pms->dm + 547*(-1 + pms->dm)*pms->kappa1 + 547*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-472 + 547*pms->kappa1 + 547*pms->kappa2)*pms->sx2) + 80*var->e06*(1370559293 + 190773025*pms->eta2 - 494519040*pms->sigx2 + 364404480*pms->kappa1*pms->sigx2 - 364404480*pms->dm*pms->kappa1*pms->sigx2 + 364404480*pms->kappa2*pms->sigx2 + 364404480*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(255507535 + 512*(-67768 + 94897*pms->kappa1 + 94897*pms->kappa2)*pms->sigx2) + 7680*(-67768*pms->dm + 94897*(-1 + pms->dm)*pms->kappa1 + 94897*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-67768 + 94897*pms->kappa1 + 94897*pms->kappa2)*pms->sx2) + var->e08*(173236993833 + 18043455325*pms->eta2 - 43950677760*pms->sigx2 + 33838621440*pms->kappa1*pms->sigx2 - 33838621440*pms->dm*pms->kappa1*pms->sigx2 + 33838621440*pms->kappa2*pms->sigx2 + 33838621440*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(75492721337 + 1536*(-5266696 + 8812141*pms->kappa1 + 8812141*pms->kappa2)*pms->sigx2) + 7680*(-5266696*pms->dm + 8812141*(-1 + pms->dm)*pms->kappa1 + 8812141*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-5266696 + 8812141*pms->kappa1 + 8812141*pms->kappa2)*pms->sx2)))*var->vom6)/16986931200;
	REAL8 PN3=-1.0/265420800*(var->e0*(-(pms->dm*(619315200 + 105983543*var->e010 + 254361600*var->e02 + 235468800*var->e04 + 186384000*var->e06 + 144144840*var->e08)*pms->sigx) + 45*(-29491200 + 3875433*var->e010 - 6635520*var->e02 - 5068800*var->e04 - 1659520*var->e06 + 1255896*var->e08)*pms->sx)*var->vom5);
	REAL8 PN2=(var->e0*(var->e012*(376332492663 - 174168459941*pms->eta) + pms->cosp2Th0Phi*(-14863564800 + 6986407848*var->e010 + 6450683759*var->e012 + 1857945600*var->e02 + 11070259200*var->e04 + 8594611200*var->e06 + 7681423680*var->e08)*(-1 + 3*pms->eta) - 14863564800*(9 + 5*pms->eta) - 1857945600*var->e02*(-177 + 259*pms->eta) - 77414400*var->e04*(-2871 + 3365*pms->eta) - 1612800*var->e06*(-180945 + 144643*pms->eta) - 20160*var->e08*(-16287159 + 10286597*pms->eta) - 168*var->e010*(-2115708849 + 1122816835*pms->eta))*var->vom4)/356725555200;
	REAL8 PN0=-1.0/3329438515200*(var->e0*(-3329438515200 + 37632*var->e010 - 224*var->e012 + var->e014 + 416179814400*var->e02 - 17340825600*var->e04 + 361267200*var->e06 - 4515840*var->e08)*var->vom2);
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/28311552*(pms->cos0Thp1Phi*pms->sinp1Th0Phi*(-((737280*var->e02*(-181 + 215*pms->eta) + 147456*(847 + 2419*pms->eta) + 2304*var->e04*(-75631 + 102317*pms->eta) + 1024*var->e06*(-179011 + 175571*pms->eta) + var->e08*(-191954485 + 131476991*pms->eta))*pms->sigx) + pms->dm*(216023040 + 203194368*var->e02 + 227153664*var->e04 + 205353728*var->e06 + 181596173*var->e08)*pms->sx + pms->cosp2Th0Phi*(-((5750784 + 3391488*var->e02 + 9126144*var->e04 + 10447872*var->e06 + 11979907*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08)*pms->sx))*var->vom6);
	REAL8 PN3=-1.0/1415577600*(pms->cos0Thp1Phi*pms->dm*(var->e010*(1457874093 - 343131642*pms->eta) + 3*pms->cosp2Th0Phi*(22118400 + 89365751*var->e010 + 202752000*var->e02 + 84902400*var->e04 + 94790400*var->e06 + 90953150*var->e08)*(-1 + 2*pms->eta) - 7372800*(607 + 66*pms->eta) + 3686400*var->e02*(-2003 + 390*pms->eta) - 345600*var->e04*(8839 + 1266*pms->eta) - 6400*var->e06*(182695 + 33042*pms->eta) - 50*var->e08*(-6019549 + 5884602*pms->eta))*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=-1.0/2123366400*(pms->cos0Thp1Phi*(-2123366400 + 24178464*var->e010 + 18352973*var->e012 + 1061683200*var->e02 + 33177600*var->e04 + 53452800*var->e06 + 33796800*var->e08)*pms->sigx*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=(pms->cos0Thp1Phi*pms->dm*(104044953600 + 7257265344*var->e010 + 5644172359*var->e012 + 4550775346*var->e014 + 104044953600*var->e02 + 17882726400*var->e04 + 14450688000*var->e06 + 9808545600*var->e08)*pms->sinp1Th0Phi*var->vom3)/208089907200;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((737280*var->e02*(-181 + 215*pms->eta) + 147456*(847 + 2419*pms->eta) + 2304*var->e04*(-75631 + 102317*pms->eta) + 1024*var->e06*(-179011 + 175571*pms->eta) + var->e08*(-191954485 + 131476991*pms->eta))*pms->sigx) + pms->dm*(216023040 + 203194368*var->e02 + 227153664*var->e04 + 205353728*var->e06 + 181596173*var->e08)*pms->sx + pms->cosp2Th0Phi*(-((5750784 + 3391488*var->e02 + 9126144*var->e04 + 10447872*var->e06 + 11979907*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08)*pms->sx))*var->vom6)/28311552;
	REAL8 PN3=(pms->dm*(var->e010*(1457874093 - 343131642*pms->eta) + 3*pms->cosp2Th0Phi*(22118400 + 89365751*var->e010 + 202752000*var->e02 + 84902400*var->e04 + 94790400*var->e06 + 90953150*var->e08)*(-1 + 2*pms->eta) - 7372800*(607 + 66*pms->eta) + 3686400*var->e02*(-2003 + 390*pms->eta) - 345600*var->e04*(8839 + 1266*pms->eta) - 6400*var->e06*(182695 + 33042*pms->eta) - 50*var->e08*(-6019549 + 5884602*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/1415577600;
	REAL8 PN2=((-2123366400 + 24178464*var->e010 + 18352973*var->e012 + 1061683200*var->e02 + 33177600*var->e04 + 53452800*var->e06 + 33796800*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/2123366400;
	REAL8 PN1=-1.0/208089907200*(pms->dm*(104044953600 + 7257265344*var->e010 + 5644172359*var->e012 + 4550775346*var->e014 + 104044953600*var->e02 + 17882726400*var->e04 + 14450688000*var->e06 + 9808545600*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl1_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/707788800*(var->e0*(var->e08*(-8349476519 + 26402827645*pms->eta - 3304278765*pms->eta2) + pms->cosp2Th0Phi*(266158080 + 151787520*var->e02 + 277052160*var->e04 + 319862320*var->e06 + 363463521*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 737280*(2959 - 9125*pms->eta + 245*pms->eta2) - 92160*var->e02*(87493 - 280355*pms->eta + 54075*pms->eta2) - 3840*var->e04*(1881611 - 5884865*pms->eta + 537505*pms->eta2) - 80*var->e06*(97078181 - 306252315*pms->eta + 36699715*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/353894400*(var->e0*(-265420800 + 2957173*var->e010 + 143769600*var->e02 + 2304000*var->e04 + 6537600*var->e06 + 4121880*var->e08)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp1Phi*var->e0*(44590694400 + 839752536*var->e010 + 747848075*var->e012 - 46448640000*var->e02 + 4567449600*var->e04 + 791884800*var->e06 + 921614400*var->e08)*(-1 + 3*pms->eta)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*var->vom4)/59454259200;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl1_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/707788800*(pms->cos0Thp2Phi*var->e0*(var->e08*(-8349476519 + 26402827645*pms->eta - 3304278765*pms->eta2) + pms->cosp2Th0Phi*(266158080 + 151787520*var->e02 + 277052160*var->e04 + 319862320*var->e06 + 363463521*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 737280*(2959 - 9125*pms->eta + 245*pms->eta2) - 92160*var->e02*(87493 - 280355*pms->eta + 54075*pms->eta2) - 3840*var->e04*(1881611 - 5884865*pms->eta + 537505*pms->eta2) - 80*var->e06*(97078181 - 306252315*pms->eta + 36699715*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/353894400*(pms->cos0Thp2Phi*var->e0*(-265420800 + 2957173*var->e010 + 143769600*var->e02 + 2304000*var->e04 + 6537600*var->e06 + 4121880*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*var->e0*(44590694400 + 839752536*var->e010 + 747848075*var->e012 - 46448640000*var->e02 + 4567449600*var->e04 + 791884800*var->e06 + 921614400*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/118908518400;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*var->e02*pms->sinp1Th0PhiTO3*((1117440 - 470400*var->e02 + 22290*var->e04 + 2311*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(-218880 + 124800*var->e02 + 570*var->e04 + 5273*var->e06)*pms->sx)*var->vom6)/8847360;
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*var->e02*(-639221760 + 564756480*var->e02 + 27400320*var->e04 + 44907648*var->e06 + 32357603*var->e08)*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/1698693120;
	return PN4+PN3;
}

REAL8 cpart_UPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/8847360*(var->e02*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((1117440 - 470400*var->e02 + 22290*var->e04 + 2311*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(-218880 + 124800*var->e02 + 570*var->e04 + 5273*var->e06)*pms->sx)*var->vom6);
	REAL8 PN3=-1.0/1698693120*(pms->dm*var->e02*(-639221760 + 564756480*var->e02 + 27400320*var->e04 + 44907648*var->e06 + 32357603*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl1_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e03*(380113920 - 236894400*var->e02 + 11858472*var->e04 + 101269*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/2123366400;
	return PN4;
}

REAL8 cpart_UPartsl1_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e03*(380113920 - 236894400*var->e02 + 11858472*var->e04 + 101269*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/2123366400;
	return PN4;
}

REAL8 spart_UPartsl2_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=((-80717 + 44164*var->e02)*var->e06*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/9676800;
	return PN4;
}

REAL8 cpart_UPartsl2_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/9676800*(pms->cos0Thp4Phi*(-80717 + 44164*var->e02)*var->e06*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*var->e05*pms->sinp1Th0PhiTO3*((19824 + 24836*var->e02 + 22471*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 12*pms->dm*(4368 + 1792*var->e02 + 1007*var->e04)*pms->sx)*var->vom6)/3870720;
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*var->e05*(-4866624 + 120624*var->e02 + 673404*var->e04 + 826127*var->e06)*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/92897280;
	return PN4+PN3;
}

REAL8 cpart_UPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((19824 + 24836*var->e02 + 22471*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 12*pms->dm*(4368 + 1792*var->e02 + 1007*var->e04)*pms->sx)*var->vom6)/3870720;
	REAL8 PN3=(pms->dm*var->e05*(-4866624 + 120624*var->e02 + 673404*var->e04 + 826127*var->e06)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/92897280;
	return PN4+PN3;
}

REAL8 spart_UPartsl2_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*(var->e04*(-48197303 + 155012435*pms->eta - 25963615*pms->eta2) + pms->cosp2Th0Phi*(1991760 + 2165760*var->e02 + 2583947*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 480*var->e02*(76759 - 247937*pms->eta + 43092*pms->eta2) - 240*(95311 - 314555*pms->eta + 78815*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/5529600;
	REAL8 PN3=(var->e04*(10080 + 3696*var->e02 + 2422*var->e04 + 1593*var->e06)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/80640;
	REAL8 PN2=(var->e04*(-105840 - 10080*var->e02 - 5817*var->e04 - 733*var->e06 + 1076*var->e08)*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/483840;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl2_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/5529600*(pms->cos0Thp2Phi*var->e04*(var->e04*(-48197303 + 155012435*pms->eta - 25963615*pms->eta2) + pms->cosp2Th0Phi*(1991760 + 2165760*var->e02 + 2583947*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 480*var->e02*(76759 - 247937*pms->eta + 43092*pms->eta2) - 240*(95311 - 314555*pms->eta + 78815*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/80640*(pms->cos0Thp2Phi*var->e04*(10080 + 3696*var->e02 + 2422*var->e04 + 1593*var->e06)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=-1.0/483840*(pms->cos0Thp2Phi*var->e04*(-105840 - 10080*var->e02 - 5817*var->e04 - 733*var->e06 + 1076*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3317760*(pms->cos0Thp1Phi*var->e03*pms->sinp1Th0Phi*(-((-720*var->e02*(-1073 + 1957*pms->eta) + 1440*(499 + 2815*pms->eta) + 18*var->e04*(66739 + 214903*pms->eta) + var->e06*(1366567 + 9120577*pms->eta))*pms->sigx) - 2*pms->dm*(3288960 + 3589200*var->e02 + 2751264*var->e04 + 1451041*var->e06)*pms->sx + pms->cosp2Th0Phi*(3*(390240 + 366960*var->e02 + 445758*var->e04 + 498937*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e03*(var->e08*(514976375 - 44017230*pms->eta) + 3*pms->cosp2Th0Phi*(17297280 + 10120320*var->e02 + 10581480*var->e04 + 10768464*var->e06 + 10852349*var->e08)*(-1 + 2*pms->eta) + 40320*(1871 + 402*pms->eta) - 40320*var->e02*(-5003 + 786*pms->eta) - 1512*var->e04*(-201419 + 18342*pms->eta) - 224*var->e06*(-1843852 + 167757*pms->eta))*pms->sinp1Th0Phi*var->vom5)/185794560;
	REAL8 PN2=-1.0/1209600*(pms->cos0Thp1Phi*var->e03*(201600 + 15556*var->e010 + 50400*var->e02 + 40320*var->e04 + 27230*var->e06 + 20105*var->e08)*pms->sigx*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/2090188800*(pms->cos0Thp1Phi*pms->dm*var->e03*(1480550400 + 59748894*var->e010 + 47845021*var->e012 + 43545600*var->e02 + 172005120*var->e04 + 104448960*var->e06 + 77440320*var->e08)*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3317760*(var->e03*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((-720*var->e02*(-1073 + 1957*pms->eta) + 1440*(499 + 2815*pms->eta) + 18*var->e04*(66739 + 214903*pms->eta) + var->e06*(1366567 + 9120577*pms->eta))*pms->sigx) - 2*pms->dm*(3288960 + 3589200*var->e02 + 2751264*var->e04 + 1451041*var->e06)*pms->sx + pms->cosp2Th0Phi*(3*(390240 + 366960*var->e02 + 445758*var->e04 + 498937*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e03*(var->e08*(514976375 - 44017230*pms->eta) + 3*pms->cosp2Th0Phi*(17297280 + 10120320*var->e02 + 10581480*var->e04 + 10768464*var->e06 + 10852349*var->e08)*(-1 + 2*pms->eta) + 40320*(1871 + 402*pms->eta) - 40320*var->e02*(-5003 + 786*pms->eta) - 1512*var->e04*(-201419 + 18342*pms->eta) - 224*var->e06*(-1843852 + 167757*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/185794560;
	REAL8 PN2=-1.0/1209600*(var->e03*(201600 + 15556*var->e010 + 50400*var->e02 + 40320*var->e04 + 27230*var->e06 + 20105*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/2090188800*(pms->dm*var->e03*(1480550400 + 59748894*var->e010 + 47845021*var->e012 + 43545600*var->e02 + 172005120*var->e04 + 104448960*var->e06 + 77440320*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl2_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e02*(4*pms->cosp2Th0Phi*(-720*(20349 - 66625*pms->eta + 9705*pms->eta2) + 240*var->e02*(-67647 + 166475*pms->eta + 184125*pms->eta2) + 15*var->e04*(-1625301 + 4955705*pms->eta + 531615*pms->eta2) + var->e06*(-27552681 + 81875965*pms->eta + 18204315*pms->eta2)) + 3*(-3*pms->cosp4Th0Phi*(30960 + 299760*var->e02 + 189405*var->e04 + 232207*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 720*(-512643 - 18735*pms->eta2 - 103680*pms->sigx2 + 51840*pms->kappa1*pms->sigx2 - 51840*pms->dm*pms->kappa1*pms->sigx2 + 51840*pms->kappa2*pms->sigx2 + 51840*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(-81155 + 20736*(-2 + pms->kappa1 + pms->kappa2)*pms->sigx2) + 103680*(-2*pms->dm + (-1 + pms->dm)*pms->kappa1 + pms->kappa2 + pms->dm*pms->kappa2)*pms->sigx*pms->sx + 103680*(-2 + pms->kappa1 + pms->kappa2)*pms->sx2) + 240*var->e02*(-225929 + 181235*pms->eta2 - 241920*pms->sigx2 + 151680*pms->kappa1*pms->sigx2 - 151680*pms->dm*pms->kappa1*pms->sigx2 + 151680*pms->kappa2*pms->sigx2 + 151680*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(146045 + 256*(-94 + 79*pms->kappa1 + 79*pms->kappa2)*pms->sigx2) + 3840*(-94*pms->dm + 79*(-1 + pms->dm)*pms->kappa1 + 79*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(-94 + 79*pms->kappa1 + 79*pms->kappa2)*pms->sx2) + 15*var->e04*(-6972267 + 1431625*pms->eta2 - 4872960*pms->sigx2 + 3143040*pms->kappa1*pms->sigx2 - 3143040*pms->dm*pms->kappa1*pms->sigx2 + 3143040*pms->kappa2*pms->sigx2 + 3143040*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(5132309 + 768*(-1802 + 1637*pms->kappa1 + 1637*pms->kappa2)*pms->sigx2) + 3840*(-1802*pms->dm + 1637*(-1 + pms->dm)*pms->kappa1 + 1637*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(-1802 + 1637*pms->kappa1 + 1637*pms->kappa2)*pms->sx2) + var->e06*(33602685*pms->eta2 - 5*pms->eta*(110045113 + 9216*(-2282 + 2405*pms->kappa1 + 2405*pms->kappa2)*pms->sigx2) - 9*(1995983 + 2560*(3546 + 2405*(-1 + pms->dm)*pms->kappa1 - 2405*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 46080*(-2282*pms->dm + 2405*(-1 + pms->dm)*pms->kappa1 + 2405*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 46080*(-2282 + 2405*pms->kappa1 + 2405*pms->kappa2)*pms->sx2)))*var->vom6)/33177600;
	REAL8 PN3=(var->e02*(pms->dm*(397440 + 48960*var->e02 + 119160*var->e04 + 95556*var->e06 + 83467*var->e08)*pms->sigx + 6*(155520 - 2880*var->e02 + 29160*var->e04 + 17100*var->e06 + 10717*var->e08)*pms->sx)*var->vom5)/103680;
	REAL8 PN2=(var->e02*(pms->cosp2Th0Phi*(4233600 + 544486*var->e010 - 3225600*var->e02 + 1650600*var->e04 + 570360*var->e06 + 598045*var->e08)*(-1 + 3*pms->eta) + 604800*(-153 + 11*pms->eta) - 1612800*var->e02*(-45 + 37*pms->eta) - 12600*var->e04*(69 + 1025*pms->eta) - 840*var->e06*(-19647 + 21901*pms->eta) - 175*var->e08*(-101547 + 91345*pms->eta) - 2*var->e010*(-9866163 + 7353401*pms->eta))*var->vom4)/29030400;
	REAL8 PN0=(var->e02*(14515200 - 48*var->e010 + var->e012 - 4838400*var->e02 + 604800*var->e04 - 40320*var->e06 + 1680*var->e08)*var->vom2)/14515200;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/552960*(pms->cos0Thp1Phi*var->e0*pms->sinp1Th0Phi*((var->e06*(3920395 - 5121185*pms->eta) + var->e08*(4211487 - 4594308*pms->eta) + 28080*var->e02*(133 + 185*pms->eta) - 2880*(2285 + 8057*pms->eta) - 60*var->e04*(-75041 + 159715*pms->eta))*pms->sigx + 5*pms->dm*(2603520 + 418176*var->e02 + 1434144*var->e04 + 1113232*var->e06 + 1047411*var->e08)*pms->sx + pms->cosp2Th0Phi*(-((383040 - 186480*var->e02 + 286500*var->e04 + 207085*var->e06 + 247544*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*pms->sx))*var->vom6);
	REAL8 PN3=-1.0/44236800*(pms->cos0Thp1Phi*pms->dm*var->e0*(var->e010*(16295899 - 12426230*pms->eta) + pms->cosp2Th0Phi*(-1036800 + 8456267*var->e010 + 42422400*var->e02 - 4010400*var->e04 + 10927800*var->e06 + 8406060*var->e08)*(-1 + 2*pms->eta) - 115200*(2593 + 270*pms->eta) + 86400*var->e02*(-5741 + 1226*pms->eta) - 200*var->e06*(393977 + 4734*pms->eta) - 7200*var->e04*(1797 + 8902*pms->eta) - 420*var->e08*(40393 + 29030*pms->eta))*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=-1.0/7257600*(pms->cos0Thp1Phi*var->e0*(-14515200 + 120918*var->e010 + 93329*var->e012 + 10886400*var->e02 - 1512000*var->e04 + 403200*var->e06 + 154980*var->e08)*pms->sigx*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=(pms->cos0Thp1Phi*pms->dm*var->e0*(4064256000 + 87753120*var->e010 + 70748650*var->e012 + 58581993*var->e014 + 118540800*var->e04 + 166521600*var->e06 + 111343680*var->e08)*pms->sinp1Th0Phi*var->vom3)/3251404800;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((var->e06*(3920395 - 5121185*pms->eta) + var->e08*(4211487 - 4594308*pms->eta) + 28080*var->e02*(133 + 185*pms->eta) - 2880*(2285 + 8057*pms->eta) - 60*var->e04*(-75041 + 159715*pms->eta))*pms->sigx + 5*pms->dm*(2603520 + 418176*var->e02 + 1434144*var->e04 + 1113232*var->e06 + 1047411*var->e08)*pms->sx + pms->cosp2Th0Phi*(-((383040 - 186480*var->e02 + 286500*var->e04 + 207085*var->e06 + 247544*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*pms->sx))*var->vom6)/552960;
	REAL8 PN3=(pms->dm*var->e0*(var->e010*(16295899 - 12426230*pms->eta) + pms->cosp2Th0Phi*(-1036800 + 8456267*var->e010 + 42422400*var->e02 - 4010400*var->e04 + 10927800*var->e06 + 8406060*var->e08)*(-1 + 2*pms->eta) - 115200*(2593 + 270*pms->eta) + 86400*var->e02*(-5741 + 1226*pms->eta) - 200*var->e06*(393977 + 4734*pms->eta) - 7200*var->e04*(1797 + 8902*pms->eta) - 420*var->e08*(40393 + 29030*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/44236800;
	REAL8 PN2=(var->e0*(-14515200 + 120918*var->e010 + 93329*var->e012 + 10886400*var->e02 - 1512000*var->e04 + 403200*var->e06 + 154980*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/7257600;
	REAL8 PN1=-1.0/3251404800*(pms->dm*var->e0*(4064256000 + 87753120*var->e010 + 70748650*var->e012 + 58581993*var->e014 + 118540800*var->e04 + 166521600*var->e06 + 111343680*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl2_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3317760*((var->e08*(-44380911 + 139600075*pms->eta - 16355175*pms->eta2) + 3*pms->cosp2Th0Phi*(147456 + 1035648*var->e02 - 360000*var->e04 + 702584*var->e06 + 501953*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 73728*(-216 + 605*pms->eta + 105*pms->eta2) + 1152*var->e02*(-53193 + 157045*pms->eta + 9615*pms->eta2) - 2880*var->e04*(21747 - 71867*pms->eta + 21099*pms->eta2) + 8*var->e06*(-4761261 + 14216105*pms->eta + 1085595*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/57600*((115200 + 1007*var->e010 - 288000*var->e02 + 165600*var->e04 - 26000*var->e06 + 4250*var->e08)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=((16588800 + 458748*var->e010 + 356249*var->e012 - 17625600*var->e02 - 8035200*var->e04 + 4485600*var->e06 + 106200*var->e08)*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/24883200;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl2_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3317760*(pms->cos0Thp2Phi*(var->e08*(-44380911 + 139600075*pms->eta - 16355175*pms->eta2) + 3*pms->cosp2Th0Phi*(147456 + 1035648*var->e02 - 360000*var->e04 + 702584*var->e06 + 501953*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 73728*(-216 + 605*pms->eta + 105*pms->eta2) + 1152*var->e02*(-53193 + 157045*pms->eta + 9615*pms->eta2) - 2880*var->e04*(21747 - 71867*pms->eta + 21099*pms->eta2) + 8*var->e06*(-4761261 + 14216105*pms->eta + 1085595*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/57600*(pms->cos0Thp2Phi*(115200 + 1007*var->e010 - 288000*var->e02 + 165600*var->e04 - 26000*var->e06 + 4250*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*(16588800 + 458748*var->e010 + 356249*var->e012 - 17625600*var->e02 - 8035200*var->e04 + 4485600*var->e06 + 106200*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/24883200;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*var->e0*pms->sinp1Th0PhiTO3*(-((82080 - 191880*var->e02 + 104010*var->e04 - 17265*var->e06 + 1877*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(34560 - 63360*var->e02 + 31920*var->e04 - 5280*var->e06 + 629*var->e08)*pms->sx)*var->vom6)/138240;
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*var->e0*(-691200 + 583487*var->e010 - 27544320*var->e02 + 33802560*var->e04 - 6588960*var->e06 + 1564896*var->e08)*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/26542080;
	return PN4+PN3;
}

REAL8 cpart_UPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/138240*(var->e0*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((82080 - 191880*var->e02 + 104010*var->e04 - 17265*var->e06 + 1877*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(34560 - 63360*var->e02 + 31920*var->e04 - 5280*var->e06 + 629*var->e08)*pms->sx)*var->vom6);
	REAL8 PN3=-1.0/26542080*(pms->dm*var->e0*(-691200 + 583487*var->e010 - 27544320*var->e02 + 33802560*var->e04 - 6588960*var->e06 + 1564896*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl2_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e02*(-810360 + 2366160*var->e02 - 1673640*var->e04 + 329017*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/1382400;
	return PN4;
}

REAL8 cpart_UPartsl2_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e02*(-810360 + 2366160*var->e02 - 1673640*var->e04 + 329017*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/1382400;
	return PN4;
}

REAL8 spart_UPartsl3_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(9*(-1204576 + 747101*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/734003200;
	return PN4;
}

REAL8 cpart_UPartsl3_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-9*pms->cos0Thp4Phi*(-1204576 + 747101*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/734003200;
	return PN4;
}

REAL8 spart_UPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(9*pms->cos0Thp3Phi*var->e06*pms->sinp1Th0PhiTO3*((1526 + 2109*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(1918 + 627*var->e02)*pms->sx)*var->vom6)/2293760;
	REAL8 PN3=(9*pms->cos0Thp3Phi*pms->dm*(-2481920 + 312576*var->e02 + 324957*var->e04)*var->e06*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/293601280;
	return PN4+PN3;
}

REAL8 cpart_UPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(9*var->e06*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((1526 + 2109*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(1918 + 627*var->e02)*pms->sx)*var->vom6)/2293760;
	REAL8 PN3=(9*pms->dm*(-2481920 + 312576*var->e02 + 324957*var->e04)*var->e06*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/293601280;
	return PN4+PN3;
}

REAL8 spart_UPartsl3_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*(21*pms->cosp2Th0Phi*(5822272 + 5297736*var->e02 + 6438525*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 1344*(1089667 - 3617545*pms->eta + 982665*pms->eta2) - 56*var->e02*(35167489 - 113425695*pms->eta + 18566055*pms->eta2) - 5*var->e04*(507577243 - 1634953113*pms->eta + 280894761*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/275251200;
	REAL8 PN3=(27*var->e05*(243712 + 62720*var->e02 + 55136*var->e04 + 36005*var->e06)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/36700160;
	REAL8 PN2=(3*pms->cos0Thp1Phi*var->e05*(-107118592 + 5361664*var->e02 - 6513152*var->e04 - 167984*var->e06 + 1288797*var->e08)*(-1 + 3*pms->eta)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*var->vom4)/587202560;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl3_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/275251200*(pms->cos0Thp2Phi*var->e05*(21*pms->cosp2Th0Phi*(5822272 + 5297736*var->e02 + 6438525*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 1344*(1089667 - 3617545*pms->eta + 982665*pms->eta2) - 56*var->e02*(35167489 - 113425695*pms->eta + 18566055*pms->eta2) - 5*var->e04*(507577243 - 1634953113*pms->eta + 280894761*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-27*pms->cos0Thp2Phi*var->e05*(243712 + 62720*var->e02 + 55136*var->e04 + 36005*var->e06)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/36700160;
	REAL8 PN2=(-3*pms->cos0Thp2Phi*var->e05*(-107118592 + 5361664*var->e02 - 6513152*var->e04 - 167984*var->e06 + 1288797*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/1174405120;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/7864320*(pms->cos0Thp1Phi*var->e04*pms->sinp1Th0Phi*((1536*var->e02*(1073 + 3664*pms->eta) - 320*(-3241 + 87835*pms->eta) - 27*var->e04*(-30383 + 549165*pms->eta))*pms->sigx - pms->dm*(14560960 + 15499200*var->e02 + 11190507*var->e04)*pms->sx + pms->cosp2Th0Phi*((3876160 + 2528256*var->e02 + 3433533*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 81*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e04*(var->e06*(258683221 - 24296778*pms->eta) + var->e04*(208812842 - 15687252*pms->eta) + 3*pms->cosp2Th0Phi*(11079040 + 5497408*var->e02 + 5938366*var->e04 + 6249839*var->e06)*(-1 + 2*pms->eta) + 4480*(35843 + 1530*pms->eta) - 448*var->e02*(-307061 + 71370*pms->eta))*pms->sinp1Th0Phi*var->vom5)/110100480;
	REAL8 PN2=(-27*pms->cos0Thp1Phi*var->e04*(1146880 + 114688*var->e02 + 218624*var->e04 + 139520*var->e06 + 107357*var->e08)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/146800640;
	REAL8 PN1=(-9*pms->cos0Thp1Phi*pms->dm*var->e04*(131891200 + 4362702*var->e010 - 22937600*var->e02 + 16755200*var->e04 + 6725120*var->e06 + 5600015*var->e08)*pms->sinp1Th0Phi*var->vom3)/1468006400;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/7864320*(var->e04*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((1536*var->e02*(1073 + 3664*pms->eta) - 320*(-3241 + 87835*pms->eta) - 27*var->e04*(-30383 + 549165*pms->eta))*pms->sigx - pms->dm*(14560960 + 15499200*var->e02 + 11190507*var->e04)*pms->sx + pms->cosp2Th0Phi*((3876160 + 2528256*var->e02 + 3433533*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 81*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e04*(var->e06*(258683221 - 24296778*pms->eta) + var->e04*(208812842 - 15687252*pms->eta) + 3*pms->cosp2Th0Phi*(11079040 + 5497408*var->e02 + 5938366*var->e04 + 6249839*var->e06)*(-1 + 2*pms->eta) + 4480*(35843 + 1530*pms->eta) - 448*var->e02*(-307061 + 71370*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/110100480;
	REAL8 PN2=(-27*var->e04*(1146880 + 114688*var->e02 + 218624*var->e04 + 139520*var->e06 + 107357*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/146800640;
	REAL8 PN1=(-9*pms->dm*var->e04*(131891200 + 4362702*var->e010 - 22937600*var->e02 + 16755200*var->e04 + 6725120*var->e06 + 5600015*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/1468006400;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl3_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e03*(4*pms->cosp2Th0Phi*(-5120*(123459 - 427835*pms->eta + 125115*pms->eta2) + 320*var->e02*(-2009871 + 4191055*pms->eta + 7906785*pms->eta2) - 24*var->e04*(33508101 - 109939325*pms->eta + 20324445*pms->eta2) + 3*var->e06*(-295477593 + 866086025*pms->eta + 233401575*pms->eta2)) + 3*(-9*pms->cosp4Th0Phi*(-558080 + 5234880*var->e02 + 865656*var->e04 + 2528531*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) + 5120*(-4714833 + 4306565*pms->eta - 254085*pms->eta2 - 23040*pms->eta*(-56 + 25*pms->kappa1 + 25*pms->kappa2)*pms->sigx2 - 11520*(53 + 25*(-1 + pms->dm)*pms->kappa1 - 25*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + 23040*(-56*pms->dm + 25*(-1 + pms->dm)*pms->kappa1 + 25*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-56 + 25*pms->kappa1 + 25*pms->kappa2)*pms->sx2) + 320*var->e02*(8468403 + 9214575*pms->eta2 - 4527360*pms->sigx2 + 3006720*pms->kappa1*pms->sigx2 - 3006720*pms->dm*pms->kappa1*pms->sigx2 + 3006720*pms->kappa2*pms->sigx2 + 3006720*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(19243555 + 13824*(-88 + 87*pms->kappa1 + 87*pms->kappa2)*pms->sigx2) + 69120*(-88*pms->dm + 87*(-1 + pms->dm)*pms->kappa1 + 87*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 69120*(-88 + 87*pms->kappa1 + 87*pms->kappa2)*pms->sx2) + 24*var->e04*(-501315*pms->eta2 - 5*pms->eta*(45968345 + 4608*(-6376 + 5063*pms->kappa1 + 5063*pms->kappa2)*pms->sigx2) - 9*(38491423 + 1280*(8251 + 5063*(-1 + pms->dm)*pms->kappa1 - 5063*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 23040*(-6376*pms->dm + 5063*(-1 + pms->dm)*pms->kappa1 + 5063*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-6376 + 5063*pms->kappa1 + 5063*pms->kappa2)*pms->sx2) + 3*var->e06*(-1265577851 + 398367465*pms->eta2 - 812378880*pms->sigx2 + 529125120*pms->kappa1*pms->sigx2 - 529125120*pms->dm*pms->kappa1*pms->sigx2 + 529125120*pms->kappa2*pms->sigx2 + 529125120*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(360482375 + 1536*(-49176 + 45931*pms->kappa1 + 45931*pms->kappa2)*pms->sigx2) + 23040*(-49176*pms->dm + 45931*(-1 + pms->dm)*pms->kappa1 + 45931*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-49176 + 45931*pms->kappa1 + 45931*pms->kappa2)*pms->sx2)))*var->vom6)/943718400;
	REAL8 PN3=(var->e03*(pms->dm*(26951680 - 4336640*var->e02 + 7353472*var->e04 + 4448528*var->e06 + 4259543*var->e08)*pms->sigx + (65945600 - 18672640*var->e02 + 13844096*var->e04 + 5347216*var->e06 + 4663243*var->e08)*pms->sx)*var->vom5)/4587520;
	REAL8 PN2=(var->e03*(pms->cosp2Th0Phi*(6514278400 + 314860329*var->e010 - 6325043200*var->e02 + 2758103040*var->e04 - 18762240*var->e06 + 383295840*var->e08)*(-1 + 3*pms->eta) - 3*(-91750400*(-419 + 57*pms->eta) - 3010560*var->e04*(-3047 + 549*pms->eta) + 28672000*var->e02*(-1255 + 693*pms->eta) + 53760*var->e06*(-77065 + 79803*pms->eta) + 480*var->e08*(-5461831 + 6247845*pms->eta) + 81*var->e010*(-38795739 + 35361617*pms->eta)))*var->vom4)/17616076800;
	REAL8 PN0=(9*var->e03*(734003200 - 52488*var->e010 + 2187*var->e012 - 412876800*var->e02 + 92897280*var->e04 - 11612160*var->e06 + 933120*var->e08)*var->vom2)/5872025600;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e02*pms->sinp1Th0Phi*((3840*(11233 + 48637*pms->eta) - 640*var->e02*(33637 + 182657*pms->eta) + 90*var->e04*(-267569 + 979827*pms->eta) + 3*var->e06*(-4454177 + 5130387*pms->eta))*pms->sigx - pms->dm*(99621120 - 27728000*var->e02 + 48374490*var->e04 + 22266009*var->e06)*pms->sx + pms->cosp2Th0Phi*((3229440 - 3213440*var->e02 + 2413110*var->e04 + 477237*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 81*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*pms->sx))*var->vom6)/1966080;
	REAL8 PN3=-1.0/125829120*(pms->cos0Thp1Phi*pms->dm*var->e02*(3*pms->cosp2Th0Phi*(-20889600 + 98140160*var->e02 - 44487040*var->e04 + 22347392*var->e06 + 6126343*var->e08)*(-1 + 2*pms->eta) - 245760*(4519 + 626*pms->eta) + 163840*var->e02*(-18743 + 3942*pms->eta) - 3200*var->e04*(-345815 + 169326*pms->eta) + 128*var->e06*(-5029225 + 887682*pms->eta) - 13*var->e08*(6051007 + 4542786*pms->eta))*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(-27*pms->cos0Thp1Phi*var->e02*(-2867200 + 17663*var->e010 + 2867200*var->e02 - 828800*var->e04 + 170240*var->e06 + 8435*var->e08)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/22937600;
	REAL8 PN1=(3*pms->cos0Thp1Phi*pms->dm*var->e02*(8074035200 + 86143872*var->e010 + 71427061*var->e012 - 3303014400*var->e02 + 705331200*var->e04 + 103792640*var->e06 + 104482560*var->e08)*pms->sinp1Th0Phi*var->vom3)/11744051200;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1966080*(var->e02*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((3840*(11233 + 48637*pms->eta) - 640*var->e02*(33637 + 182657*pms->eta) + 90*var->e04*(-267569 + 979827*pms->eta) + 3*var->e06*(-4454177 + 5130387*pms->eta))*pms->sigx - pms->dm*(99621120 - 27728000*var->e02 + 48374490*var->e04 + 22266009*var->e06)*pms->sx + pms->cosp2Th0Phi*((3229440 - 3213440*var->e02 + 2413110*var->e04 + 477237*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 81*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e02*(3*pms->cosp2Th0Phi*(-20889600 + 98140160*var->e02 - 44487040*var->e04 + 22347392*var->e06 + 6126343*var->e08)*(-1 + 2*pms->eta) - 245760*(4519 + 626*pms->eta) + 163840*var->e02*(-18743 + 3942*pms->eta) - 3200*var->e04*(-345815 + 169326*pms->eta) + 128*var->e06*(-5029225 + 887682*pms->eta) - 13*var->e08*(6051007 + 4542786*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/125829120;
	REAL8 PN2=(27*var->e02*(-2867200 + 17663*var->e010 + 2867200*var->e02 - 828800*var->e04 + 170240*var->e06 + 8435*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/22937600;
	REAL8 PN1=(-3*pms->dm*var->e02*(8074035200 + 86143872*var->e010 + 71427061*var->e012 - 3303014400*var->e02 + 705331200*var->e04 + 103792640*var->e06 + 104482560*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/11744051200;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl3_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/235929600*(var->e0*(9*pms->cosp2Th0Phi*(9420800 + 65218560*var->e02 - 71141120*var->e04 + 51516240*var->e06 + 3929683*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 409600*(-12471 + 35453*pms->eta + 3747*pms->eta2) + 10240*var->e02*(-1310499 + 3810565*pms->eta + 243555*pms->eta2) - 1280*var->e04*(4742691 - 16970825*pms->eta + 7940985*pms->eta2) + 240*var->e06*(-6638601 + 13782215*pms->eta + 21765345*pms->eta2) - 3*var->e08*(1451030591 - 4642326245*pms->eta + 837604965*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(27*pms->cos0Thp1Phi*var->e0*(-3276800 + 10417*var->e010 + 7782400*var->e02 - 5478400*var->e04 + 1532800*var->e06 - 260840*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/6553600;
	REAL8 PN2=(var->e0*(11927552000 + 135076200*var->e010 + 83420657*var->e012 - 19795148800*var->e02 + 6362316800*var->e04 + 106982400*var->e06 - 22666560*var->e08)*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/4404019200;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl3_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/235929600*(pms->cos0Thp2Phi*var->e0*(9*pms->cosp2Th0Phi*(9420800 + 65218560*var->e02 - 71141120*var->e04 + 51516240*var->e06 + 3929683*var->e08)*(1 - 5*pms->eta + 5*pms->eta2) - 409600*(-12471 + 35453*pms->eta + 3747*pms->eta2) + 10240*var->e02*(-1310499 + 3810565*pms->eta + 243555*pms->eta2) - 1280*var->e04*(4742691 - 16970825*pms->eta + 7940985*pms->eta2) + 240*var->e06*(-6638601 + 13782215*pms->eta + 21765345*pms->eta2) - 3*var->e08*(1451030591 - 4642326245*pms->eta + 837604965*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(27*pms->cos0Thp2Phi*var->e0*(-3276800 + 10417*var->e010 + 7782400*var->e02 - 5478400*var->e04 + 1532800*var->e06 - 260840*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/13107200;
	REAL8 PN2=(pms->cos0Thp2Phi*var->e0*(11927552000 + 135076200*var->e010 + 83420657*var->e012 - 19795148800*var->e02 + 6362316800*var->e04 + 106982400*var->e06 - 22666560*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/4404019200;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1572864*(pms->cos0Thp3Phi*pms->sinp1Th0PhiTO3*(-((671744 - 5750784*var->e02 + 10841856*var->e04 - 7066624*var->e06 + 1958037*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(16384 - 98304*var->e02 + 151296*var->e04 - 89344*var->e06 + 23997*var->e08)*pms->sx)*var->vom6);
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*(22118400 + 6119559*var->e010 - 85606400*var->e02 + 37081600*var->e04 + 45996800*var->e06 - 24876450*var->e08)*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/26214400;
	return PN4+PN3;
}

REAL8 cpart_UPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((671744 - 5750784*var->e02 + 10841856*var->e04 - 7066624*var->e06 + 1958037*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(16384 - 98304*var->e02 + 151296*var->e04 - 89344*var->e06 + 23997*var->e08)*pms->sx)*var->vom6)/1572864;
	REAL8 PN3=-1.0/26214400*(pms->dm*(22118400 + 6119559*var->e010 - 85606400*var->e02 + 37081600*var->e04 + 45996800*var->e06 - 24876450*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl3_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*(-33832960 - 11642880*var->e02 + 233478400*var->e04 - 251175440*var->e06 + 89148419*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/52428800;
	return PN4;
}

REAL8 cpart_UPartsl3_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e0*(-33832960 - 11642880*var->e02 + 233478400*var->e04 - 251175440*var->e06 + 89148419*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/52428800;
	return PN4;
}

REAL8 spart_UPartsl4_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-2077*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/86400;
	return PN4;
}

REAL8 cpart_UPartsl4_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(2077*pms->cos0Thp4Phi*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/86400;
	return PN4;
}

REAL8 spart_UPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*var->e07*pms->sinp1Th0PhiTO3*(2*(204 + 295*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(684 + 145*var->e02)*pms->sx)*var->vom6)/60480;
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*(-461232 + 113436*var->e02 + 39709*var->e04)*var->e07*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/4354560;
	return PN4+PN3;
}

REAL8 cpart_UPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(2*(204 + 295*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(684 + 145*var->e02)*pms->sx)*var->vom6)/60480;
	REAL8 PN3=(pms->dm*(-461232 + 113436*var->e02 + 39709*var->e04)*var->e07*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/4354560;
	return PN4+PN3;
}

REAL8 spart_UPartsl4_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e06*(var->e02*(-430776813 + 1382149945*pms->eta - 191238225*pms->eta2) + 3*pms->cosp2Th0Phi*(10808126 + 7727519*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 14*(28708083 - 95790935*pms->eta + 27792615*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/58060800;
	REAL8 PN3=((1232 + 136*var->e02 + 265*var->e04)*var->e06*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/5040;
	REAL8 PN2=(var->e06*(-2255904 + 503280*var->e02 - 207306*var->e04 + 13097*var->e06)*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/6531840;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl4_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/58060800*(pms->cos0Thp2Phi*var->e06*(var->e02*(-430776813 + 1382149945*pms->eta - 191238225*pms->eta2) + 3*pms->cosp2Th0Phi*(10808126 + 7727519*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 14*(28708083 - 95790935*pms->eta + 27792615*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/5040*(pms->cos0Thp2Phi*(1232 + 136*var->e02 + 265*var->e04)*var->e06*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=-1.0/6531840*(pms->cos0Thp2Phi*var->e06*(-2255904 + 503280*var->e02 - 207306*var->e04 + 13097*var->e06)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3870720*(pms->cos0Thp1Phi*var->e05*pms->sinp1Th0Phi*((84*(21133 - 305315*pms->eta) + 14*var->e02*(138133 + 659935*pms->eta) - 3*var->e04*(-498905 + 3684863*pms->eta))*pms->sigx - 4*pms->dm*(1799868 + 1908347*var->e02 + 1253355*var->e04)*pms->sx + pms->cosp2Th0Phi*((2664564 + 979258*var->e02 + 1887959*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e05*(var->e06*(73579529 - 7695868*pms->eta) + var->e04*(67222770 - 2598276*pms->eta) + 2*pms->cosp2Th0Phi*(5195736 + 2177280*var->e02 + 2290161*var->e04 + 2649071*var->e06)*(-1 + 2*pms->eta) + 1008*(81861 + 1814*pms->eta) - 224*var->e02*(-126229 + 61920*pms->eta))*pms->sinp1Th0Phi*var->vom5)/30965760;
	REAL8 PN2=-1.0/272160*(pms->cos0Thp1Phi*var->e05*(72576 - 6048*var->e02 + 14256*var->e04 + 7038*var->e06 + 5933*var->e08)*pms->sigx*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/217728000*(pms->cos0Thp1Phi*pms->dm*var->e05*(210470400 + 5453583*var->e010 - 82857600*var->e02 + 37713600*var->e04 + 4923000*var->e06 + 7294900*var->e08)*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3870720*(var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((84*(21133 - 305315*pms->eta) + 14*var->e02*(138133 + 659935*pms->eta) - 3*var->e04*(-498905 + 3684863*pms->eta))*pms->sigx - 4*pms->dm*(1799868 + 1908347*var->e02 + 1253355*var->e04)*pms->sx + pms->cosp2Th0Phi*((2664564 + 979258*var->e02 + 1887959*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e05*(var->e06*(73579529 - 7695868*pms->eta) + var->e04*(67222770 - 2598276*pms->eta) + 2*pms->cosp2Th0Phi*(5195736 + 2177280*var->e02 + 2290161*var->e04 + 2649071*var->e06)*(-1 + 2*pms->eta) + 1008*(81861 + 1814*pms->eta) - 224*var->e02*(-126229 + 61920*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/30965760;
	REAL8 PN2=-1.0/272160*(var->e05*(72576 - 6048*var->e02 + 14256*var->e04 + 7038*var->e06 + 5933*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4);
	REAL8 PN1=-1.0/217728000*(pms->dm*var->e05*(210470400 + 5453583*var->e010 - 82857600*var->e02 + 37713600*var->e04 + 4923000*var->e06 + 7294900*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl4_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*(-4*pms->cosp2Th0Phi*(60*(225741 - 856145*pms->eta + 434985*pms->eta2) - 3*var->e02*(-5832549 + 9994825*pms->eta + 29410575*pms->eta2) + var->e04*(13536153 - 53551085*pms->eta + 42228645*pms->eta2)) + 3*(3*pms->cosp4Th0Phi*(150780 - 562329*var->e02 + 127429*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 60*(-12973367 - 898675*pms->eta2 - 1330560*pms->sigx2 + 603840*pms->kappa1*pms->sigx2 - 603840*pms->dm*pms->kappa1*pms->sigx2 + 603840*pms->kappa2*pms->sigx2 + 603840*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(-879421 + 128*(-1514 + 629*pms->kappa1 + 629*pms->kappa2)*pms->sigx2) + 1920*(-1514*pms->dm + 629*(-1 + pms->dm)*pms->kappa1 + 629*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1920*(-1514 + 629*pms->kappa1 + 629*pms->kappa2)*pms->sx2) + 3*var->e02*(102530037 + 38651945*pms->eta2 - 4458240*pms->sigx2 + 4195200*pms->kappa1*pms->sigx2 - 4195200*pms->dm*pms->kappa1*pms->sigx2 + 4195200*pms->kappa2*pms->sigx2 + 4195200*pms->dm*pms->kappa2*pms->sigx2 - 5*pms->eta*(76228213 + 768*(-274 + 2185*pms->kappa1 + 2185*pms->kappa2)*pms->sigx2) + 3840*(-274*pms->dm + 2185*(-1 + pms->dm)*pms->kappa1 + 2185*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 3840*(-274 + 2185*pms->kappa1 + 2185*pms->kappa2)*pms->sx2) + var->e04*(-37905135*pms->eta2 + pms->eta*(201578255 - 5760*(-13622 + 9371*pms->kappa1 + 9371*pms->kappa2)*pms->sigx2) - 9*(34807659 + 320*(16182 + 9371*(-1 + pms->dm)*pms->kappa1 - 9371*(1 + pms->dm)*pms->kappa2)*pms->sigx2) + 5760*(-13622*pms->dm + 9371*(-1 + pms->dm)*pms->kappa1 + 9371*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 5760*(-13622 + 9371*pms->kappa1 + 9371*pms->kappa2)*pms->sx2)))*var->vom6)/16588800;
	REAL8 PN3=(var->e04*(pms->dm*(1585080 - 693504*var->e02 + 503013*var->e04 + 142859*var->e06)*pms->sigx + 6*(662760 - 362880*var->e02 + 192087*var->e04 + 20105*var->e06)*pms->sx)*var->vom5)/181440;
	REAL8 PN2=(var->e04*(var->e06*(76709088 - 54584480*pms->eta) + var->e08*(9281235 - 18901673*pms->eta) + pms->cosp2Th0Phi*(31530240 - 38215296*var->e02 + 19451712*var->e04 - 3590176*var->e06 + 1561739*var->e08)*(-1 + 3*pms->eta) + 80640*(-6417 + 1091*pms->eta) + 9408*var->e04*(-26217 + 9419*pms->eta) - 8064*var->e02*(-74229 + 32815*pms->eta))*var->vom4)/46448640;
	REAL8 PN0=(-4*var->e04*(-14175 + 8*var->e010 + 11340*var->e02 - 3780*var->e04 + 720*var->e06 - 90*var->e08)*var->vom2)/42525;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e03*pms->sinp1Th0Phi*(-((var->e04*(33718374 - 200734398*pms->eta) - 1440*(40967 + 211775*pms->eta) + 180*var->e02*(161207 + 1647839*pms->eta) + var->e06*(5148265 + 19870777*pms->eta))*pms->sigx) - 4*pms->dm*(39129120 - 25299900*var->e02 + 22557753*var->e04 + 2348129*var->e06)*pms->sx + pms->cosp2Th0Phi*(-9*(-614880 + 842300*var->e02 - 601478*var->e04 + 74989*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*pms->sx))*var->vom6)/1658880;
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e03*(var->e06*(3074611316 - 746729256*pms->eta) + 3*pms->cosp2Th0Phi*(97009920 - 331077600*var->e02 + 229565952*var->e04 - 100573284*var->e06 + 6741239*var->e08)*(-1 + 2*pms->eta) + 80640*(17041 + 5070*pms->eta) + 12096*var->e04*(-539659 + 165024*pms->eta) - 10080*var->e02*(-946697 + 189714*pms->eta) + 5*var->e08*(-53492783 + 48314622*pms->eta))*pms->sinp1Th0Phi*var->vom5)/185794560;
	REAL8 PN2=(pms->cos0Thp1Phi*var->e03*(806400 - 4889*var->e010 - 1008000*var->e02 + 433440*var->e04 - 110320*var->e06 + 11450*var->e08)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/151200;
	REAL8 PN1=(pms->cos0Thp1Phi*pms->dm*var->e03*(12976588800 + 73705032*var->e010 + 65559733*var->e012 - 9492940800*var->e02 + 3019887360*var->e04 - 359493120*var->e06 + 137837160*var->e08)*pms->sinp1Th0Phi*var->vom3)/4180377600;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1658880*(var->e03*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((var->e04*(33718374 - 200734398*pms->eta) - 1440*(40967 + 211775*pms->eta) + 180*var->e02*(161207 + 1647839*pms->eta) + var->e06*(5148265 + 19870777*pms->eta))*pms->sigx) - 4*pms->dm*(39129120 - 25299900*var->e02 + 22557753*var->e04 + 2348129*var->e06)*pms->sx + pms->cosp2Th0Phi*(-9*(-614880 + 842300*var->e02 - 601478*var->e04 + 74989*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*pms->sx))*var->vom6);
	REAL8 PN3=-1.0/185794560*(pms->dm*var->e03*(var->e06*(3074611316 - 746729256*pms->eta) + 3*pms->cosp2Th0Phi*(97009920 - 331077600*var->e02 + 229565952*var->e04 - 100573284*var->e06 + 6741239*var->e08)*(-1 + 2*pms->eta) + 80640*(17041 + 5070*pms->eta) + 12096*var->e04*(-539659 + 165024*pms->eta) - 10080*var->e02*(-946697 + 189714*pms->eta) + 5*var->e08*(-53492783 + 48314622*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(var->e03*(-806400 + 4889*var->e010 + 1008000*var->e02 - 433440*var->e04 + 110320*var->e06 - 11450*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/151200;
	REAL8 PN1=-1.0/4180377600*(pms->dm*var->e03*(12976588800 + 73705032*var->e010 + 65559733*var->e012 - 9492940800*var->e02 + 3019887360*var->e04 - 359493120*var->e06 + 137837160*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl4_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2764800*(var->e02*(pms->cosp2Th0Phi*(594720 + 19361040*var->e02 - 28685610*var->e04 + 20026327*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 1440*(-114643 + 328255*pms->eta + 20965*pms->eta2) + 240*var->e02*(-1528639 + 4388715*pms->eta + 255985*pms->eta2) - 30*var->e04*(2633917 - 11383385*pms->eta + 8528025*pms->eta2) + var->e06*(46559657 - 209428165*pms->eta + 206614525*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/720*(var->e02*(11520 - 28800*var->e02 + 24240*var->e04 - 9416*var->e06 + 2159*var->e08)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(var->e02*(258854400 + 772411*var->e010 - 510048000*var->e02 + 293126400*var->e04 - 67663680*var->e06 + 9743930*var->e08)*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/38707200;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl4_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2764800*(pms->cos0Thp2Phi*var->e02*(pms->cosp2Th0Phi*(594720 + 19361040*var->e02 - 28685610*var->e04 + 20026327*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 1440*(-114643 + 328255*pms->eta + 20965*pms->eta2) + 240*var->e02*(-1528639 + 4388715*pms->eta + 255985*pms->eta2) - 30*var->e04*(2633917 - 11383385*pms->eta + 8528025*pms->eta2) + var->e06*(46559657 - 209428165*pms->eta + 206614525*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=-1.0/720*(pms->cos0Thp2Phi*var->e02*(11520 - 28800*var->e02 + 24240*var->e04 - 9416*var->e06 + 2159*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5);
	REAL8 PN2=(pms->cos0Thp2Phi*var->e02*(258854400 + 772411*var->e010 - 510048000*var->e02 + 293126400*var->e04 - 67663680*var->e06 + 9743930*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/38707200;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/221184*(pms->cos0Thp3Phi*var->e0*pms->sinp1Th0PhiTO3*(-((481536 - 2969856*var->e02 + 5416224*var->e04 - 4095200*var->e06 + 1534889*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 384*pms->dm*(2304 - 10944*var->e02 + 16896*var->e04 - 11620*var->e06 + 4165*var->e08)*pms->sx)*var->vom6);
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*var->e0*(300326400 + 36371131*var->e010 - 1106092800*var->e02 + 1087833600*var->e04 - 265468800*var->e06 - 46602390*var->e08)*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/66355200;
	return PN4+PN3;
}

REAL8 cpart_UPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((481536 - 2969856*var->e02 + 5416224*var->e04 - 4095200*var->e06 + 1534889*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 384*pms->dm*(2304 - 10944*var->e02 + 16896*var->e04 - 11620*var->e06 + 4165*var->e08)*pms->sx)*var->vom6)/221184;
	REAL8 PN3=-1.0/66355200*(pms->dm*var->e0*(300326400 + 36371131*var->e010 - 1106092800*var->e02 + 1087833600*var->e04 - 265468800*var->e06 - 46602390*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl4_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/552960*((-589824 + 4835232*var->e02 - 8019504*var->e04 + 1267588*var->e06 + 4681423*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl4_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/552960*(pms->cos0Thp4Phi*(-589824 + 4835232*var->e02 - 8019504*var->e04 + 1267588*var->e06 + 4681423*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl5_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-262120625*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/7134511104;
	return PN4;
}

REAL8 cpart_UPartsl5_km4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(262120625*pms->cos0Thp4Phi*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/7134511104;
	return PN4;
}

REAL8 spart_UPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(3125*pms->cos0Thp3Phi*var->e08*pms->sinp1Th0PhiTO3*(479*(-1 + 3*pms->eta)*pms->sigx + 3081*pms->dm*pms->sx)*var->vom6)/198180864;
	REAL8 PN3=(625*pms->cos0Thp3Phi*pms->dm*(-824058 + 320939*var->e02)*var->e08*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/3567255552;
	return PN4+PN3;
}

REAL8 cpart_UPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(3125*var->e08*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(479*(-1 + 3*pms->eta)*pms->sigx + 3081*pms->dm*pms->sx)*var->vom6)/198180864;
	REAL8 PN3=(625*pms->dm*(-824058 + 320939*var->e02)*var->e08*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/3567255552;
	return PN4+PN3;
}

REAL8 spart_UPartsl5_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*(var->e02*(-14379037979 + 45565500121*pms->eta - 3765787545*pms->eta2) + pms->cosp2Th0Phi*(1407922912 + 719033853*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 32*(562839893 - 1886264827*pms->eta + 578112115*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/1981808640;
	REAL8 PN3=(3125*(62208 - 3816*var->e02 + 13775*var->e04)*var->e07*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/594542592;
	REAL8 PN2=(625*(-20072448 + 8323776*var->e02 - 3137640*var->e04 + 459277*var->e06)*var->e07*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/28538044416;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl5_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1981808640*(pms->cos0Thp2Phi*var->e07*(var->e02*(-14379037979 + 45565500121*pms->eta - 3765787545*pms->eta2) + pms->cosp2Th0Phi*(1407922912 + 719033853*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) - 32*(562839893 - 1886264827*pms->eta + 578112115*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-3125*pms->cos0Thp2Phi*(62208 - 3816*var->e02 + 13775*var->e04)*var->e07*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/594542592;
	REAL8 PN2=(-625*pms->cos0Thp2Phi*(-20072448 + 8323776*var->e02 - 3137640*var->e04 + 459277*var->e06)*var->e07*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/28538044416;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e06*pms->sinp1Th0Phi*(-((14*(7412737 - 96145763*pms->eta) + var->e02*(85427849 + 762500789*pms->eta))*pms->sigx) + pms->dm*(238362866 + 260815733*var->e02)*pms->sx + 25*pms->cosp2Th0Phi*(-7*(679842 + 59023*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 625*pms->dm*(-434 + 299*var->e02)*pms->sx))*var->vom6)/123863040;
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e06*(15*pms->cosp2Th0Phi*(398087424 + 147238144*var->e02 + 126130909*var->e04)*(-1 + 2*pms->eta) + 1792*(37466981 + 666870*pms->eta) - 1280*var->e02*(1385945 + 8349342*pms->eta) + 9*var->e04*(4801483491 + 110249210*pms->eta))*pms->sinp1Th0Phi*var->vom5)/15854469120;
	REAL8 PN2=(-3125*pms->cos0Thp1Phi*var->e06*(48384 - 13824*var->e02 + 11313*var->e04 + 3005*var->e06)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/445906944;
	REAL8 PN1=(-3125*pms->cos0Thp1Phi*pms->dm*var->e06*(43352064 - 26984448*var->e02 + 12168576*var->e04 - 875840*var->e06 + 1405927*var->e08)*pms->sinp1Th0Phi*var->vom3)/114152177664;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((14*(7412737 - 96145763*pms->eta) + var->e02*(85427849 + 762500789*pms->eta))*pms->sigx) + pms->dm*(238362866 + 260815733*var->e02)*pms->sx + 25*pms->cosp2Th0Phi*(-7*(679842 + 59023*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 625*pms->dm*(-434 + 299*var->e02)*pms->sx))*var->vom6)/123863040;
	REAL8 PN3=(pms->dm*var->e06*(15*pms->cosp2Th0Phi*(398087424 + 147238144*var->e02 + 126130909*var->e04)*(-1 + 2*pms->eta) + 1792*(37466981 + 666870*pms->eta) - 1280*var->e02*(1385945 + 8349342*pms->eta) + 9*var->e04*(4801483491 + 110249210*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/15854469120;
	REAL8 PN2=(-3125*var->e06*(48384 - 13824*var->e02 + 11313*var->e04 + 3005*var->e06)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/445906944;
	REAL8 PN1=(-3125*pms->dm*var->e06*(43352064 - 26984448*var->e02 + 12168576*var->e04 - 875840*var->e06 + 1405927*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/114152177664;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl5_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*(-4*pms->cosp2Th0Phi*(6720*(1460349 - 6529213*pms->eta + 5604141*pms->eta2) - 56*var->e02*(-392142273 + 590975065*pms->eta + 2176912455*pms->eta2) + var->e04*(4454529597 - 37631338925*pms->eta + 86192431485*pms->eta2)) + 3*(3*pms->cosp4Th0Phi*(282031680 - 827615656*var->e02 + 424706721*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 6720*(-139438167 - 11608803*pms->eta2 - 12254976*pms->sigx2 + 5407488*pms->kappa1*pms->sigx2 - 5407488*pms->dm*pms->kappa1*pms->sigx2 + 5407488*pms->kappa2*pms->sigx2 + 5407488*pms->dm*pms->kappa2*pms->sigx2 + pms->eta*(154233379 - 4608*(-5944 + 2347*pms->kappa1 + 2347*pms->kappa2)*pms->sigx2) + 4608*(-5944*pms->dm + 2347*(-1 + pms->dm)*pms->kappa1 + 2347*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 4608*(-5944 + 2347*pms->kappa1 + 2347*pms->kappa2)*pms->sx2) + 56*var->e02*(11355942869 + 3106224025*pms->eta2 + 172350720*pms->sigx2 + 35024640*pms->kappa1*pms->sigx2 - 35024640*pms->dm*pms->kappa1*pms->sigx2 + 35024640*pms->kappa2*pms->sigx2 + 35024640*pms->dm*pms->kappa2*pms->sigx2 - 15*pms->eta*(1979768407 + 512*(108008 + 9121*pms->kappa1 + 9121*pms->kappa2)*pms->sigx2) + 7680*(108008*pms->dm + 9121*(-1 + pms->dm)*pms->kappa1 + 9121*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(108008 + 9121*pms->kappa1 + 9121*pms->kappa2)*pms->sx2) + var->e04*(-490912530279 + 697377999155*pms->eta - 97615648115*pms->eta2 - 38400*pms->eta*(-2112776 + 1202513*pms->kappa1 + 1202513*pms->kappa2)*pms->sigx2 - 19200*(2258901 + 1202513*(-1 + pms->dm)*pms->kappa1 - 1202513*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + 38400*(-2112776*pms->dm + 1202513*(-1 + pms->dm)*pms->kappa1 + 1202513*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 38400*(-2112776 + 1202513*pms->kappa1 + 1202513*pms->kappa2)*pms->sx2)))*var->vom6)/11890851840;
	REAL8 PN3=(var->e05*(pms->dm*(1897555968 - 1344628992*var->e02 + 822163488*var->e04 + 4001723*var->e06)*pms->sigx - 9*(-538159104 + 435819776*var->e02 - 233669664*var->e04 + 24697881*var->e06)*pms->sx)*var->vom5)/148635648;
	REAL8 PN2=(var->e05*(pms->cosp2Th0Phi*(191721406464 - 279750094848*var->e02 + 171627047424*var->e04 - 51387294960*var->e06 + 14478835535*var->e08)*(-1 + 3*pms->eta) + 18579456*(-162441 + 31387*pms->eta) - 774144*var->e02*(-5438313 + 2118091*pms->eta) + 13824*var->e04*(-167120889 + 64790923*pms->eta) - 720*var->e06*(-1095597477 + 588601439*pms->eta) - 5*var->e08*(18302281173 + 2404461889*pms->eta))*var->vom4)/171228266496;
	REAL8 PN0=(-625*var->e05*(-148635648 + 390625*var->e010 + 154828800*var->e02 - 69120000*var->e04 + 18000000*var->e06 - 3125000*var->e08)*var->vom2)/57076088832;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/70778880*(pms->cos0Thp1Phi*var->e04*pms->sinp1Th0Phi*((var->e04*(2599199903 - 21884911357*pms->eta) + 4608*var->e02*(403812 + 6519967*pms->eta) - 960*(3959903 + 24189443*pms->eta))*pms->sigx + pms->dm*(11557548480 - 11375906112*var->e02 + 9005878639*var->e04)*pms->sx + 25*pms->cosp2Th0Phi*(-((17586240 - 29778432*var->e02 + 23445617*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 625*pms->dm*(3648 - 7872*var->e02 + 6097*var->e04)*pms->sx))*var->vom6);
	REAL8 PN3=-1.0/2972712960*(pms->cos0Thp1Phi*pms->dm*var->e04*(45*pms->cosp2Th0Phi*(-236589696 + 747507264*var->e02 - 656937106*var->e04 + 323405239*var->e06)*(-1 + 2*pms->eta) - 40320*(-24133 + 296586*pms->eta) + 157248*var->e02*(-1971467 + 372790*pms->eta) - 630*var->e04*(-461987881 + 114276946*pms->eta) + var->e06*(-150327737117 + 36921617370*pms->eta))*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(3125*pms->cos0Thp1Phi*var->e04*(2064384 - 3096576*var->e02 + 1752576*var->e04 - 570112*var->e06 + 107505*var->e08)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/792723456;
	REAL8 PN1=(pms->cos0Thp1Phi*pms->dm*var->e04*(64229179392 + 94721338*var->e010 - 65771274240*var->e02 + 28954437120*var->e04 - 6754844160*var->e06 + 1393434225*var->e08)*pms->sinp1Th0Phi*var->vom3)/14269022208;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((var->e04*(2599199903 - 21884911357*pms->eta) + 4608*var->e02*(403812 + 6519967*pms->eta) - 960*(3959903 + 24189443*pms->eta))*pms->sigx + pms->dm*(11557548480 - 11375906112*var->e02 + 9005878639*var->e04)*pms->sx + 25*pms->cosp2Th0Phi*(-((17586240 - 29778432*var->e02 + 23445617*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 625*pms->dm*(3648 - 7872*var->e02 + 6097*var->e04)*pms->sx))*var->vom6)/70778880;
	REAL8 PN3=(pms->dm*var->e04*(45*pms->cosp2Th0Phi*(-236589696 + 747507264*var->e02 - 656937106*var->e04 + 323405239*var->e06)*(-1 + 2*pms->eta) - 40320*(-24133 + 296586*pms->eta) + 157248*var->e02*(-1971467 + 372790*pms->eta) - 630*var->e04*(-461987881 + 114276946*pms->eta) + var->e06*(-150327737117 + 36921617370*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/2972712960;
	REAL8 PN2=(-3125*var->e04*(2064384 - 3096576*var->e02 + 1752576*var->e04 - 570112*var->e06 + 107505*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/792723456;
	REAL8 PN1=-1.0/14269022208*(pms->dm*var->e04*(64229179392 + 94721338*var->e010 - 65771274240*var->e02 + 28954437120*var->e04 - 6754844160*var->e06 + 1393434225*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl5_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/637009920*(var->e03*(3*pms->cosp2Th0Phi*(-239662080 + 3942469440*var->e02 - 6619332168*var->e04 + 5121329813*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 46080*(-1791441 + 5140375*pms->eta + 188913*pms->eta2) + 2880*var->e02*(-59168301 + 167633735*pms->eta + 8526201*pms->eta2) - 72*var->e04*(249049095 - 1556673049*pms->eta + 1641830865*pms->eta2) + var->e06*(56868917895 - 219466189373*pms->eta + 126409717965*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-3125*var->e03*(1032192 - 2774016*var->e02 + 2717568*var->e04 - 1333136*var->e06 + 395525*var->e08)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/99090432;
	REAL8 PN2=-1.0/9512681472*(pms->cos0Thp1Phi*var->e03*(-259253600256 + 4332283943*var->e010 + 580766957568*var->e02 - 441788755968*var->e04 + 161681476096*var->e06 - 36217304480*var->e08)*(-1 + 3*pms->eta)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl5_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/637009920*(pms->cos0Thp2Phi*var->e03*(3*pms->cosp2Th0Phi*(-239662080 + 3942469440*var->e02 - 6619332168*var->e04 + 5121329813*var->e06)*(1 - 5*pms->eta + 5*pms->eta2) - 46080*(-1791441 + 5140375*pms->eta + 188913*pms->eta2) + 2880*var->e02*(-59168301 + 167633735*pms->eta + 8526201*pms->eta2) - 72*var->e04*(249049095 - 1556673049*pms->eta + 1641830865*pms->eta2) + var->e06*(56868917895 - 219466189373*pms->eta + 126409717965*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-3125*pms->cos0Thp2Phi*var->e03*(1032192 - 2774016*var->e02 + 2717568*var->e04 - 1333136*var->e06 + 395525*var->e08)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/99090432;
	REAL8 PN2=-1.0/19025362944*(pms->cos0Thp2Phi*var->e03*(-259253600256 + 4332283943*var->e010 + 580766957568*var->e02 - 441788755968*var->e04 + 161681476096*var->e06 - 36217304480*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(25*pms->cos0Thp3Phi*var->e02*pms->sinp1Th0PhiTO3*(-((-495360 + 2738304*var->e02 - 5092350*var->e04 + 4361495*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 375*pms->dm*(-2304 + 10368*var->e02 - 16770*var->e04 + 13171*var->e06)*pms->sx)*var->vom6)/1769472;
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*var->e02*(4905418752 - 18372132864*var->e02 + 22513553280*var->e04 - 11541048960*var->e06 + 2715026945*var->e08)*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/339738624;
	return PN4+PN3;
}

REAL8 cpart_UPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-25*var->e02*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-495360 + 2738304*var->e02 - 5092350*var->e04 + 4361495*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 375*pms->dm*(-2304 + 10368*var->e02 - 16770*var->e04 + 13171*var->e06)*pms->sx)*var->vom6)/1769472;
	REAL8 PN3=-1.0/339738624*(pms->dm*var->e02*(4905418752 - 18372132864*var->e02 + 22513553280*var->e04 - 11541048960*var->e06 + 2715026945*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl5_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e0*(404176896 - 2613786624*var->e02 + 5083048704*var->e04 - 3747316400*var->e06 + 705267129*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/56623104;
	return PN4;
}

REAL8 cpart_UPartsl5_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e0*(404176896 - 2613786624*var->e02 + 5083048704*var->e04 - 3747316400*var->e06 + 705267129*var->e08)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/56623104;
	return PN4;
}

REAL8 spart_UPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(243*pms->cos0Thp3Phi*var->e09*pms->sinp1Th0PhiTO3*((-1 + 3*pms->eta)*pms->sigx + 8*pms->dm*pms->sx)*var->vom6)/28672;
	REAL8 PN3=(81*pms->cos0Thp3Phi*pms->dm*(-13780 + 7611*var->e02)*var->e09*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/5734400;
	return PN4+PN3;
}

REAL8 cpart_UPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(243*var->e09*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*((-1 + 3*pms->eta)*pms->sigx + 8*pms->dm*pms->sx)*var->vom6)/28672;
	REAL8 PN3=(81*pms->dm*(-13780 + 7611*var->e02)*var->e09*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/5734400;
	return PN4+PN3;
}

REAL8 spart_UPartsl6_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e08*(-51650917 + 173767065*pms->eta - 55810125*pms->eta2 + 3917913*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/4300800;
	REAL8 PN3=(-243*(-4 + var->e02)*var->e08*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/2240;
	REAL8 PN2=(-27*pms->cos0Thp1Phi*(3740 - 2315*var->e02 + 976*var->e04)*var->e08*(-1 + 3*pms->eta)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*var->vom4)/89600;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl6_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/4300800*(pms->cos0Thp2Phi*var->e08*(-51650917 + 173767065*pms->eta - 55810125*pms->eta2 + 3917913*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(243*pms->cos0Thp2Phi*(-4 + var->e02)*var->e08*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/2240;
	REAL8 PN2=(27*pms->cos0Thp2Phi*(3740 - 2315*var->e02 + 976*var->e04)*var->e08*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/179200;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e07*pms->sinp1Th0Phi*(-((1134358 - 14509666*pms->eta + 3*var->e02*(219110 + 3817483*pms->eta))*pms->sigx) + pms->dm*(1726016 + 2062053*var->e02)*pms->sx + pms->cosp2Th0Phi*((-1151366 + 218943*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 5832*pms->dm*(-12 + 11*var->e02)*pms->sx))*var->vom6)/860160;
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e07*(87599696 + 1602144*pms->eta + 3*pms->cosp2Th0Phi*(1937392 + 708976*var->e02 + 266839*var->e04)*(-1 + 2*pms->eta) - 32*var->e02*(953132 + 434853*pms->eta) + 5*var->e04*(10893193 + 995742*pms->eta))*pms->sinp1Th0Phi*var->vom5)/13762560;
	REAL8 PN2=(-243*pms->cos0Thp1Phi*(80 - 40*var->e02 + 25*var->e04 + var->e06)*var->e07*pms->sigx*pms->sinp1Th0Phi*var->vom4)/44800;
	REAL8 PN1=(-81*pms->cos0Thp1Phi*pms->dm*var->e07*(577280 - 494560*var->e02 + 251680*var->e04 - 52382*var->e06 + 23467*var->e08)*pms->sinp1Th0Phi*var->vom3)/31539200;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((1134358 - 14509666*pms->eta + 3*var->e02*(219110 + 3817483*pms->eta))*pms->sigx) + pms->dm*(1726016 + 2062053*var->e02)*pms->sx + pms->cosp2Th0Phi*((-1151366 + 218943*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 5832*pms->dm*(-12 + 11*var->e02)*pms->sx))*var->vom6)/860160;
	REAL8 PN3=(pms->dm*var->e07*(87599696 + 1602144*pms->eta + 3*pms->cosp2Th0Phi*(1937392 + 708976*var->e02 + 266839*var->e04)*(-1 + 2*pms->eta) - 32*var->e02*(953132 + 434853*pms->eta) + 5*var->e04*(10893193 + 995742*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/13762560;
	REAL8 PN2=(-243*(80 - 40*var->e02 + 25*var->e04 + var->e06)*var->e07*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/44800;
	REAL8 PN1=(-81*pms->dm*var->e07*(577280 - 494560*var->e02 + 251680*var->e04 - 52382*var->e06 + 23467*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/31539200;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl6_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e06*(4*pms->cosp2Th0Phi*(-7*(2159709 - 14384225*pms->eta + 21690825*pms->eta2) + var->e02*(-89672697 + 131943565*pms->eta + 494541195*pms->eta2)) - 3*(4347*pms->cosp4Th0Phi*(-891 + 2471*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + var->e02*(-3127587081 - 746492685*pms->eta2 - 622080*(162 + 41*(-1 + pms->dm)*pms->kappa1 - 41*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + pms->eta*(6976405805 - 1244160*(-242 + 41*pms->kappa1 + 41*pms->kappa2)*pms->sigx2) + 1244160*(-242*pms->dm + 41*(-1 + pms->dm)*pms->kappa1 + 41*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1244160*(-242 + 41*pms->kappa1 + 41*pms->kappa2)*pms->sx2) + 7*(465494883 + 44749455*pms->eta2 + 5760*(6334 + 2735*(-1 + pms->dm)*pms->kappa1 - 2735*(1 + pms->dm)*pms->kappa2)*pms->sigx2 + 5*pms->eta*(-110301667 + 2304*(-7198 + 2735*pms->kappa1 + 2735*pms->kappa2)*pms->sigx2) - 11520*(-7198*pms->dm + 2735*(-1 + pms->dm)*pms->kappa1 + 2735*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx - 11520*(-7198 + 2735*pms->kappa1 + 2735*pms->kappa2)*pms->sx2)))*var->vom6)/25804800;
	REAL8 PN3=(var->e06*(pms->dm*(330512 - 322504*var->e02 + 204593*var->e04)*pms->sigx + (854560 - 914576*var->e02 + 550450*var->e04)*pms->sx)*var->vom5)/17920;
	REAL8 PN2=-1.0/430080*(var->e06*(pms->cosp2Th0Phi*(-753872 + 1287824*var->e02 - 938727*var->e04 + 369958*var->e06)*(-1 + 3*pms->eta) + 3*(3849104 - 811440*pms->eta + 16*var->e02*(-394469 + 142623*pms->eta) - 9*var->e04*(-476243 + 184905*pms->eta) + 2*var->e06*(-869615 + 405549*pms->eta)))*var->vom4);
	REAL8 PN0=(81*var->e06*(4480 - 5760*var->e02 + 3240*var->e04 - 1080*var->e06 + 243*var->e08)*var->vom2)/179200;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1720320*(pms->cos0Thp1Phi*var->e05*pms->sinp1Th0Phi*((-336*(396023 + 2853255*pms->eta) + 28*var->e02*(2218969 + 54766805*pms->eta) - 3*var->e04*(-40277425 + 419537863*pms->eta))*pms->sigx + 4*pms->dm*(116308752 - 151688432*var->e02 + 125304345*var->e04)*pms->sx + pms->cosp2Th0Phi*(-((18819696 - 37481948*var->e02 + 33485121*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(56 - 133*var->e02 + 121*var->e04)*pms->sx))*var->vom6);
	REAL8 PN3=-1.0/13762560*(pms->cos0Thp1Phi*pms->dm*var->e05*(var->e04*(3209681660 - 701787384*pms->eta) + 3*pms->cosp2Th0Phi*(-32579904 + 103168240*var->e02 - 107173484*var->e04 + 61358131*var->e06)*(-1 + 2*pms->eta) - 1344*(-193693 + 74618*pms->eta) + 112*var->e02*(-25066573 + 4486410*pms->eta) + var->e06*(-1913348359 + 447346158*pms->eta))*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(243*pms->cos0Thp1Phi*var->e05*(896 - 1568*var->e02 + 1096*var->e04 - 442*var->e06 + 113*var->e08)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/17920;
	REAL8 PN1=(-3*pms->cos0Thp1Phi*pms->dm*var->e05*(-61196800 + 378039*var->e010 + 79699200*var->e02 - 45103200*var->e04 + 14578000*var->e06 - 3373050*var->e08)*pms->sinp1Th0Phi*var->vom3)/28672000;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((-336*(396023 + 2853255*pms->eta) + 28*var->e02*(2218969 + 54766805*pms->eta) - 3*var->e04*(-40277425 + 419537863*pms->eta))*pms->sigx + 4*pms->dm*(116308752 - 151688432*var->e02 + 125304345*var->e04)*pms->sx + pms->cosp2Th0Phi*(-((18819696 - 37481948*var->e02 + 33485121*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(56 - 133*var->e02 + 121*var->e04)*pms->sx))*var->vom6)/1720320;
	REAL8 PN3=(pms->dm*var->e05*(var->e04*(3209681660 - 701787384*pms->eta) + 3*pms->cosp2Th0Phi*(-32579904 + 103168240*var->e02 - 107173484*var->e04 + 61358131*var->e06)*(-1 + 2*pms->eta) - 1344*(-193693 + 74618*pms->eta) + 112*var->e02*(-25066573 + 4486410*pms->eta) + var->e06*(-1913348359 + 447346158*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/13762560;
	REAL8 PN2=(-243*var->e05*(896 - 1568*var->e02 + 1096*var->e04 - 442*var->e06 + 113*var->e08)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/17920;
	REAL8 PN1=(3*pms->dm*var->e05*(-61196800 + 378039*var->e010 + 79699200*var->e02 - 45103200*var->e04 + 14578000*var->e06 - 3373050*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/28672000;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl6_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*(9*pms->cosp2Th0Phi*(1067440 - 9256312*var->e02 + 16755977*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 80*(-5655843 + 16216015*pms->eta + 268845*pms->eta2) - 8*var->e02*(-112743579 + 314534855*pms->eta + 13551105*pms->eta2) + var->e04*(69126363 - 594948295*pms->eta + 652044675*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/1843200;
	REAL8 PN3=(243*var->e04*(-160 + 464*var->e02 - 518*var->e04 + 305*var->e06)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/640;
	REAL8 PN2=(var->e04*(10796800 - 26975648*var->e02 + 24909640*var->e04 - 11928302*var->e06 + 3567109*var->e08)*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/430080;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl6_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e04*(9*pms->cosp2Th0Phi*(1067440 - 9256312*var->e02 + 16755977*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) + 80*(-5655843 + 16216015*pms->eta + 268845*pms->eta2) - 8*var->e02*(-112743579 + 314534855*pms->eta + 13551105*pms->eta2) + var->e04*(69126363 - 594948295*pms->eta + 652044675*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/1843200;
	REAL8 PN3=(243*pms->cos0Thp2Phi*var->e04*(-160 + 464*var->e02 - 518*var->e04 + 305*var->e06)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/640;
	REAL8 PN2=(pms->cos0Thp2Phi*var->e04*(10796800 - 26975648*var->e02 + 24909640*var->e04 - 11928302*var->e06 + 3567109*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/430080;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*var->e03*pms->sinp1Th0PhiTO3*(-((-2226880 + 11865360*var->e02 - 22948368*var->e04 + 21891595*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(-80 + 360*var->e02 - 618*var->e04 + 545*var->e06)*pms->sx)*var->vom6)/122880;
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*var->e03*(83587840 - 325178560*var->e02 + 456561728*var->e04 - 307925604*var->e06 + 115690829*var->e08)*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/2293760;
	return PN4+PN3;
}

REAL8 cpart_UPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/122880*(var->e03*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-2226880 + 11865360*var->e02 - 22948368*var->e04 + 21891595*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(-80 + 360*var->e02 - 618*var->e04 + 545*var->e06)*pms->sx)*var->vom6);
	REAL8 PN3=-1.0/2293760*(pms->dm*var->e03*(83587840 - 325178560*var->e02 + 456561728*var->e04 - 307925604*var->e06 + 115690829*var->e08)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl6_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/51200*(var->e02*(-1422360 + 8566080*var->e02 - 17939275*var->e04 + 17271121*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl6_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/51200*(pms->cos0Thp4Phi*var->e02*(-1422360 + 8566080*var->e02 - 17939275*var->e04 + 17271121*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl7_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-13293513457*pms->cos0Thp3Phi*pms->dm*var->e010*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/50960793600;
	return PN3;
}

REAL8 cpart_UPartsl7_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-13293513457*pms->dm*var->e010*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/50960793600;
	return PN3;
}

REAL8 spart_UPartsl7_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*(-4266263211093 + 14402480354135*pms->eta - 4818777742695*pms->eta2 + 314322306627*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/267544166400;
	REAL8 PN3=(-823543*(-1480 + 667*var->e02)*var->e09*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/2123366400;
	REAL8 PN2=(-823543*pms->cos0Thp1Phi*(989120 - 823240*var->e02 + 406513*var->e04)*var->e09*(-1 + 3*pms->eta)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*var->vom4)/560568729600;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl7_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/267544166400*(pms->cos0Thp2Phi*var->e09*(-4266263211093 + 14402480354135*pms->eta - 4818777742695*pms->eta2 + 314322306627*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(823543*pms->cos0Thp2Phi*(-1480 + 667*var->e02)*var->e09*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/2123366400;
	REAL8 PN2=(823543*pms->cos0Thp2Phi*(989120 - 823240*var->e02 + 406513*var->e04)*var->e09*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/1121137459200;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1981808640*(pms->cos0Thp1Phi*var->e08*pms->sinp1Th0Phi*((3867989383 - 50321596853*pms->eta)*pms->sigx - 4112756833*pms->dm*pms->sx + 49*pms->cosp2Th0Phi*(75348431*(-1 + 3*pms->eta)*pms->sigx + 4823609*pms->dm*pms->sx))*var->vom6);
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e08*(63*pms->cosp2Th0Phi*(265654398 + 114823207*var->e02)*(-1 + 2*pms->eta) + 54*(6142158875 + 127386826*pms->eta) - var->e02*(214963313279 + 54277741602*pms->eta))*pms->sinp1Th0Phi*var->vom5)/35672555520;
	REAL8 PN2=(-823543*pms->cos0Thp1Phi*(2880 - 2080*var->e02 + 1263*var->e04)*var->e08*pms->sigx*pms->sinp1Th0Phi*var->vom4)/4246732800;
	REAL8 PN1=(117649*pms->cos0Thp1Phi*pms->dm*(-4466880 + 4889280*var->e02 - 2893077*var->e04 + 897074*var->e06)*var->e08*pms->sinp1Th0Phi*var->vom3)/280284364800;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/1981808640*(var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((3867989383 - 50321596853*pms->eta)*pms->sigx - 4112756833*pms->dm*pms->sx + 49*pms->cosp2Th0Phi*(75348431*(-1 + 3*pms->eta)*pms->sigx + 4823609*pms->dm*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e08*(63*pms->cosp2Th0Phi*(265654398 + 114823207*var->e02)*(-1 + 2*pms->eta) + 54*(6142158875 + 127386826*pms->eta) - var->e02*(214963313279 + 54277741602*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/35672555520;
	REAL8 PN2=(-823543*(2880 - 2080*var->e02 + 1263*var->e04)*var->e08*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/4246732800;
	REAL8 PN1=(117649*pms->dm*(-4466880 + 4889280*var->e02 - 2893077*var->e04 + 897074*var->e06)*var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/280284364800;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl7_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e07*(-9*pms->cosp4Th0Phi*(-3220095328 + 9049217937*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 4*pms->cosp2Th0Phi*(32*(91309497 + 3588361775*pms->eta - 11013721935*pms->eta2) + var->e02*(-226263517011 + 345248416675*pms->eta + 1182951991725*pms->eta2)) + 96*(-208661610221 + 261899934225*pms->eta - 22556544145*pms->eta2 - 14933064960*pms->sigx2 + 6337102080*pms->kappa1*pms->sigx2 - 6337102080*pms->dm*pms->kappa1*pms->sigx2 + 6337102080*pms->kappa2*pms->sigx2 + 6337102080*pms->dm*pms->kappa2*pms->sigx2 - 7680*pms->eta*(-4477064 + 1650287*pms->kappa1 + 1650287*pms->kappa2)*pms->sigx2 + 7680*(-4477064*pms->dm + 1650287*(-1 + pms->dm)*pms->kappa1 + 1650287*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-4477064 + 1650287*pms->kappa1 + 1650287*pms->kappa2)*pms->sx2) - 3*var->e02*(-8268760511223 - 1856351673155*pms->eta2 - 3840*(82993761 + 26967229*(-1 + pms->dm)*pms->kappa1 - 26967229*(1 + pms->dm)*pms->kappa2)*pms->sigx2 - 5*pms->eta*(-3402441161575 + 1536*(-112053064 + 26967229*pms->kappa1 + 26967229*pms->kappa2)*pms->sigx2) + 7680*(-112053064*pms->dm + 26967229*(-1 + pms->dm)*pms->kappa1 + 26967229*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 7680*(-112053064 + 26967229*pms->kappa1 + 26967229*pms->kappa2)*pms->sx2))*var->vom6)/33973862400;
	REAL8 PN3=(var->e07*(pms->dm*(8417712384 - 10438528824*var->e02 + 7349712241*var->e04)*pms->sigx + 27*(814282496 - 1082249064*var->e02 + 748744583*var->e04)*pms->sx)*var->vom5)/318504960;
	REAL8 PN2=-1.0/305764761600*(var->e07*(pms->cosp2Th0Phi*(-813779896320 + 1593573203520*var->e02 - 1353071110920*var->e04 + 651863605679*var->e06)*(-1 + 3*pms->eta) - 276480*(-44201601 + 9942547*pms->eta) + 8640*var->e02*(-2669843625 + 923239963*pms->eta) - 120*var->e04*(-155145768129 + 59387120755*pms->eta) + var->e06*(-8946357943113 + 3881360382619*pms->eta))*var->vom4);
	REAL8 PN0=(117649*var->e07*(48660480 - 74511360*var->e02 + 50709120*var->e04 - 20706224*var->e06 + 5764801*var->e08)*var->vom2)/2242274918400;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e06*pms->sinp1Th0Phi*(14*(949857931 + 8098212223*pms->eta)*pms->sigx - var->e02*(5374846837 + 214834980145*pms->eta)*pms->sigx + pms->dm*(-53862768470 + 86833581889*var->e02)*pms->sx + 49*pms->cosp2Th0Phi*(-((-46845642 + 106616669*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 117649*pms->dm*(-58 + 151*var->e02)*pms->sx))*var->vom6)/123863040;
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e06*(21*pms->cosp2Th0Phi*(9803348736 - 32115884288*var->e02 + 38086621183*var->e04)*(-1 + 2*pms->eta) + 23296*(-37872083 + 8800230*pms->eta) - 256*var->e02*(-23853691723 + 4073215398*pms->eta) + 3*var->e04*(-2677765559087 + 539825573406*pms->eta))*pms->sinp1Th0Phi*var->vom5)/15854469120;
	REAL8 PN2=(-823543*pms->cos0Thp1Phi*var->e06*(-6912 + 13824*var->e02 - 11475*var->e04 + 5557*var->e06)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/318504960;
	REAL8 PN1=(pms->cos0Thp1Phi*pms->dm*var->e06*(3671411097600 - 5774417510400*var->e02 + 3999438253440*var->e04 - 1629986854720*var->e06 + 458267571587*var->e08)*pms->sinp1Th0Phi*var->vom3)/407686348800;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/123863040*(var->e06*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(14*(949857931 + 8098212223*pms->eta)*pms->sigx - var->e02*(5374846837 + 214834980145*pms->eta)*pms->sigx + pms->dm*(-53862768470 + 86833581889*var->e02)*pms->sx + 49*pms->cosp2Th0Phi*(-((-46845642 + 106616669*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 117649*pms->dm*(-58 + 151*var->e02)*pms->sx))*var->vom6);
	REAL8 PN3=-1.0/15854469120*(pms->dm*var->e06*(21*pms->cosp2Th0Phi*(9803348736 - 32115884288*var->e02 + 38086621183*var->e04)*(-1 + 2*pms->eta) + 23296*(-37872083 + 8800230*pms->eta) - 256*var->e02*(-23853691723 + 4073215398*pms->eta) + 3*var->e04*(-2677765559087 + 539825573406*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(823543*var->e06*(-6912 + 13824*var->e02 - 11475*var->e04 + 5557*var->e06)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/318504960;
	REAL8 PN1=-1.0/407686348800*(pms->dm*var->e06*(3671411097600 - 5774417510400*var->e02 + 3999438253440*var->e04 - 1629986854720*var->e06 + 458267571587*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl7_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*(7*pms->cosp2Th0Phi*(5234892864 - 36063702968*var->e02 + 69331592025*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 1344*(785083493 - 2244310255*pms->eta + 112735*pms->eta2) - 56*var->e02*(-36740366869 + 100538882395*pms->eta + 3567424045*pms->eta2) + 5*var->e04*(50592665723 - 379772850073*pms->eta + 321880796601*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/2477260800;
	REAL8 PN3=(823543*pms->cos0Thp1Phi*var->e05*(-18432 + 57600*var->e02 - 72096*var->e04 + 49345*var->e06)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/70778880;
	REAL8 PN2=(pms->cos0Thp1Phi*var->e05*(65657929728 - 180725764096*var->e02 + 194242206208*var->e04 - 113191029584*var->e06 + 42067522447*var->e08)*(-1 + 3*pms->eta)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*var->vom4)/754974720;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl7_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e05*(7*pms->cosp2Th0Phi*(5234892864 - 36063702968*var->e02 + 69331592025*var->e04)*(1 - 5*pms->eta + 5*pms->eta2) - 1344*(785083493 - 2244310255*pms->eta + 112735*pms->eta2) - 56*var->e02*(-36740366869 + 100538882395*pms->eta + 3567424045*pms->eta2) + 5*var->e04*(50592665723 - 379772850073*pms->eta + 321880796601*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/2477260800;
	REAL8 PN3=(823543*pms->cos0Thp2Phi*var->e05*(-18432 + 57600*var->e02 - 72096*var->e04 + 49345*var->e06)*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/141557760;
	REAL8 PN2=(pms->cos0Thp2Phi*var->e05*(65657929728 - 180725764096*var->e02 + 194242206208*var->e04 - 113191029584*var->e06 + 42067522447*var->e08)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/1509949440;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-7*pms->cos0Thp3Phi*var->e04*pms->sinp1Th0PhiTO3*(-((208691520 - 1107174912*var->e02 + 2244508357*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 352947*pms->dm*(960 - 4416*var->e02 + 8071*var->e04)*pms->sx)*var->vom6)/35389440;
	REAL8 PN3=-1.0/212336640*(pms->cos0Thp3Phi*pms->dm*var->e04*(-17077299840 + 69556368960*var->e02 - 108551383122*var->e04 + 87237065671*var->e06)*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 cpart_UPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(7*var->e04*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((208691520 - 1107174912*var->e02 + 2244508357*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 352947*pms->dm*(960 - 4416*var->e02 + 8071*var->e04)*pms->sx)*var->vom6)/35389440;
	REAL8 PN3=(pms->dm*var->e04*(-17077299840 + 69556368960*var->e02 - 108551383122*var->e04 + 87237065671*var->e06)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/212336640;
	return PN4+PN3;
}

REAL8 spart_UPartsl7_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2123366400*(var->e03*(-176807900160 + 1045673760960*var->e02 - 2321841013992*var->e04 + 2583024157147*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl7_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2123366400*(pms->cos0Thp4Phi*var->e03*(-176807900160 + 1045673760960*var->e02 - 2321841013992*var->e04 + 2583024157147*var->e06)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl8_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-6520*pms->cos0Thp3Phi*pms->dm*var->e011*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/18711;
	return PN3;
}

REAL8 cpart_UPartsl8_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-6520*pms->dm*var->e011*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/18711;
	return PN3;
}

REAL8 spart_UPartsl8_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(512*var->e010*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/675;
	REAL8 PN2=(16*var->e010*(-9174 + 9653*var->e02)*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/155925;
	return PN3+PN2;
}

REAL8 cpart_UPartsl8_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-512*pms->cos0Thp2Phi*var->e010*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/675;
	REAL8 PN2=(-16*pms->cos0Thp2Phi*var->e010*(-9174 + 9653*var->e02)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/155925;
	return PN3+PN2;
}

REAL8 spart_UPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/139345920*(pms->cos0Thp1Phi*var->e09*pms->sinp1Th0Phi*((389920799 - 5223637651*pms->eta)*pms->sigx - 291618590*pms->dm*pms->sx + pms->cosp2Th0Phi*(360864897*(-1 + 3*pms->eta)*pms->sigx + 24117248*pms->dm*pms->sx))*var->vom6);
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e09*(3*pms->cosp2Th0Phi*(237711345 + 145149967*var->e02)*(-1 + 2*pms->eta) + 5*(3722132243 + 89652210*pms->eta) - 2*var->e02*(8709522919 + 1602352605*pms->eta))*pms->sinp1Th0Phi*var->vom5)/1393459200;
	REAL8 PN2=(-256*pms->cos0Thp1Phi*(440 - 418*var->e02 + 271*var->e04)*var->e09*pms->sigx*pms->sinp1Th0Phi*var->vom4)/155925;
	REAL8 PN1=(2*pms->cos0Thp1Phi*pms->dm*(-1679040 + 2241360*var->e02 - 1540440*var->e04 + 611273*var->e06)*var->e09*pms->sinp1Th0Phi*var->vom3)/1403325;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/139345920*(var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((389920799 - 5223637651*pms->eta)*pms->sigx - 291618590*pms->dm*pms->sx + pms->cosp2Th0Phi*(360864897*(-1 + 3*pms->eta)*pms->sigx + 24117248*pms->dm*pms->sx))*var->vom6);
	REAL8 PN3=(pms->dm*var->e09*(3*pms->cosp2Th0Phi*(237711345 + 145149967*var->e02)*(-1 + 2*pms->eta) + 5*(3722132243 + 89652210*pms->eta) - 2*var->e02*(8709522919 + 1602352605*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/1393459200;
	REAL8 PN2=(-256*(440 - 418*var->e02 + 271*var->e04)*var->e09*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/155925;
	REAL8 PN1=(2*pms->dm*(-1679040 + 2241360*var->e02 - 1540440*var->e04 + 611273*var->e06)*var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/1403325;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl8_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e08*(pms->cosp2Th0Phi*(689050944 + 717040640*pms->eta - 8186087760*pms->eta2) + 3*(-34823851443 + 45926130815*pms->eta - 4154411535*pms->eta2 + 58603251*pms->cosp4Th0Phi*(1 - 5*pms->eta + 5*pms->eta2) - 2311169760*pms->sigx2 + 5377314240*pms->eta*pms->sigx2 + 966841200*pms->kappa1*pms->sigx2 - 966841200*pms->dm*pms->kappa1*pms->sigx2 - 1933682400*pms->eta*pms->kappa1*pms->sigx2 + 966841200*pms->kappa2*pms->sigx2 + 966841200*pms->dm*pms->kappa2*pms->sigx2 - 1933682400*pms->eta*pms->kappa2*pms->sigx2 + 1440*(-3734246*pms->dm + 1342835*(-1 + pms->dm)*pms->kappa1 + 1342835*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 1440*(-3734246 + 1342835*pms->kappa1 + 1342835*pms->kappa2)*pms->sx2))*var->vom6)/116121600;
	REAL8 PN3=(var->e08*(pms->dm*(40975137 - 61553441*var->e02)*pms->sigx - 6*(-17983755 + 28535051*var->e02)*pms->sx)*var->vom5)/1088640;
	REAL8 PN2=(var->e08*(pms->cosp2Th0Phi*(1379953080 - 3047726740*var->e02 + 2961077999*var->e04)*(-1 + 3*pms->eta) + 360*(-56695941 + 13419743*pms->eta) - 100*var->e02*(-436155291 + 146836865*pms->eta) + var->e04*(-40739544681 + 15345480907*pms->eta))*var->vom4)/348364800;
	REAL8 PN0=(-1024*(-1485 + 2640*var->e02 - 2112*var->e04 + 1024*var->e06)*var->e08*var->vom2)/467775;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp1Phi*var->e07*pms->sinp1Th0Phi*((2234504576 + 22717231472*pms->eta - 3*var->e02*(206978063 + 16528848153*pms->eta))*pms->sigx + 2*pms->dm*(-5299269448 + 10128862443*var->e02)*pms->sx + pms->cosp2Th0Phi*(-((-472331248 + 1205158183*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 1048576*pms->dm*(-68 + 193*var->e02)*pms->sx))*var->vom6)/15482880;
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e07*(pms->cosp2Th0Phi*(2092798080 - 7189639749*var->e02 + 9532753691*var->e04)*(-1 + 2*pms->eta) + 96*(-117940681 + 21689568*pms->eta) - 9*var->e02*(-7272225351 + 1195182566*pms->eta) + 10*var->e04*(-9608898113 + 1829127217*pms->eta))*pms->sinp1Th0Phi*var->vom5)/92897280;
	REAL8 PN2=(-256*pms->cos0Thp1Phi*(-4320 + 9720*var->e02 - 9330*var->e04 + 5287*var->e06)*var->e07*pms->sigx*pms->sinp1Th0Phi*var->vom4)/42525;
	REAL8 PN1=(pms->cos0Thp1Phi*pms->dm*var->e07*(192712417920 - 354282128640*var->e02 + 290359655520*var->e04 - 142401839008*var->e06 + 48002232123*var->e08)*pms->sinp1Th0Phi*var->vom3)/15328051200;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/15482880*(var->e07*pms->sin0Thp1Phi*pms->sinp1Th0Phi*((2234504576 + 22717231472*pms->eta - 3*var->e02*(206978063 + 16528848153*pms->eta))*pms->sigx + 2*pms->dm*(-5299269448 + 10128862443*var->e02)*pms->sx + pms->cosp2Th0Phi*(-((-472331248 + 1205158183*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 1048576*pms->dm*(-68 + 193*var->e02)*pms->sx))*var->vom6);
	REAL8 PN3=-1.0/92897280*(pms->dm*var->e07*(pms->cosp2Th0Phi*(2092798080 - 7189639749*var->e02 + 9532753691*var->e04)*(-1 + 2*pms->eta) + 96*(-117940681 + 21689568*pms->eta) - 9*var->e02*(-7272225351 + 1195182566*pms->eta) + 10*var->e04*(-9608898113 + 1829127217*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(256*(-4320 + 9720*var->e02 - 9330*var->e04 + 5287*var->e06)*var->e07*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/42525;
	REAL8 PN1=-1.0/15328051200*(pms->dm*var->e07*(192712417920 - 354282128640*var->e02 + 290359655520*var->e04 - 142401839008*var->e06 + 48002232123*var->e08)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl8_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/29030400*(var->e06*(3*pms->cosp2Th0Phi*(-335210330 + 2088619369*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 70*(287943129 - 819119857*pms->eta + 12191847*pms->eta2) + var->e02*(-38358898143 + 102294167135*pms->eta + 2881293135*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-512*(112 - 376*var->e02 + 521*var->e04)*var->e06*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/315;
	REAL8 PN2=-1.0/52254720*(pms->cos0Thp1Phi*var->e06*(-7552182960 + 22691797272*var->e02 - 27674511462*var->e04 + 18866047409*var->e06)*(-1 + 3*pms->eta)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl8_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/29030400*(pms->cos0Thp2Phi*var->e06*(3*pms->cosp2Th0Phi*(-335210330 + 2088619369*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 70*(287943129 - 819119857*pms->eta + 12191847*pms->eta2) + var->e02*(-38358898143 + 102294167135*pms->eta + 2881293135*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-512*pms->cos0Thp2Phi*(112 - 376*var->e02 + 521*var->e04)*var->e06*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/315;
	REAL8 PN2=-1.0/104509440*(pms->cos0Thp2Phi*var->e06*(-7552182960 + 22691797272*var->e02 - 27674511462*var->e04 + 18866047409*var->e06)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/967680*(pms->cos0Thp3Phi*var->e05*pms->sinp1Th0PhiTO3*(-((83540436 - 448714476*var->e02 + 956133709*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 1572864*pms->dm*(84 - 399*var->e02 + 776*var->e04)*pms->sx)*var->vom6);
	REAL8 PN3=-1.0/23224320*(pms->cos0Thp3Phi*pms->dm*var->e05*(-3779115984 + 16160443824*var->e02 - 27587973246*var->e04 + 25333065097*var->e06)*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 cpart_UPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e05*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((83540436 - 448714476*var->e02 + 956133709*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 1572864*pms->dm*(84 - 399*var->e02 + 776*var->e04)*pms->sx)*var->vom6)/967680;
	REAL8 PN3=(pms->dm*var->e05*(-3779115984 + 16160443824*var->e02 - 27587973246*var->e04 + 25333065097*var->e06)*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/23224320;
	return PN4+PN3;
}

REAL8 spart_UPartsl8_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e04*(295033440 - 1753866126*var->e02 + 4107863017*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/1382400;
	return PN4;
}

REAL8 cpart_UPartsl8_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*var->e04*(295033440 - 1753866126*var->e02 + 4107863017*var->e04)*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/1382400;
	return PN4;
}

REAL8 spart_UPartsl9_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(2023195887*var->e011*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/2018508800;
	REAL8 PN2=(1594323*var->e011*(-49616 + 63365*var->e02)*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/64592281600;
	return PN3+PN2;
}

REAL8 cpart_UPartsl9_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-2023195887*pms->cos0Thp2Phi*var->e011*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/2018508800;
	REAL8 PN2=(-1594323*pms->cos0Thp2Phi*var->e011*(-49616 + 63365*var->e02)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/64592281600;
	return PN3+PN2;
}

REAL8 spart_UPartsl9_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e010*(167160953749 + 4656417174*pms->eta + 4769757789*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sinp1Th0Phi*var->vom5)/8808038400;
	REAL8 PN2=(43046721*pms->cos0Thp1Phi*var->e010*(-11 + 13*var->e02)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/504627200;
	REAL8 PN1=(-4782969*pms->cos0Thp1Phi*pms->dm*var->e010*(83072 - 131008*var->e02 + 103543*var->e04)*pms->sinp1Th0Phi*var->vom3)/129184563200;
	return PN3+PN2+PN1;
}

REAL8 cpart_UPartsl9_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(pms->dm*var->e010*(167160953749 + 4656417174*pms->eta + 4769757789*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/8808038400;
	REAL8 PN2=(43046721*var->e010*(-11 + 13*var->e02)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/504627200;
	REAL8 PN1=(-4782969*pms->dm*var->e010*(83072 - 131008*var->e02 + 103543*var->e04)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/129184563200;
	return PN3+PN2+PN1;
}

REAL8 cpart_UPartsl9_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*(-4*pms->cosp2Th0Phi*(-107351253051 + 66795965195*pms->eta + 769542516165*pms->eta2) + 3*(-11918321020863 + 16411055299435*pms->eta - 1547349775275*pms->eta2 + 22654134171*pms->cosp4Th0Phi*(1 - 5*pms->eta + 5*pms->eta2) - 741550544640*pms->sigx2 + 1740233502720*pms->eta*pms->sigx2 + 306492168960*pms->kappa1*pms->sigx2 - 306492168960*pms->dm*pms->kappa1*pms->sigx2 - 612984337920*pms->eta*pms->kappa1*pms->sigx2 + 306492168960*pms->kappa2*pms->sigx2 + 306492168960*pms->dm*pms->kappa2*pms->sigx2 - 612984337920*pms->eta*pms->kappa2*pms->sigx2 + 23040*(-75530968*pms->dm + 26605223*(-1 + pms->dm)*pms->kappa1 + 26605223*(1 + pms->dm)*pms->kappa2)*pms->sigx*pms->sx + 23040*(-75530968 + 26605223*pms->kappa1 + 26605223*pms->kappa2)*pms->sx2))*var->vom6)/26424115200;
	REAL8 PN3=(var->e09*(pms->dm*(2447282440 - 4313835251*var->e02)*pms->sigx - 115*(-56425112 + 104012173*var->e02)*pms->sx)*var->vom5)/45875200;
	REAL8 PN2=(var->e09*(pms->cosp2Th0Phi*(563305906240 - 1385220643048*var->e02 + 1517248199031*var->e04)*(-1 + 3*pms->eta) + 10560*(-779423563 + 192315969*pms->eta) - 264*var->e02*(-74423319667 + 24662236905*pms->eta) + 9*var->e04*(-2315272341497 + 859744793259*pms->eta))*var->vom4)/96888422400;
	REAL8 PN0=(-4782969*(-56320 + 114048*var->e02 - 104976*var->e04 + 59049*var->e06)*var->e09*var->vom2)/64592281600;
	return PN4+PN3+PN2+PN0;
}

REAL8 spart_UPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-3*pms->cos0Thp1Phi*var->e08*pms->sinp1Th0Phi*(-((4601983871 + 56487828323*pms->eta)*pms->sigx) + 25942719945*pms->dm*pms->sx + pms->cosp2Th0Phi*(-1201919831*(-1 + 3*pms->eta)*pms->sigx + 186535791*pms->dm*pms->sx))*var->vom6)/73400320;
	REAL8 PN3=-1.0/440401920*(pms->cos0Thp1Phi*pms->dm*var->e08*(103521928194 - 16729780740*pms->eta + 3*pms->cosp2Th0Phi*(-5530887354 + 20037249355*var->e02)*(-1 + 2*pms->eta) + var->e02*(-552097014007 + 88031888334*pms->eta))*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(43046721*pms->cos0Thp1Phi*(320 - 800*var->e02 + 871*var->e04)*var->e08*pms->sigx*pms->sinp1Th0Phi*var->vom4)/367001600;
	REAL8 PN1=(-3*pms->cos0Thp1Phi*pms->dm*(-47000345920 + 98735757120*var->e02 - 93456953667*var->e04 + 53548721934*var->e06)*var->e08*pms->sinp1Th0Phi*var->vom3)/8074035200;
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(3*var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((4601983871 + 56487828323*pms->eta)*pms->sigx) + 25942719945*pms->dm*pms->sx + pms->cosp2Th0Phi*(-1201919831*(-1 + 3*pms->eta)*pms->sigx + 186535791*pms->dm*pms->sx))*var->vom6)/73400320;
	REAL8 PN3=(pms->dm*var->e08*(103521928194 - 16729780740*pms->eta + 3*pms->cosp2Th0Phi*(-5530887354 + 20037249355*var->e02)*(-1 + 2*pms->eta) + var->e02*(-552097014007 + 88031888334*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/440401920;
	REAL8 PN2=(-43046721*(320 - 800*var->e02 + 871*var->e04)*var->e08*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/367001600;
	REAL8 PN1=(3*pms->dm*(-47000345920 + 98735757120*var->e02 - 93456953667*var->e04 + 53548721934*var->e06)*var->e08*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/8074035200;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl9_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3303014400*(var->e07*(9*pms->cosp2Th0Phi*(-26716789856 + 159551513683*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 32*(111326334273 - 314492064575*pms->eta + 9126974535*pms->eta2) + var->e02*(-6523039078893 + 16764230171615*pms->eta + 352650108945*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-43046721*(256 - 920*var->e02 + 1397*var->e04)*var->e07*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/36700160;
	REAL8 PN2=-1.0/8808038400*((-1026862458880 + 3343297592000*var->e02 - 4547286980680*var->e04 + 3535987696213*var->e06)*var->e07*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl9_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/3303014400*(pms->cos0Thp2Phi*var->e07*(9*pms->cosp2Th0Phi*(-26716789856 + 159551513683*var->e02)*(1 - 5*pms->eta + 5*pms->eta2) + 32*(111326334273 - 314492064575*pms->eta + 9126974535*pms->eta2) + var->e02*(-6523039078893 + 16764230171615*pms->eta + 352650108945*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6);
	REAL8 PN3=(-43046721*pms->cos0Thp2Phi*(256 - 920*var->e02 + 1397*var->e04)*var->e07*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/36700160;
	REAL8 PN2=-1.0/8808038400*(pms->cos0Thp2Phi*(-1026862458880 + 3343297592000*var->e02 - 4547286980680*var->e04 + 3535987696213*var->e06)*var->e07*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp3Phi*var->e06*pms->sinp1Th0PhiTO3*(-((-389602094 + 2138209239*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 43046721*pms->dm*(-14 + 69*var->e02)*pms->sx)*var->vom6)/2293760;
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*(90957337856 - 408561445632*var->e02 + 755075992989*var->e04)*var->e06*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/293601280;
	return PN4+PN3;
}

REAL8 cpart_UPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/2293760*(var->e06*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-389602094 + 2138209239*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 43046721*pms->dm*(-14 + 69*var->e02)*pms->sx)*var->vom6);
	REAL8 PN3=-1.0/293601280*(pms->dm*(90957337856 - 408561445632*var->e02 + 755075992989*var->e04)*var->e06*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl9_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=((90393053632 - 546518349496*var->e02 + 1346424597527*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/183500800;
	return PN4;
}

REAL8 cpart_UPartsl9_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp4Phi*(90393053632 - 546518349496*var->e02 + 1346424597527*var->e04)*var->e05*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/183500800;
	return PN4;
}

REAL8 spart_UPartsl10_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(-367578125*var->e012*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/229920768;
	return PN2;
}

REAL8 cpart_UPartsl10_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(367578125*pms->cos0Thp2Phi*var->e012*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/229920768;
	return PN2;
}

REAL8 spart_UPartsl10_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e011*(2226832555*pms->cosp2Th0Phi*(-1 + 2*pms->eta) + 11*(9946606513 + 316431070*pms->eta))*pms->sinp1Th0Phi*var->vom5)/4087480320;
	REAL8 PN2=(1953125*pms->cos0Thp1Phi*var->e011*(-12 + 17*var->e02)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/19160064;
	REAL8 PN1=(-1953125*pms->cos0Thp1Phi*pms->dm*var->e011*(4056 - 7384*var->e02 + 6633*var->e04)*pms->sinp1Th0Phi*var->vom3)/1992646656;
	return PN3+PN2+PN1;
}

REAL8 cpart_UPartsl10_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(pms->dm*var->e011*(2226832555*pms->cosp2Th0Phi*(-1 + 2*pms->eta) + 11*(9946606513 + 316431070*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/4087480320;
	REAL8 PN2=(1953125*var->e011*(-12 + 17*var->e02)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/19160064;
	REAL8 PN1=(-1953125*pms->dm*var->e011*(4056 - 7384*var->e02 + 6633*var->e04)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/1992646656;
	return PN3+PN2+PN1;
}

REAL8 cpart_UPartsl10_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(var->e010*(65594761*pms->dm*pms->sigx + 174939522*pms->sx)*var->vom5)/870912;
	REAL8 PN2=-1.0/76640256*(var->e010*(9362863323 - 2392056161*pms->eta + pms->cosp2Th0Phi*(-647284957 + 1753944914*var->e02)*(-1 + 3*pms->eta) + var->e02*(-24697601646 + 8112237322*pms->eta))*var->vom4);
	REAL8 PN0=(390625*var->e010*(264 - 600*var->e02 + 625*var->e04)*var->vom2)/19160064;
	return PN3+PN2+PN0;
}

REAL8 spart_UPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/139345920*(pms->cos0Thp1Phi*var->e09*pms->sinp1Th0Phi*(-((33044688457 + 498876565747*pms->eta)*pms->sigx) + 225977802394*pms->dm*pms->sx + 125*pms->cosp2Th0Phi*(-86656587*(-1 + 3*pms->eta)*pms->sigx + 13750000*pms->dm*pms->sx))*var->vom6);
	REAL8 PN3=-1.0/1114767360*(pms->cos0Thp1Phi*pms->dm*var->e09*(470116873108 - 70331834760*pms->eta + 15*pms->cosp2Th0Phi*(-4557540804 + 17442982001*var->e02)*(-1 + 2*pms->eta) + var->e02*(-2428034765081 + 378158907810*pms->eta))*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(1953125*pms->cos0Thp1Phi*(176 - 484*var->e02 + 589*var->e04)*var->e09*pms->sigx*pms->sinp1Th0Phi*var->vom4)/6386688;
	REAL8 PN1=-1.0/1839366144*(pms->cos0Thp1Phi*pms->dm*(-44454202848 + 104948007120*var->e02 - 112652445510*var->e04 + 73846640905*var->e06)*var->e09*pms->sinp1Th0Phi*var->vom3);
	return PN4+PN3+PN2+PN1;
}

REAL8 cpart_UPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*(-((33044688457 + 498876565747*pms->eta)*pms->sigx) + 225977802394*pms->dm*pms->sx + 125*pms->cosp2Th0Phi*(-86656587*(-1 + 3*pms->eta)*pms->sigx + 13750000*pms->dm*pms->sx))*var->vom6)/139345920;
	REAL8 PN3=(pms->dm*var->e09*(470116873108 - 70331834760*pms->eta + 15*pms->cosp2Th0Phi*(-4557540804 + 17442982001*var->e02)*(-1 + 2*pms->eta) + var->e02*(-2428034765081 + 378158907810*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5)/1114767360;
	REAL8 PN2=(-1953125*(176 - 484*var->e02 + 589*var->e04)*var->e09*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/6386688;
	REAL8 PN1=(pms->dm*(-44454202848 + 104948007120*var->e02 - 112652445510*var->e04 + 73846640905*var->e06)*var->e09*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/1839366144;
	return PN4+PN3+PN2+PN1;
}

REAL8 spart_UPartsl10_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e08*(-3115383809 + 8717907237*pms->eta - 377830465*pms->eta2 + 275843375*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/1935360;
	REAL8 PN3=(1953125*(-6 + 23*var->e02)*var->e08*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/24192;
	REAL8 PN2=(pms->cos0Thp1Phi*(213604452 - 749001111*var->e02 + 1121786981*var->e04)*var->e08*(-1 + 3*pms->eta)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*var->vom4)/580608;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl10_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e08*(-3115383809 + 8717907237*pms->eta - 377830465*pms->eta2 + 275843375*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/1935360;
	REAL8 PN3=(1953125*pms->cos0Thp2Phi*(-6 + 23*var->e02)*var->e08*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/24192;
	REAL8 PN2=(pms->cos0Thp2Phi*(213604452 - 749001111*var->e02 + 1121786981*var->e04)*var->e08*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/1161216;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(25*pms->cos0Thp3Phi*var->e07*pms->sinp1Th0PhiTO3*(-((-19767520 + 111434551*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3750000*pms->dm*(-8 + 41*var->e02)*pms->sx)*var->vom6)/1548288;
	REAL8 PN3=(pms->cos0Thp3Phi*pms->dm*(62861799744 - 296414593308*var->e02 + 588605475145*var->e04)*var->e07*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/111476736;
	return PN4+PN3;
}

REAL8 cpart_UPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-25*var->e07*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-((-19767520 + 111434551*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3750000*pms->dm*(-8 + 41*var->e02)*pms->sx)*var->vom6)/1548288;
	REAL8 PN3=-1.0/111476736*(pms->dm*(62861799744 - 296414593308*var->e02 + 588605475145*var->e04)*var->e07*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 spart_UPartsl10_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/27648*((-29159434 + 180457025*var->e02)*var->e06*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl10_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/27648*(pms->cos0Thp4Phi*(-29159434 + 180457025*var->e02)*var->e06*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl11_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(-12942774875899*var->e013*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/6183242956800;
	return PN2;
}

REAL8 cpart_UPartsl11_km2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(12942774875899*pms->cos0Thp2Phi*var->e013*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/6183242956800;
	return PN2;
}

REAL8 spart_UPartsl11_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(-285311670611*pms->cos0Thp1Phi*var->e012*pms->sigx*pms->sinp1Th0Phi*var->vom4)/178362777600;
	REAL8 PN1=(25937424601*pms->cos0Thp1Phi*pms->dm*var->e012*(-923 + 1906*var->e02)*pms->sinp1Th0Phi*var->vom3)/4637432217600;
	return PN2+PN1;
}

REAL8 cpart_UPartsl11_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(-285311670611*var->e012*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/178362777600;
	REAL8 PN1=(25937424601*pms->dm*var->e012*(-923 + 1906*var->e02)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/4637432217600;
	return PN2+PN1;
}

REAL8 cpart_UPartsl11_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(var->e011*(1181634265237*pms->dm*pms->sigx + 3167328693105*pms->sx)*var->vom5)/11147673600;
	REAL8 PN2=-1.0/4280706662400*(var->e011*(747299752554672 - 196691941739280*pms->eta + pms->cosp2Th0Phi*(-52106051733072 + 154251321305039*var->e02)*(-1 + 3*pms->eta) + var->e02*(-2158802743029417 + 706055165434939*pms->eta))*var->vom4);
	REAL8 PN0=(25937424601*var->e011*(4992 - 12584*var->e02 + 14641*var->e04)*var->vom2)/18549728870400;
	return PN3+PN2+PN0;
}

REAL8 spart_UPartsl11_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e010*(-514961313204259 + 73442084430726*pms->eta + 69746937075621*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sinp1Th0Phi*var->vom5)/713451110400;
	REAL8 PN2=(-285311670611*pms->cos0Thp1Phi*var->e010*(-1 + 3*var->e02)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/3715891200;
	REAL8 PN1=(pms->cos0Thp1Phi*pms->dm*var->e010*(95188600166784 - 249318686650176*var->e02 + 299224331928841*var->e04)*pms->sinp1Th0Phi*var->vom3)/2853804441600;
	return PN3+PN2+PN1;
}

REAL8 cpart_UPartsl11_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=-1.0/713451110400*(pms->dm*var->e010*(-514961313204259 + 73442084430726*pms->eta + 69746937075621*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(285311670611*var->e010*(-1 + 3*var->e02)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/3715891200;
	REAL8 PN1=-1.0/2853804441600*(pms->dm*var->e010*(95188600166784 - 249318686650176*var->e02 + 299224331928841*var->e04)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3);
	return PN3+PN2+PN1;
}

REAL8 spart_UPartsl11_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*(-620225438154507 + 1713655040732585*pms->eta - 100676493536745*pms->eta2 + 70992686153613*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom6)/267544166400;
	REAL8 PN3=(285311670611*pms->cos0Thp1Phi*(-40 + 163*var->e02)*var->e09*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/7431782400;
	REAL8 PN2=((203532429358400 - 764637840450808*var->e02 + 1248772203127555*var->e04)*var->e09*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/713451110400;
	return PN4+PN3+PN2;
}

REAL8 cpart_UPartsl11_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(pms->cos0Thp2Phi*var->e09*(-620225438154507 + 1713655040732585*pms->eta - 100676493536745*pms->eta2 + 70992686153613*pms->cosp2Th0Phi*(1 - 5*pms->eta + 5*pms->eta2))*pms->sinp1Th0PhiTO2*var->vom6)/267544166400;
	REAL8 PN3=(285311670611*pms->cos0Thp2Phi*(-40 + 163*var->e02)*var->e09*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/14863564800;
	REAL8 PN2=(pms->cos0Thp2Phi*(203532429358400 - 764637840450808*var->e02 + 1248772203127555*var->e04)*var->e09*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/713451110400;
	return PN4+PN3+PN2;
}

REAL8 spart_UPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(-11*pms->cos0Thp3Phi*var->e08*pms->sinp1Th0PhiTO3*(-52131688243*(-1 + 3*pms->eta)*pms->sigx + 77812273803*pms->dm*pms->sx)*var->vom6)/990904320;
	REAL8 PN3=-1.0/17836277760*(pms->cos0Thp3Phi*pms->dm*(-17686579627026 + 87449093122079*var->e02)*var->e08*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 cpart_UPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(11*var->e08*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-52131688243*(-1 + 3*pms->eta)*pms->sigx + 77812273803*pms->dm*pms->sx)*var->vom6)/990904320;
	REAL8 PN3=(pms->dm*(-17686579627026 + 87449093122079*var->e02)*var->e08*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/17836277760;
	return PN4+PN3;
}

REAL8 spart_UPartsl11_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/19818086400*((-42288765716768 + 268844561710119*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 cpart_UPartsl11_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/19818086400*(pms->cos0Thp4Phi*(-42288765716768 + 268844561710119*var->e02)*var->e07*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6);
	return PN4;
}

REAL8 spart_UPartsl12_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(-52488*pms->cos0Thp1Phi*var->e013*pms->sigx*pms->sinp1Th0Phi*var->vom4)/25025;
	REAL8 PN1=(2187*pms->cos0Thp1Phi*pms->dm*var->e013*(-2156 + 4981*var->e02)*pms->sinp1Th0Phi*var->vom3)/700700;
	return PN2+PN1;
}

REAL8 cpart_UPartsl12_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(-52488*var->e013*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/25025;
	REAL8 PN1=(2187*pms->dm*var->e013*(-2156 + 4981*var->e02)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/700700;
	return PN2+PN1;
}

REAL8 cpart_UPartsl12_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(var->e012*(1649555753*pms->cosp2Th0Phi*(-1 + 3*pms->eta) + 123*(-190930189 + 51570423*pms->eta))*var->vom4)/94617600;
	REAL8 PN0=(-17496*var->e012*(-13 + 36*var->e02)*var->vom2)/25025;
	return PN2+PN0;
}

REAL8 spart_UPartsl12_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(pms->cos0Thp1Phi*pms->dm*var->e011*(-150755362703 + 20864153530*pms->eta + 19338624771*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sinp1Th0Phi*var->vom5)/126156800;
	REAL8 PN2=(-52488*pms->cos0Thp1Phi*var->e011*(-4 + 13*var->e02)*pms->sigx*pms->sinp1Th0Phi*var->vom4)/1925;
	REAL8 PN1=(3*pms->cos0Thp1Phi*pms->dm*var->e011*(12556122280 - 36115655160*var->e02 + 47918197173*var->e04)*pms->sinp1Th0Phi*var->vom3)/820019200;
	return PN3+PN2+PN1;
}

REAL8 cpart_UPartsl12_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=-1.0/126156800*(pms->dm*var->e011*(-150755362703 + 20864153530*pms->eta + 19338624771*pms->cosp2Th0Phi*(-1 + 2*pms->eta))*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom5);
	REAL8 PN2=(52488*var->e011*(-4 + 13*var->e02)*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/1925;
	REAL8 PN1=(-3*pms->dm*var->e011*(12556122280 - 36115655160*var->e02 + 47918197173*var->e04)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/820019200;
	return PN3+PN2+PN1;
}

REAL8 spart_UPartsl12_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-209952*var->e010*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/175;
	REAL8 PN2=-1.0/47308800*(var->e010*(-20644591154 + 82722984433*var->e02)*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN3+PN2;
}

REAL8 cpart_UPartsl12_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-209952*pms->cos0Thp2Phi*var->e010*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/175;
	REAL8 PN2=-1.0/47308800*(pms->cos0Thp2Phi*var->e010*(-20644591154 + 82722984433*var->e02)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN3+PN2;
}

REAL8 spart_UPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=-1.0/860160*(pms->cos0Thp3Phi*var->e09*pms->sinp1Th0PhiTO3*(-877007573*(-1 + 3*pms->eta)*pms->sigx + 1289945088*pms->dm*pms->sx)*var->vom6);
	REAL8 PN3=-1.0/1146880*(pms->cos0Thp3Phi*pms->dm*(-1945943574 + 10074827467*var->e02)*var->e09*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5);
	return PN4+PN3;
}

REAL8 cpart_UPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(var->e09*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*(-877007573*(-1 + 3*pms->eta)*pms->sigx + 1289945088*pms->dm*pms->sx)*var->vom6)/860160;
	REAL8 PN3=(pms->dm*(-1945943574 + 10074827467*var->e02)*var->e09*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/1146880;
	return PN4+PN3;
}

REAL8 spart_UPartsl12_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(2961035691*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/716800;
	return PN4;
}

REAL8 cpart_UPartsl12_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(2961035691*pms->cos0Thp4Phi*var->e08*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/716800;
	return PN4;
}

REAL8 spart_UPartsl13_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN1=(-1933741065165923*pms->cos0Thp1Phi*pms->dm*var->e014*pms->sinp1Th0Phi*var->vom3)/219742942003200;
	return PN1;
}

REAL8 cpart_UPartsl13_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN1=(-1933741065165923*pms->dm*var->e014*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/219742942003200;
	return PN1;
}

REAL8 cpart_UPartsl13_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(var->e013*(-16548200446292073 + 4572636101449339*pms->eta + 1169851555875599*pms->cosp2Th0Phi*(-1 + 3*pms->eta))*var->vom4)/47087773286400;
	REAL8 PN0=(-23298085122481*var->e013*(-56 + 169*var->e02)*var->vom2)/109871471001600;
	return PN2+PN0;
}

REAL8 spart_UPartsl13_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(302875106592253*pms->cos0Thp1Phi*var->e012*pms->sigx*pms->sinp1Th0Phi*var->vom4)/1961990553600;
	REAL8 PN1=-1.0/3923981107200*(pms->cos0Thp1Phi*pms->dm*var->e012*(-247822750479457 + 776301332655134*var->e02)*pms->sinp1Th0Phi*var->vom3);
	return PN2+PN1;
}

REAL8 cpart_UPartsl13_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(-302875106592253*var->e012*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/1961990553600;
	REAL8 PN1=(pms->dm*var->e012*(-247822750479457 + 776301332655134*var->e02)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/3923981107200;
	return PN2+PN1;
}

REAL8 spart_UPartsl13_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-302875106592253*pms->cos0Thp1Phi*var->e011*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/81749606400;
	REAL8 PN2=-1.0/7847962214400*(pms->cos0Thp1Phi*var->e011*(-10360273859636880 + 44104356358658549*var->e02)*(-1 + 3*pms->eta)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*var->vom4);
	return PN3+PN2;
}

REAL8 cpart_UPartsl13_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-302875106592253*pms->cos0Thp2Phi*var->e011*pms->sinp1Th0PhiTO2*(pms->dm*pms->sigx + pms->sx)*var->vom5)/163499212800;
	REAL8 PN2=-1.0/15695924428800*(pms->cos0Thp2Phi*var->e011*(-10360273859636880 + 44104356358658549*var->e02)*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4);
	return PN3+PN2;
}

REAL8 spart_UPartsl13_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(1012972455484529*pms->cos0Thp3Phi*pms->dm*var->e010*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/356725555200;
	return PN3;
}

REAL8 cpart_UPartsl13_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-1012972455484529*pms->dm*var->e010*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/356725555200;
	return PN3;
}

REAL8 spart_UPartsl13_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(1376782894456297*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->sin0Thp4Phi*pms->sinp1Th0PhiTO4*var->vom6)/178362777600;
	return PN4;
}

REAL8 cpart_UPartsl13_k4(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN4=(1376782894456297*pms->cos0Thp4Phi*var->e09*(1 - 5*pms->eta + 5*pms->eta2)*pms->sinp1Th0PhiTO4*var->vom6)/178362777600;
	return PN4;
}

REAL8 spart_UPartsl14_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN1=(-1231874560889*pms->cos0Thp1Phi*pms->dm*var->e015*pms->sinp1Th0Phi*var->vom3)/106748928000;
	return PN1;
}

REAL8 cpart_UPartsl14_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN1=(-1231874560889*pms->dm*var->e015*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/106748928000;
	return PN1;
}

REAL8 cpart_UPartsl14_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN0=(13841287201*var->e014*var->vom2)/889574400;
	return PN0;
}

REAL8 spart_UPartsl14_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(96889010407*pms->cos0Thp1Phi*var->e013*pms->sigx*pms->sinp1Th0Phi*var->vom4)/444787200;
	REAL8 PN1=-1.0/28466380800*(pms->cos0Thp1Phi*pms->dm*var->e013*(-2468419343302 + 8362641957537*var->e02)*pms->sinp1Th0Phi*var->vom3);
	return PN2+PN1;
}

REAL8 cpart_UPartsl14_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(-96889010407*var->e013*pms->sigx*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom4)/444787200;
	REAL8 PN1=(pms->dm*var->e013*(-2468419343302 + 8362641957537*var->e02)*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/28466380800;
	return PN2+PN1;
}

REAL8 spart_UPartsl14_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(812223521411*var->e012*(-1 + 3*pms->eta)*pms->sin0Thp2Phi*pms->sinp1Th0PhiTO2*var->vom4)/821145600;
	return PN2;
}

REAL8 cpart_UPartsl14_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(812223521411*pms->cos0Thp2Phi*var->e012*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/821145600;
	return PN2;
}

REAL8 spart_UPartsl14_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(20435115454577*pms->cos0Thp3Phi*pms->dm*var->e011*(-1 + 2*pms->eta)*pms->sinp1Th0PhiTO3*var->vom5)/4379443200;
	return PN3;
}

REAL8 cpart_UPartsl14_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN3=(-20435115454577*pms->dm*var->e011*(-1 + 2*pms->eta)*pms->sin0Thp3Phi*pms->sinp1Th0PhiTO3*var->vom5)/4379443200;
	return PN3;
}

REAL8 cpart_UPartsl15_k0(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN0=(4805419921875*var->e015*var->vom2)/235115905024;
	return PN0;
}

REAL8 spart_UPartsl15_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN1=(55922698823403*pms->cos0Thp1Phi*pms->dm*var->e014*pms->sinp1Th0Phi*var->vom3)/470231810048;
	return PN1;
}

REAL8 cpart_UPartsl15_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN1=(-55922698823403*pms->dm*var->e014*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/470231810048;
	return PN1;
}

REAL8 spart_UPartsl15_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(148189447166011*pms->cos0Thp1Phi*var->e013*(-1 + 3*pms->eta)*pms->sin0Thp1Phi*pms->sinp1Th0PhiTO2*var->vom4)/50381979648;
	return PN2;
}

REAL8 cpart_UPartsl15_k2(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN2=(148189447166011*pms->cos0Thp2Phi*var->e013*(-1 + 3*pms->eta)*pms->sinp1Th0PhiTO2*var->vom4)/100763959296;
	return PN2;
}

REAL8 spart_UPartsl16_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN1=(6818885976371537*pms->cos0Thp1Phi*pms->dm*var->e015*pms->sinp1Th0Phi*var->vom3)/41845579776000;
	return PN1;
}

REAL8 cpart_UPartsl16_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	REAL8 PN1=(-6818885976371537*pms->dm*var->e015*pms->sin0Thp1Phi*pms->sinp1Th0Phi*var->vom3)/41845579776000;
	return PN1;
}
