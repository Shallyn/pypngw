/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#include "pngw_LEpart.h"

size_t n_spart_LEFunc = 36;
INT spart_LEFunc_lkList[36][2]={{1,-3},{1,-1},{1,1},{1,3},{2,-3},{2,-1},{2,1},{2,3},{3,-3},{3,-1},
	{3,1},{3,3},{4,-3},{4,-1},{4,1},{4,3},{5,-3},{5,-1},{5,1},{5,3},
	{6,-3},{6,-1},{6,1},{6,3},{7,-1},{7,1},{7,3},{8,-1},{8,1},{8,3},
	{9,1},{9,3},{10,1},{10,3},{11,3},{12,3}};
COMPLEX16 (*spart_LEFunc_fList[36])(BBHDynVariables*, BBHDynParams*)={
	spart_LEPartsl1_km3,
	spart_LEPartsl1_km1,
	spart_LEPartsl1_k1,
	spart_LEPartsl1_k3,
	spart_LEPartsl2_km3,
	spart_LEPartsl2_km1,
	spart_LEPartsl2_k1,
	spart_LEPartsl2_k3,
	spart_LEPartsl3_km3,
	spart_LEPartsl3_km1,
	spart_LEPartsl3_k1,
	spart_LEPartsl3_k3,
	spart_LEPartsl4_km3,
	spart_LEPartsl4_km1,
	spart_LEPartsl4_k1,
	spart_LEPartsl4_k3,
	spart_LEPartsl5_km3,
	spart_LEPartsl5_km1,
	spart_LEPartsl5_k1,
	spart_LEPartsl5_k3,
	spart_LEPartsl6_km3,
	spart_LEPartsl6_km1,
	spart_LEPartsl6_k1,
	spart_LEPartsl6_k3,
	spart_LEPartsl7_km1,
	spart_LEPartsl7_k1,
	spart_LEPartsl7_k3,
	spart_LEPartsl8_km1,
	spart_LEPartsl8_k1,
	spart_LEPartsl8_k3,
	spart_LEPartsl9_k1,
	spart_LEPartsl9_k3,
	spart_LEPartsl10_k1,
	spart_LEPartsl10_k3,
	spart_LEPartsl11_k3,
	spart_LEPartsl12_k3
};
size_t n_cpart_LEFunc = 36;
INT cpart_LEFunc_lkList[36][2]={{1,-3},{1,-1},{1,1},{1,3},{2,-3},{2,-1},{2,1},{2,3},{3,-3},{3,-1},
	{3,1},{3,3},{4,-3},{4,-1},{4,1},{4,3},{5,-3},{5,-1},{5,1},{5,3},
	{6,-3},{6,-1},{6,1},{6,3},{7,-1},{7,1},{7,3},{8,-1},{8,1},{8,3},
	{9,1},{9,3},{10,1},{10,3},{11,3},{12,3}};
COMPLEX16 (*cpart_LEFunc_fList[36])(BBHDynVariables*, BBHDynParams*)={
	cpart_LEPartsl1_km3,
	cpart_LEPartsl1_km1,
	cpart_LEPartsl1_k1,
	cpart_LEPartsl1_k3,
	cpart_LEPartsl2_km3,
	cpart_LEPartsl2_km1,
	cpart_LEPartsl2_k1,
	cpart_LEPartsl2_k3,
	cpart_LEPartsl3_km3,
	cpart_LEPartsl3_km1,
	cpart_LEPartsl3_k1,
	cpart_LEPartsl3_k3,
	cpart_LEPartsl4_km3,
	cpart_LEPartsl4_km1,
	cpart_LEPartsl4_k1,
	cpart_LEPartsl4_k3,
	cpart_LEPartsl5_km3,
	cpart_LEPartsl5_km1,
	cpart_LEPartsl5_k1,
	cpart_LEPartsl5_k3,
	cpart_LEPartsl6_km3,
	cpart_LEPartsl6_km1,
	cpart_LEPartsl6_k1,
	cpart_LEPartsl6_k3,
	cpart_LEPartsl7_km1,
	cpart_LEPartsl7_k1,
	cpart_LEPartsl7_k3,
	cpart_LEPartsl8_km1,
	cpart_LEPartsl8_k1,
	cpart_LEPartsl8_k3,
	cpart_LEPartsl9_k1,
	cpart_LEPartsl9_k3,
	cpart_LEPartsl10_k1,
	cpart_LEPartsl10_k3,
	cpart_LEPartsl11_k3,
	cpart_LEPartsl12_k3
};

COMPLEX16 calculate_QLEPart_waveform(REAL8 lval, BBHDynVariables *var, BBHDynParams *pms)
{
    REAL8 k = calculate_k(var, pms);
    COMPLEX16 ret = 0.0;
    INT nl, nk;
    for (INT i=0; i<n_cpart_LEFunc; i++) {
        nl = cpart_LEFunc_lkList[i][0];
        nk = cpart_LEFunc_lkList[i][1];
        ret += cpart_LEFunc_fList[i](var, pms)*cos((nl + nk*k)*lval);
    }
    for (INT i=0; i<n_spart_LEFunc; i++) {
        nl = spart_LEFunc_lkList[i][0];
        nk = spart_LEFunc_lkList[i][1];
        ret += spart_LEFunc_fList[i](var, pms)*sin((nl + nk*k)*lval);
    }
    return ret;
}

COMPLEX16 spart_LEPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/70778880*(pms->cosp1Th0Phi*var->e04*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*((129600 + 132096*var->e02 + 107089*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(72000 + 34368*var->e02 + 20117*var->e04)*pms->sx)*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl1_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/70778880)*pms->cosp1Th0Phi*var->e04*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*((129600 + 132096*var->e02 + 107089*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(72000 + 34368*var->e02 + 20117*var->e04)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/35389440*(pms->cosp1Th0Phi*var->e02*pms->exp0Thm2Phi*(3*(794880 + 1272960*var->e02 + 1549250*var->e04 + 1779407*var->e06)*(-1 + 3*pms->eta)*pms->sigx - 2*(11520*(-4073 + 2139*pms->eta) + 1920*var->e02*(-23503 + 20181*pms->eta) + 90*var->e04*(-595209 + 522875*pms->eta) + var->e06*(-60622223 + 54030597*pms->eta))*pms->exp0Thp2Phi*pms->sigx + 3*pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06 + 10*(1518336 + 1916544*var->e02 + 2307910*var->e04 + 2635847*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(2384640 + 3818880*var->e02 + 4647750*var->e04 + 5338221*var->e06 + 2*(1048320 + 839040*var->e02 + 978750*var->e04 + 1097893*var->e06)*pms->exp0Thp2Phi)*pms->sigx) + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl1_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e02*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*(pms->cos0Thp1Phi*((var->e06*(126582667 - 124075857*pms->eta) - 11520*(-8353 + 4899*pms->eta) - 1920*var->e02*(-48995 + 46329*pms->eta) - 30*var->e04*(-3726179 + 3602025*pms->eta))*pms->sigx + 3*pms->dm*(15056640 + 19152000*var->e02 + 23071150*var->e04 + 26353947*var->e06)*pms->sx + 5*pms->cosp2Th0Phi*((57600 + 428160*var->e02 + 538050*var->e04 + 628487*var->e06)*(-1 + 3*pms->eta)*pms->sigx + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*pms->sx)) - I*pms->sin0Thp1Phi*((11520*(-7939 + 3657*pms->eta) + 1920*var->e02*(-45017 + 34395*pms->eta) + 30*var->e04*(-3416329 + 2672475*pms->eta) + var->e06*(-115906225 + 92046531*pms->eta))*pms->sigx - 3*pms->dm*(15310080 + 19178880*var->e02 + 23087050*var->e04 + 26362993*var->e06)*pms->sx + pms->cosp2Th0Phi*((4481280 + 5496960*var->e02 + 6605250*var->e04 + 7534007*var->e06)*(-1 + 3*pms->eta)*pms->sigx + pms->dm*(126720 + 13440*var->e02 + 7950*var->e04 + 4523*var->e06)*pms->sx)))*var->vom6)/35389440;
	return PN4;
}

COMPLEX16 spart_LEPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*pms->exp0Thm2Phi*((5455872 + 1327104*var->e02 + 6918912*var->e04 + 7540736*var->e06 + 8614521*var->e08)*(-1 + 3*pms->eta)*pms->sigx - 2*(147456*var->e02*(-329 + 87*pms->eta) + 147456*(37 + 513*pms->eta) + 2560*var->e06*(-32203 + 29763*pms->eta) + 2304*var->e04*(-29509 + 29919*pms->eta) + var->e08*(-94838983 + 87103749*pms->eta))*pms->exp0Thp2Phi*pms->sigx + pms->dm*(-3*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08) + 2*(34652160 + 18579456*var->e02 + 47990016*var->e04 + 55042304*var->e06 + 63060327*var->e08)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(5455872 + 1327104*var->e02 + 6918912*var->e04 + 7540736*var->e06 + 8614521*var->e08 + (294912 + 2064384*var->e02 + 2207232*var->e04 + 2907136*var->e06 + 3365386*var->e08)*pms->exp0Thp2Phi)*pms->sigx) - pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/56623104;
	return PN4;
}

COMPLEX16 cpart_LEPartsl1_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1/56623104*I)*pms->cosp1Th0Phi*pms->exp0Thm2Phi*(((5455872 + 1327104*var->e02 + 6918912*var->e04 + 7540736*var->e06 + 8614521*var->e08)*(-1 + 3*pms->eta) + 2*(147456*var->e02*(-329 + 87*pms->eta) + 147456*(37 + 513*pms->eta) + 2560*var->e06*(-32203 + 29763*pms->eta) + 2304*var->e04*(-29509 + 29919*pms->eta) + var->e08*(-94838983 + 87103749*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(3*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08) + 2*(34652160 + 18579456*var->e02 + 47990016*var->e04 + 55042304*var->e06 + 63060327*var->e08)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*((-1 + 3*pms->eta)*(-5455872 - 1327104*var->e02 - 6918912*var->e04 - 7540736*var->e06 - 8614521*var->e08 + (294912 + 2064384*var->e02 + 2207232*var->e04 + 2907136*var->e06 + 3365386*var->e08)*pms->exp0Thp2Phi)*pms->sigx + pms->dm*(-147456 - 294912*var->e02 + 94464*var->e04 + 9472*var->e06 + 7307*var->e08)*(3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/17694720*(pms->cosp1Th0Phi*var->e02*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*((1117440 - 470400*var->e02 + 22290*var->e04 + 2311*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(-218880 + 124800*var->e02 + 570*var->e04 + 5273*var->e06)*pms->sx)*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl1_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1/17694720*I)*pms->cosp1Th0Phi*var->e02*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*((1117440 - 470400*var->e02 + 22290*var->e04 + 2311*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(-218880 + 124800*var->e02 + 570*var->e04 + 5273*var->e06)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/7741440*(pms->cosp1Th0Phi*var->e05*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*((19824 + 24836*var->e02 + 22471*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 12*pms->dm*(4368 + 1792*var->e02 + 1007*var->e04)*pms->sx)*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl2_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/7741440)*pms->cosp1Th0Phi*var->e05*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*((19824 + 24836*var->e02 + 22471*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 12*pms->dm*(4368 + 1792*var->e02 + 1007*var->e04)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/6635520*(pms->cosp1Th0Phi*var->e03*pms->exp0Thm2Phi*((516960 + 797040*var->e02 + 931662*var->e04 + 1057193*var->e06)*(-1 + 3*pms->eta)*pms->sigx - 2*(1440*(-9745 + 3627*pms->eta) + 720*var->e02*(-11897 + 11211*pms->eta) + 18*var->e04*(-611713 + 522507*pms->eta) + var->e06*(-12111667 + 10680489*pms->eta))*pms->exp0Thp2Phi*pms->sigx + 4*pms->dm*(3*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06) + (2908800 + 2890080*var->e02 + 3494232*var->e04 + 3921538*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(516960 + 797040*var->e02 + 931662*var->e04 + 1057193*var->e06 + (653760 + 303840*var->e02 + 405612*var->e04 + 439618*var->e06)*pms->exp0Thp2Phi)*pms->sigx) + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl2_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e03*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*(pms->cos0Thp1Phi*((var->e06*(25280527 - 24532557*pms->eta) + var->e04*(22953330 - 21605238*pms->eta) - 1440*(-19849 + 8331*pms->eta) - 720*var->e02*(-24901 + 25743*pms->eta))*pms->sigx + 20*pms->dm*(574848 + 578448*var->e02 + 698544*var->e04 + 784211*var->e06)*pms->sx + 5*pms->cosp2Th0Phi*(5*(-5472 + 19728*var->e02 + 21042*var->e04 + 24703*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*pms->sx)) - I*pms->sin0Thp1Phi*(3*(1440*(-6377 + 2059*pms->eta) + 240*var->e02*(-22687 + 19101*pms->eta) + 6*var->e04*(-1171667 + 889737*pms->eta) + var->e06*(-7722047 + 6063133*pms->eta))*pms->sigx - 4*pms->dm*(2943360 + 2887920*var->e02 + 3495744*var->e04 + 3922021*var->e06)*pms->sx + pms->cosp2Th0Phi*(3*(390240 + 366960*var->e02 + 445758*var->e04 + 498937*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 4*pms->dm*(11520 - 720*var->e02 + 504*var->e04 + 161*var->e06)*pms->sx)))*var->vom6)/6635520;
	return PN4;
}

COMPLEX16 spart_LEPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e0*pms->exp0Thm2Phi*((457920 - 329040*var->e02 + 269100*var->e04 + 142455*var->e06 + 178652*var->e08)*(-1 + 3*pms->eta)*pms->sigx - 2*(-2160*var->e02*(699 + 1447*pms->eta) + 2880*(239 + 1803*pms->eta) + 60*var->e04*(-24251 + 42585*pms->eta) + 5*var->e06*(-343925 + 292551*pms->eta) + 6*var->e08*(-325225 + 300949*pms->eta))*pms->exp0Thp2Phi*pms->sigx + 2*pms->dm*(-3*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08) + 2*(1105920 - 480960*var->e02 + 743040*var->e04 + 547740*var->e06 + 651823*var->e08)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(457920 - 329040*var->e02 + 269100*var->e04 + 142455*var->e06 + 178652*var->e08 + 2*(-37440 + 71280*var->e02 + 8700*var->e04 + 32315*var->e06 + 34446*var->e08)*pms->exp0Thp2Phi)*pms->sigx) - 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/1105920;
	return PN4;
}

COMPLEX16 cpart_LEPartsl2_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e0*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*(-2*pms->cos0Thp1Phi*((2880*(319 + 4083*pms->eta) - 720*var->e02*(3737 + 10053*pms->eta) + 60*var->e04*(-52987 + 98625*pms->eta) + 8*var->e08*(-510169 + 518418*pms->eta) + 5*var->e06*(-716341 + 670575*pms->eta))*pms->sigx - 2*pms->dm*(2246400 - 1031040*var->e02 + 1511280*var->e04 + 1092720*var->e06 + 1304027*var->e08)*pms->sx + 5*pms->cosp2Th0Phi*(-((106560 - 94320*var->e02 + 50340*var->e04 + 15565*var->e06 + 21952*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*pms->sx)) + (2*I)*pms->sin0Thp1Phi*((-20160*(91 + 447*pms->eta) + 720*var->e02*(4651 + 7311*pms->eta) - 60*var->e04*(-44017 + 71715*pms->eta) - 8*var->e08*(-465506 + 384429*pms->eta) - 5*var->e06*(-659359 + 499629*pms->eta))*pms->sigx + 10*pms->dm*(435456 - 178560*var->e02 + 292176*var->e04 + 219648*var->e06 + 260653*var->e08)*pms->sx + pms->cosp2Th0Phi*(-((383040 - 186480*var->e02 + 286500*var->e04 + 207085*var->e06 + 247544*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 2*pms->dm*(11520 - 23040*var->e02 + 8400*var->e04 - 920*var->e06 + 127*var->e08)*pms->sx)))*var->vom6)/2211840;
	return PN4;
}

COMPLEX16 spart_LEPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/276480*(pms->cosp1Th0Phi*var->e0*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((82080 - 191880*var->e02 + 104010*var->e04 - 17265*var->e06 + 1877*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(34560 - 63360*var->e02 + 31920*var->e04 - 5280*var->e06 + 629*var->e08)*pms->sx)*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl2_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1/276480*I)*pms->cosp1Th0Phi*var->e0*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((82080 - 191880*var->e02 + 104010*var->e04 - 17265*var->e06 + 1877*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 3*pms->dm*(34560 - 63360*var->e02 + 31920*var->e04 - 5280*var->e06 + 629*var->e08)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-9*pms->cosp1Th0Phi*var->e06*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*((1526 + 2109*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(1918 + 627*var->e02)*pms->sx)*var->vom6)/4587520;
	return PN4;
}

COMPLEX16 cpart_LEPartsl3_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((9*I)/4587520)*pms->cosp1Th0Phi*var->e06*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*((1526 + 2109*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(1918 + 627*var->e02)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/15728640*(pms->cosp1Th0Phi*var->e04*pms->exp0Thm2Phi*((1465280 + 2105088*var->e02 + 2329959*var->e04)*(-1 + 3*pms->eta)*pms->sigx - 2*(320*(-158445 + 44983*pms->eta) + 384*var->e02*(-40203 + 55759*pms->eta) + 3*var->e04*(-9770787 + 7807609*pms->eta))*pms->exp0Thp2Phi*pms->sigx + pms->dm*(243*(2240 - 576*var->e02 + 147*var->e04) + (37886080 + 27103872*var->e02 + 35709954*var->e04)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(1465280 + 2105088*var->e02 + 2329959*var->e04 + 2*(1205440 + 211584*var->e02 + 551787*var->e04)*pms->exp0Thp2Phi)*pms->sigx) + 81*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl3_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e04*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*(pms->cos0Thp1Phi*((var->e04*(60954681 - 53835531*pms->eta) + 320*(321469 - 103703*pms->eta) - 1536*var->e02*(-21472 + 31991*pms->eta))*pms->sigx + pms->dm*(37341760 + 27243840*var->e02 + 35674233*var->e04)*pms->sx + 15*pms->cosp2Th0Phi*((-63040 + 112128*var->e02 + 81759*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 27*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*pms->sx)) - I*pms->sin0Thp1Phi*((1536*var->e02*(-18731 + 23768*pms->eta) + 320*(-312311 + 76229*pms->eta) + var->e04*(-56294763 + 39855777*pms->eta))*pms->sigx - pms->dm*(38430400 + 26963904*var->e02 + 35745675*var->e04)*pms->sx + pms->cosp2Th0Phi*((3876160 + 2528256*var->e02 + 3433533*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 81*pms->dm*(2240 - 576*var->e02 + 147*var->e04)*pms->sx)))*var->vom6)/15728640;
	return PN4;
}

COMPLEX16 spart_LEPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e02*pms->exp0Thm2Phi*((4158720 - 4750720*var->e02 + 2828130*var->e04 + 119991*var->e06)*(-1 + 3*pms->eta)*pms->sigx - 2*(3840*(1619 + 11399*pms->eta) - 640*var->e02*(15363 + 69679*pms->eta) + 3*var->e06*(-2174495 + 633461*pms->eta) + 30*var->e04*(-164841 + 861179*pms->eta))*pms->exp0Thp2Phi*pms->sigx + pms->dm*(243*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06) + 10*(3641088 - 3367808*var->e02 + 2476470*var->e04 + 523071*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(4158720 - 4750720*var->e02 + 2828130*var->e04 + 119991*var->e06 + 2*(-464640 + 768640*var->e02 - 207510*var->e04 + 178623*var->e06)*pms->exp0Thp2Phi)*pms->sigx) + 81*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/3932160;
	return PN4;
}

COMPLEX16 cpart_LEPartsl3_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e02*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*(pms->cos0Thp1Phi*((var->e06*(13166961 - 4160739*pms->eta) - 3840*(2155 + 26047*pms->eta) + 640*var->e02*(23303 + 161627*pms->eta) - 30*var->e04*(-423953 + 2005171*pms->eta))*pms->sigx + pms->dm*(37344000 - 35388800*var->e02 + 25617630*var->e04 + 5047731*var->e06)*pms->sx + 15*pms->cosp2Th0Phi*(-((-339200 + 419200*var->e02 - 216210*var->e04 + 15817*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 27*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*pms->sx)) - I*pms->sin0Thp1Phi*((3840*(4321 + 19549*pms->eta) - 640*var->e02*(38149 + 117089*pms->eta) + 3*var->e06*(-4308993 + 1146931*pms->eta) + 30*var->e04*(-235411 + 1439545*pms->eta))*pms->sigx - pms->dm*(35477760 - 31967360*var->e02 + 23911770*var->e04 + 5413689*var->e06)*pms->sx + pms->cosp2Th0Phi*((3229440 - 3213440*var->e02 + 2413110*var->e04 + 477237*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 81*pms->dm*(-3840 + 7040*var->e02 - 3510*var->e04 + 753*var->e06)*pms->sx)))*var->vom6)/3932160;
	return PN4;
}

COMPLEX16 spart_LEPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((671744 - 5750784*var->e02 + 10841856*var->e04 - 7066624*var->e06 + 1958037*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(16384 - 98304*var->e02 + 151296*var->e04 - 89344*var->e06 + 23997*var->e08)*pms->sx)*var->vom6)/3145728;
	return PN4;
}

COMPLEX16 cpart_LEPartsl3_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/3145728)*pms->cosp1Th0Phi*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((671744 - 5750784*var->e02 + 10841856*var->e04 - 7066624*var->e06 + 1958037*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 81*pms->dm*(16384 - 98304*var->e02 + 151296*var->e04 - 89344*var->e06 + 23997*var->e08)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/120960*(pms->cosp1Th0Phi*var->e07*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(2*(204 + 295*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(684 + 145*var->e02)*pms->sx)*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl4_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/120960)*pms->cosp1Th0Phi*var->e07*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(2*(204 + 295*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 3*pms->dm*(684 + 145*var->e02)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/7741440*(pms->cosp1Th0Phi*var->e05*pms->exp0Thm2Phi*((877212 + 1153614*var->e02 + 1187957*var->e04)*(-1 + 3*pms->eta)*pms->sigx - 2*(84*(-441797 + 99447*pms->eta) + 14*var->e02*(-47951 + 850533*pms->eta) + 3*var->e04*(-5875497 + 3948227*pms->eta))*pms->exp0Thp2Phi*pms->sigx + 16*pms->dm*(12*(2184 - 1022*var->e02 + 289*var->e04) + (1606500 + 701442*var->e02 + 1213267*var->e04)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(877212 + 1153614*var->e02 + 1187957*var->e04 + 2*(893676 - 87178*var->e02 + 350001*var->e04)*pms->exp0Thp2Phi)*pms->sigx) + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl4_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e05*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*(pms->cos0Thp1Phi*((var->e02*(2496242 - 27275766*pms->eta) + var->e04*(36440939 - 27253233*pms->eta) + 84*(894037 - 230223*pms->eta))*pms->sigx + 16*pms->dm*(1580292 + 713706*var->e02 + 1209799*var->e04)*pms->sx + 5*pms->cosp2Th0Phi*((-182028 + 265594*var->e02 + 97591*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*pms->sx)) - I*pms->sin0Thp1Phi*((84*(-873151 + 167565*pms->eta) + 14*var->e02*(-13501 + 1453863*pms->eta) + var->e04*(-34065025 + 20125491*pms->eta))*pms->sigx - 16*pms->dm*(1632708 + 689178*var->e02 + 1216735*var->e04)*pms->sx + pms->cosp2Th0Phi*((2664564 + 979258*var->e02 + 1887959*var->e04)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(2184 - 1022*var->e02 + 289*var->e04)*pms->sx)))*var->vom6)/7741440;
	return PN4;
}

COMPLEX16 spart_LEPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e03*pms->exp0Thm2Phi*((-((-7385760 + 10862100*var->e02 - 7042626*var->e04 + 1415503*var->e06)*(-1 + 3*pms->eta)) + 2*(var->e04*(2187774 - 63347562*pms->eta) - 1440*(7313 + 51813*pms->eta) + 180*var->e02*(87881 + 561117*pms->eta) + var->e06*(6111679 + 11548107*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - 16*pms->dm*(12*(10080 - 19800*var->e02 + 12618*var->e04 - 3899*var->e06) + (-3837600 + 4975020*var->e02 - 3464262*var->e04 + 399977*var->e06)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(7385760 - 10862100*var->e02 + 7042626*var->e04 - 1415503*var->e06 + 2*(-925920 + 1640700*var->e02 - 814662*var->e04 + 370301*var->e06)*pms->exp0Thp2Phi)*pms->sigx) + 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/3317760;
	return PN4;
}

COMPLEX16 cpart_LEPartsl4_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e03*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*((-I)*pms->sin0Thp1Phi*(-3*(-632160*(15 + 67*pms->eta) + 60*var->e02*(236107 + 941199*pms->eta) - 6*var->e04*(148171 + 5864847*pms->eta) + var->e06*(4546287 + 6283235*pms->eta))*pms->sigx + 16*pms->dm*(-3716640 + 4737420*var->e02 - 3312846*var->e04 + 353189*var->e06)*pms->sx + pms->cosp2Th0Phi*(-9*(-614880 + 842300*var->e02 - 601478*var->e04 + 74989*var->e06)*(-1 + 3*pms->eta)*pms->sigx + 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*pms->sx)) + pms->cos0Thp1Phi*((-1440*(9497 + 119013*pms->eta) + 180*var->e02*(115417 + 1303269*pms->eta) - 18*var->e04*(-634343 + 8212389*pms->eta) + var->e06*(10807855 + 27342723*pms->eta))*pms->sigx - 16*pms->dm*(-3958560 + 5212620*var->e02 - 3615678*var->e04 + 446765*var->e06)*pms->sx + 5*pms->cosp2Th0Phi*(-((-1847520 + 2828700*var->e02 - 1734390*var->e04 + 431221*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 64*pms->dm*(-10080 + 19800*var->e02 - 12618*var->e04 + 3899*var->e06)*pms->sx)))*var->vom6)/3317760;
	return PN4;
}

COMPLEX16 spart_LEPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e0*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((481536 - 2969856*var->e02 + 5416224*var->e04 - 4095200*var->e06 + 1534889*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 384*pms->dm*(2304 - 10944*var->e02 + 16896*var->e04 - 11620*var->e06 + 4165*var->e08)*pms->sx)*var->vom6)/442368;
	return PN4;
}

COMPLEX16 cpart_LEPartsl4_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/442368)*pms->cosp1Th0Phi*var->e0*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((481536 - 2969856*var->e02 + 5416224*var->e04 - 4095200*var->e06 + 1534889*var->e08)*(-1 + 3*pms->eta)*pms->sigx) + 384*pms->dm*(2304 - 10944*var->e02 + 16896*var->e04 - 11620*var->e06 + 4165*var->e08)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-3125*pms->cosp1Th0Phi*var->e08*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(479*(-1 + 3*pms->eta)*pms->sigx + 3081*pms->dm*pms->sx)*var->vom6)/396361728;
	return PN4;
}

COMPLEX16 cpart_LEPartsl5_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((3125*I)/396361728)*pms->cosp1Th0Phi*var->e08*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(479*(-1 + 3*pms->eta)*pms->sigx + 3081*pms->dm*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e06*pms->exp0Thm2Phi*((-25*(275842 + 328023*var->e02)*(-1 + 3*pms->eta) + 2*(-347705918 + 63460026*pms->eta + var->e02*(89675083 + 87185319*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(-9375*(-434 + 299*var->e02) + (227079356 + 36254214*var->e02)*pms->exp0Thp2Phi)*pms->sx + 5*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-5*(275842 + 328023*var->e02) + 2*(-1689842 + 613477*var->e02)*pms->exp0Thp2Phi)*pms->sigx) + 625*pms->dm*(-434 + 299*var->e02)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/49545216;
	return PN4;
}

COMPLEX16 cpart_LEPartsl5_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1/49545216*I)*pms->cosp1Th0Phi*var->e06*pms->exp0Thm2Phi*((25*(275842 + 328023*var->e02)*(-1 + 3*pms->eta) + 2*(-347705918 + 63460026*pms->eta + var->e02*(89675083 + 87185319*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(9375*(-434 + 299*var->e02) + (227079356 + 36254214*var->e02)*pms->exp0Thp2Phi)*pms->sx + 5*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(5*(275842 + 328023*var->e02) + 2*(-1689842 + 613477*var->e02)*pms->exp0Thp2Phi)*pms->sigx) + 625*pms->dm*(-434 + 299*var->e02)*(3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/28311552*(pms->cosp1Th0Phi*var->e04*pms->exp0Thm2Phi*((-75*(1597248 - 2820352*var->e02 + 2122957*var->e04)*(-1 + 3*pms->eta) + (1920*(168481 + 1227309*pms->eta) - 2304*var->e02*(221173 + 1694039*pms->eta) + 14*var->e04*(4925993 + 203257749*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - 3*pms->dm*(-3125*(3648 - 7872*var->e02 + 6097*var->e04) + (321432960 - 520854656*var->e02 + 400348486*var->e04)*pms->exp0Thp2Phi)*pms->sx + 5*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-15*(1597248 - 2820352*var->e02 + 2122957*var->e04) + 2*(3186240 - 6263424*var->e02 + 4199369*var->e04)*pms->exp0Thp2Phi)*pms->sigx) + 625*pms->dm*(3648 - 7872*var->e02 + 6097*var->e04)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl5_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1/28311552*I)*pms->cosp1Th0Phi*var->e04*pms->exp0Thm2Phi*((75*(1597248 - 2820352*var->e02 + 2122957*var->e04)*(-1 + 3*pms->eta) + (1920*(168481 + 1227309*pms->eta) - 2304*var->e02*(221173 + 1694039*pms->eta) + 14*var->e04*(4925993 + 203257749*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - 3*pms->dm*(3125*(3648 - 7872*var->e02 + 6097*var->e04) + (321432960 - 520854656*var->e02 + 400348486*var->e04)*pms->exp0Thp2Phi)*pms->sx + 5*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(15*(1597248 - 2820352*var->e02 + 2122957*var->e04) + 2*(3186240 - 6263424*var->e02 + 4199369*var->e04)*pms->exp0Thp2Phi)*pms->sigx) + 625*pms->dm*(3648 - 7872*var->e02 + 6097*var->e04)*(3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-25*pms->cosp1Th0Phi*var->e02*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((-495360 + 2738304*var->e02 - 5092350*var->e04 + 4361495*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 375*pms->dm*(-2304 + 10368*var->e02 - 16770*var->e04 + 13171*var->e06)*pms->sx)*var->vom6)/3538944;
	return PN4;
}

COMPLEX16 cpart_LEPartsl5_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((-25*I)/3538944)*pms->cosp1Th0Phi*var->e02*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((-495360 + 2738304*var->e02 - 5092350*var->e04 + 4361495*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 375*pms->dm*(-2304 + 10368*var->e02 - 16770*var->e04 + 13171*var->e06)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-243*pms->cosp1Th0Phi*var->e09*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*((-1 + 3*pms->eta)*pms->sigx + 8*pms->dm*pms->sx)*var->vom6)/57344;
	return PN4;
}

COMPLEX16 cpart_LEPartsl6_km3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((243*I)/57344)*pms->cosp1Th0Phi*var->e09*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*((-1 + 3*pms->eta)*pms->sigx + 8*pms->dm*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e07*pms->exp0Thm2Phi*((-((295858 + 315171*var->e02)*(-1 + 3*pms->eta)) + 2*(-17483022 + 2621146*pms->eta + 243*var->e02*(37961 + 14493*pms->eta))*pms->exp0Thp2Phi)*pms->sigx + 8*pms->dm*(2187*(-12 + 11*var->e02) + 4*(-340273 + 39123*var->e02)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-295858 - 315171*var->e02 + (-855508 + 534114*var->e02)*pms->exp0Thp2Phi)*pms->sigx) + 5832*pms->dm*(-12 + 11*var->e02)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/1720320;
	return PN4;
}

COMPLEX16 cpart_LEPartsl6_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1/1720320*I)*pms->cosp1Th0Phi*var->e07*pms->exp0Thm2Phi*(((295858 + 315171*var->e02)*(-1 + 3*pms->eta) + 2*(-17483022 + 2621146*pms->eta + 243*var->e02*(37961 + 14493*pms->eta))*pms->exp0Thp2Phi)*pms->sigx + 8*pms->dm*(2187*(12 - 11*var->e02) + 4*(-340273 + 39123*var->e02)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(295858 + 315171*var->e02 + (-855508 + 534114*var->e02)*pms->exp0Thp2Phi)*pms->sigx) + 5832*pms->dm*(-12 + 11*var->e02)*(3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/3440640*(pms->cosp1Th0Phi*var->e05*pms->exp0Thm2Phi*((-((25977168 - 53132884*var->e02 + 46373283*var->e04)*(-1 + 3*pms->eta)) + 2*(336*(98873 + 745997*pms->eta) - 28*var->e02*(2031507 + 17391439*pms->eta) + 9*var->e04*(2207539 + 45871951*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - 16*pms->dm*(-8748*(56 - 133*var->e02 + 121*var->e04) + (12783120 - 24551492*var->e02 + 21460203*var->e04)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-25977168 + 53132884*var->e02 - 46373283*var->e04 + 14*(511248 - 1117924*var->e02 + 920583*var->e04)*pms->exp0Thp2Phi)*pms->sigx) + 46656*pms->dm*(56 - 133*var->e02 + 121*var->e04)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl6_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1/3440640*I)*pms->cosp1Th0Phi*var->e05*pms->exp0Thm2Phi*(((25977168 - 53132884*var->e02 + 46373283*var->e04)*(-1 + 3*pms->eta) + 2*(336*(98873 + 745997*pms->eta) - 28*var->e02*(2031507 + 17391439*pms->eta) + 9*var->e04*(2207539 + 45871951*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - 16*pms->dm*(8748*(56 - 133*var->e02 + 121*var->e04) + (12783120 - 24551492*var->e02 + 21460203*var->e04)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(25977168 - 53132884*var->e02 + 46373283*var->e04 + 14*(511248 - 1117924*var->e02 + 920583*var->e04)*pms->exp0Thp2Phi)*pms->sigx) + 46656*pms->dm*(56 - 133*var->e02 + 121*var->e04)*(3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/245760*(pms->cosp1Th0Phi*var->e03*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((-2226880 + 11865360*var->e02 - 22948368*var->e04 + 21891595*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(-80 + 360*var->e02 - 618*var->e04 + 545*var->e06)*pms->sx)*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl6_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1/245760*I)*pms->cosp1Th0Phi*var->e03*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((-2226880 + 11865360*var->e02 - 22948368*var->e04 + 21891595*var->e06)*(-1 + 3*pms->eta)*pms->sigx) + 46656*pms->dm*(-80 + 360*var->e02 - 618*var->e04 + 545*var->e06)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/566231040*(pms->cosp1Th0Phi*var->e08*pms->exp0Thm2Phi*(120737931*(-1 + 3*pms->eta)*pms->sigx - 2*(-8266250645 + 1025008143*pms->eta)*pms->exp0Thp2Phi*pms->sigx + 3*pms->dm*(33765263 + 1649784110*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(120737931 + 406701086*pms->exp0Thp2Phi)*pms->sigx) + 33765263*pms->dm*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl7_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e08*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*((-I)*pms->sin0Thp1Phi*(-16411763359*pms->sigx + 1687802493*pms->eta*pms->sigx - 5050648119*pms->dm*pms->sx + 7*pms->cosp2Th0Phi*(75348431*(-1 + 3*pms->eta)*pms->sigx + 4823609*pms->dm*pms->sx)) + pms->cos0Thp1Phi*(16653239221*pms->sigx - 2412230079*pms->eta*pms->sigx + 4848056541*pms->dm*pms->sx + 5*pms->cosp2Th0Phi*(-57192631*(-1 + 3*pms->eta)*pms->sigx + 33765263*pms->dm*pms->sx)))*var->vom6)/566231040;
	return PN4;
}

COMPLEX16 spart_LEPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e06*pms->exp0Thm2Phi*((-((-456690962 + 1057924809*var->e02)*(-1 + 3*pms->eta)) + 2*(-14*(39601783 + 310220091*pms->eta) + var->e02*(1043252029 + 9640533057*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - pms->dm*(-2470629*(-58 + 151*var->e02) + (-3537992668 + 7808728554*var->e02)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(456690962 - 1057924809*var->e02 + 2*(-64385734 + 155804063*var->e02)*pms->exp0Thp2Phi)*pms->sigx) + 823543*pms->dm*(-58 + 151*var->e02)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/35389440;
	return PN4;
}

COMPLEX16 cpart_LEPartsl7_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e06*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*((-I)*pms->sin0Thp1Phi*(42*(37274783 + 174192611*pms->eta)*pms->sigx - var->e02*(3144428867 + 16107291687*pms->eta)*pms->sigx + pms->dm*(-3394696186 + 7435663575*var->e02)*pms->sx + 7*pms->cosp2Th0Phi*(-((-46845642 + 106616669*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 117649*pms->dm*(-58 + 151*var->e02)*pms->sx)) + pms->cos0Thp1Phi*(-14*(46582783 + 718302531*pms->eta)*pms->sigx + var->e02*(1028579249 + 22454840541*pms->eta)*pms->sigx + pms->dm*(3681289150 - 8181793533*var->e02)*pms->sx + 5*pms->cosp2Th0Phi*(-((-117092486 + 273906587*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 823543*pms->dm*(-58 + 151*var->e02)*pms->sx)))*var->vom6)/35389440;
	return PN4;
}

COMPLEX16 spart_LEPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(7*pms->cosp1Th0Phi*var->e04*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((208691520 - 1107174912*var->e02 + 2244508357*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 352947*pms->dm*(960 - 4416*var->e02 + 8071*var->e04)*pms->sx)*var->vom6)/70778880;
	return PN4;
}

COMPLEX16 cpart_LEPartsl7_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((7*I)/70778880)*pms->cosp1Th0Phi*var->e04*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((208691520 - 1107174912*var->e02 + 2244508357*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 352947*pms->dm*(960 - 4416*var->e02 + 8071*var->e04)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/278691840*(pms->cosp1Th0Phi*var->e09*pms->exp0Thm2Phi*(73810451*(-1 + 3*pms->eta)*pms->sigx - 2*(-5808487165 + 596889567*pms->eta)*pms->exp0Thp2Phi*pms->sigx + 16*pms->dm*(4521984 + 210202621*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(73810451 + 287054446*pms->exp0Thp2Phi)*pms->sigx) + 24117248*pms->dm*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl8_km1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e09*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*(pms->cos0Thp1Phi*(11690784781*pms->sigx - 1415210487*pms->eta*pms->sigx + 3290890192*pms->dm*pms->sx + 5*pms->cosp2Th0Phi*(-42648799*(-1 + 3*pms->eta)*pms->sigx + 24117248*pms->dm*pms->sx)) - I*pms->sin0Thp1Phi*(pms->cosp2Th0Phi*(360864897*(-1 + 3*pms->eta)*pms->sigx + 24117248*pms->dm*pms->sx) - 19*(607534941*pms->sigx - 51176199*pms->eta*pms->sigx + 180820720*pms->dm*pms->sx)))*var->vom6)/278691840;
	return PN4;
}

COMPLEX16 spart_LEPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e07*pms->exp0Thm2Phi*((-((-662019024 + 1709635429*var->e02)*(-1 + 3*pms->eta)) + 2*(-16*(47809637 + 388982217*pms->eta) + 3*var->e02*(527810983 + 5167224019*pms->eta))*pms->exp0Thp2Phi)*pms->sigx - 16*pms->dm*(-196608*(-68 + 193*var->e02) + (-316596816 + 786726731*var->e02)*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(662019024 - 1709635429*var->e02 + 2*(-94843888 + 252238623*var->e02)*pms->exp0Thp2Phi)*pms->sigx) + 1048576*pms->dm*(-68 + 193*var->e02)*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/30965760;
	return PN4;
}

COMPLEX16 cpart_LEPartsl8_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e07*(I*pms->cos0Thp1Phi + pms->sin0Thp1Phi)*(pms->cos0Thp1Phi*(-16*(54243085 + 902093001*pms->eta)*pms->sigx + var->e02*(1457230469 + 36132250401*pms->eta)*pms->sigx - 80*pms->dm*(-65993232 + 164934415*var->e02)*pms->sx + 5*pms->cosp2Th0Phi*(-5*(-34068272 + 88564507*var->e02)*(-1 + 3*pms->eta)*pms->sigx + 1048576*pms->dm*(-68 + 193*var->e02)*pms->sx)) - I*pms->sin0Thp1Phi*(16*(136995463 + 653835867*pms->eta)*pms->sigx - var->e02*(4876501327 + 25874437827*pms->eta)*pms->sigx + 16*pms->dm*(-303227472 + 748781387*var->e02)*pms->sx + pms->cosp2Th0Phi*(-((-472331248 + 1205158183*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 1048576*pms->dm*(-68 + 193*var->e02)*pms->sx)))*var->vom6)/30965760;
	return PN4;
}

COMPLEX16 spart_LEPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e05*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((83540436 - 448714476*var->e02 + 956133709*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 1572864*pms->dm*(84 - 399*var->e02 + 776*var->e04)*pms->sx)*var->vom6)/1935360;
	return PN4;
}

COMPLEX16 cpart_LEPartsl8_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/1935360)*pms->cosp1Th0Phi*var->e05*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((83540436 - 448714476*var->e02 + 956133709*var->e04)*(-1 + 3*pms->eta)*pms->sigx) + 1572864*pms->dm*(84 - 399*var->e02 + 776*var->e04)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-3*pms->cosp1Th0Phi*var->e08*pms->exp0Thm2Phi*(-1692571893*(-1 + 3*pms->eta)*pms->sigx + (3732675242 + 31526506082*pms->eta)*pms->exp0Thp2Phi*pms->sigx - pms->dm*(-559607373 + 12824724790*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-1692571893 + 490652062*pms->exp0Thp2Phi)*pms->sigx) + 186535791*pms->dm*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/146800640;
	return PN4;
}

COMPLEX16 cpart_LEPartsl9_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((-3*I)/146800640)*pms->cosp1Th0Phi*var->e08*pms->exp0Thm2Phi*(1692571893*(-1 + 3*pms->eta)*pms->sigx + (3732675242 + 31526506082*pms->eta)*pms->exp0Thp2Phi*pms->sigx - pms->dm*(559607373 + 12824724790*pms->exp0Thp2Phi)*pms->sx + pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(1692571893 + 490652062*pms->exp0Thp2Phi)*pms->sigx) + 186535791*pms->dm*(3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=-1/4587520*(pms->cosp1Th0Phi*var->e06*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((-389602094 + 2138209239*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 43046721*pms->dm*(-14 + 69*var->e02)*pms->sx)*var->vom6);
	return PN4;
}

COMPLEX16 cpart_LEPartsl9_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-1/4587520*I)*pms->cosp1Th0Phi*var->e06*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((-389602094 + 2138209239*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 43046721*pms->dm*(-14 + 69*var->e02)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-5*pms->cosp1Th0Phi*var->e09*pms->exp0Thm2Phi*(-612348805*(-1 + 3*pms->eta)*pms->sigx + 2*(645910813 + 5658289857*pms->eta)*pms->exp0Thp2Phi*pms->sigx - 16*pms->dm*(-12890625 + 287689859*pms->exp0Thp2Phi)*pms->sx + 5*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(-122469761 + 35813174*pms->exp0Thp2Phi)*pms->sigx) + 13750000*pms->dm*(-3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6)/55738368;
	return PN4;
}

COMPLEX16 cpart_LEPartsl10_k1(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((-5*I)/55738368)*pms->cosp1Th0Phi*var->e09*pms->exp0Thm2Phi*(612348805*(-1 + 3*pms->eta)*pms->sigx + 2*(645910813 + 5658289857*pms->eta)*pms->exp0Thp2Phi*pms->sigx - 16*pms->dm*(12890625 + 287689859*pms->exp0Thp2Phi)*pms->sx + 5*pms->cosp2Th0Phi*(-((-1 + 3*pms->eta)*(122469761 + 35813174*pms->exp0Thp2Phi)*pms->sigx) + 13750000*pms->dm*(3 + 2*pms->exp0Thp2Phi)*pms->sx))*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(-25*pms->cosp1Th0Phi*var->e07*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((-19767520 + 111434551*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3750000*pms->dm*(-8 + 41*var->e02)*pms->sx)*var->vom6)/3096576;
	return PN4;
}

COMPLEX16 cpart_LEPartsl10_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((-25*I)/3096576)*pms->cosp1Th0Phi*var->e07*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-((-19767520 + 111434551*var->e02)*(-1 + 3*pms->eta)*pms->sigx) + 3750000*pms->dm*(-8 + 41*var->e02)*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(11*pms->cosp1Th0Phi*var->e08*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-52131688243*(-1 + 3*pms->eta)*pms->sigx + 77812273803*pms->dm*pms->sx)*var->vom6)/1981808640;
	return PN4;
}

COMPLEX16 cpart_LEPartsl11_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=((11*I)/1981808640)*pms->cosp1Th0Phi*var->e08*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-52131688243*(-1 + 3*pms->eta)*pms->sigx + 77812273803*pms->dm*pms->sx)*var->vom6;
	return PN4;
}

COMPLEX16 spart_LEPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(pms->cosp1Th0Phi*var->e09*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-877007573*(-1 + 3*pms->eta)*pms->sigx + 1289945088*pms->dm*pms->sx)*var->vom6)/1720320;
	return PN4;
}

COMPLEX16 cpart_LEPartsl12_k3(BBHDynVariables *var, BBHDynParams *pms)
{
	COMPLEX16 PN4=(I/1720320)*pms->cosp1Th0Phi*var->e09*pms->exp0Thp2Phi*pms->sinp1Th0PhiTO2*(-877007573*(-1 + 3*pms->eta)*pms->sigx + 1289945088*pms->dm*pms->sx)*var->vom6;
	return PN4;
}
