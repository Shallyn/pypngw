/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#include "pngw_Utils.h"
#include <pngw_Datatypes.h>

size_t n_scpart_Func = 171;
INT scpart_Func_lkList[171][2]={{1,-6},{1,-5},{1,-4},{1,-3},{1,-2},{1,-1},{1,0},{1,1},{1,2},{1,3},
	{1,4},{1,5},{1,6},{2,-6},{2,-5},{2,-4},{2,-3},{2,-2},{2,-1},{2,0},
	{2,1},{2,2},{2,3},{2,4},{2,5},{2,6},{3,-6},{3,-5},{3,-4},{3,-3},
	{3,-2},{3,-1},{3,0},{3,1},{3,2},{3,3},{3,4},{3,5},{3,6},{4,-5},{4,-4},{4,-3},{4,-2},{4,-1},{4,0},{4,1},{4,2},{4,3},{4,4},
	{4,5},{4,6},{5,-5},{5,-4},{5,-3},{5,-2},{5,-1},{5,0},{5,1},
	{5,2},{5,3},{5,4},{5,5},{5,6},{6,-5},{6,-4},{6,-3},{6,-2},
	{6,-1},{6,0},{6,1},{6,2},{6,3},{6,4},{6,5},{6,6},{7,-4},{7,-3},{7,-2},{7,-1},{7,0},{7,1},{7,2},{7,3},{7,4},{7,5},
	{7,6},{8,-4},{8,-3},{8,-2},{8,-1},{8,0},{8,1},{8,2},
	{8,3},{8,4},{8,5},{8,6},{9,-4},{9,-3},{9,-2},{9,-1},
	{9,0},{9,1},{9,2},{9,3},{9,4},{9,5},{9,6},{10,-3},{10,-2},{10,-1},{10,0},{10,1},{10,2},{10,3},{10,4},{10,5},{10,6},
	{11,-3},{11,-2},{11,-1},{11,0},{11,1},{11,2},{11,3},
	{11,4},{11,5},{11,6},{12,-3},{12,-2},{12,-1},{12,0},
	{12,1},{12,2},{12,3},{12,4},{12,5},{12,6},{13,-2},{13,-1},{13,0},{13,1},{13,2},{13,3},{13,4},{13,5},{13,6},{14,-1},{14,0},{14,1},{14,2},{14,3},{14,4},
	{14,5},{14,6},{15,0},{15,1},
	{15,2},{15,3},{15,4},{15,5},{15,6},{16,1},{16,2},{16,3},{16,4},{16,5},{17,2},{17,3},{17,4},{18,3}};


INT get_ilk_from_nm(INT n, INT m)
{
    INT nl, nk, ret = -1;
    for (INT i=0; i<n_scpart_Func; i++) {
        nl = scpart_Func_lkList[i][0];
        nk = scpart_Func_lkList[i][1];
        if (nl == m && nk == n) {
            ret = i;
            break;
        }
    }
    return ret;
}

BBHDynParams *CreateBBHDynParams(REAL8 eta, REAL8 chi1, REAL8 chi2, REAL8 kappa1, REAL8 kappa2, REAL8 Theta, REAL8 Phi, REAL8 eini, REAL8 vomini)
{
    BBHDynParams *ret = (BBHDynParams*)MYMalloc(sizeof(BBHDynParams));
    ret->eta = eta;
    ret->eta2 = eta*eta;
    ret->eta3 = ret->eta2*eta;
    ret->dm = sqrt(1. - 4.*eta);
    ret->kappa1 = kappa1;
    ret->kappa2 = kappa2;
    ret->sx = 0.5*(1. + ret->dm - 2.*eta)*chi1 + 0.5*(1. - ret->dm - 2.*eta)*chi2;
    ret->sx2 = ret->sx*ret->sx;
    ret->sigx = -0.5*(1. + ret->dm)*chi1 + 0.5*(1. - ret->dm)*chi2;
    ret->sigx2 = ret->sigx*ret->sigx;

    ret->eini = eini;
    ret->vomini = vomini;

    ret->hPlusU = -0.5*sin(Theta)*sin(Theta);
    ret->hPlusE = -ret->hPlusU;
    ret->hPlusL = 0.25*cexp(I*2.*Phi)*(3. + cos(2.*Theta));
    ret->hPlusLE = -cexp(I*Phi)*cos(Theta)*sin(Theta);

    // ret->hCrossU = 0.0;
    // ret->hCrossE = 0.0;
    ret->hCrossL = I*cexp(I*2.*Phi)*cos(Theta);
    ret->hCrossLE = sin(Theta)*(sin(Phi) - I*cos(Phi));

    ret->cos0Thp4Phi = cos(4.*Phi);
    ret->cos0Thp2Phi = cos(2.*Phi);
    ret->cosp2Th0Phi = cos(2.*Theta);
    ret->cosp4Th0Phi = cos(4.*Theta);
    ret->cos0Thp1Phi = cos(Phi);
    ret->cosp1Th0Phi = cos(Theta);
    ret->cos0Thp3Phi = cos(3.*Phi);

    ret->sin0Thp3Phi = sin(3.*Phi);
    ret->sin0Thp1Phi = sin(Phi);
    ret->sinp1Th0Phi = sin(Theta);
    ret->sinp1Th0PhiTO2 = ret->sinp1Th0Phi*ret->sinp1Th0Phi;
    ret->sinp1Th0PhiTO3 = ret->sinp1Th0PhiTO2*ret->sinp1Th0Phi;
    ret->sinp1Th0PhiTO4 = ret->sinp1Th0PhiTO3*ret->sinp1Th0Phi;
    ret->sinp2Th0Phi = sin(2.*Theta);
    ret->sin0Thp2Phi = sin(2.*Phi);
    ret->sin0Thp4Phi = sin(4.*Phi);

    ret->exp0Thp4Phi = cexp(I*4.*Phi);
    ret->expp8Thp4Phi = cexp(I*(8.*Theta + 4.*Phi));
    ret->expp8Th0Phi = cexp(I*8.*Theta);
    ret->expm4Thm4Phi = cexp(-I*(4.*Theta + 4.*Phi));
    ret->expp2Th0Phi = cexp(I*2.*Theta);
    ret->expp4Th0Phi = cexp(I*4.*Theta);
    ret->expp6Thp4Phi = cexp(I*(6.*Theta + 4.*Phi));
    ret->exp0Thp2Phi = cexp(I*2.*Phi);
    ret->exp0Thm3Phi = cexp(-I*3.*Phi);
    ret->exp0Thm2Phi = cexp(-I*2.*Phi);
    ret->expp2Thp4Phi = cexp(I*(2.*Theta + 4.*Phi));
    ret->exp0Thp3Phi = cexp(I*3.*Phi);
    ret->expp6Th0Phi = cexp(I*6.*Theta);
    ret->expp4Thp4Phi = cexp(I*(4.*Theta + 4.*Phi));
    ret->exp0Thp1Phi = cexp(I*Phi);
    ret->exp0Thm1Phi = cexp(-I*Phi);
    return ret;
}

void SetBBHCoreDynVariables(REAL8 e0, REAL8 vom, BBHCore *core)
{
    SetBBHDynVariables(e0, vom, core->var);
    return;
}

void SetBBHDynVariables(REAL8 e0, REAL8 vom, BBHDynVariables *var)
{
    var->e0 = e0;
    var->e02 = e0*e0;
    var->e03 = var->e02*e0;
    var->e04 = var->e03*e0;
    var->e05 = var->e04*e0;
    var->e06 = var->e05*e0;
    var->e07 = var->e06*e0;
    var->e08 = var->e07*e0;
    var->e09 = var->e08*e0;
    var->e010 = var->e09*e0;
    var->e011 = var->e010*e0;
    var->e012 = var->e011*e0;
    var->e013 = var->e012*e0;
    var->e014 = var->e013*e0;
    var->e015 = var->e014*e0;

    var->vom = vom;
    var->vom2 = vom*vom;
    var->vom3 = var->vom2*vom;
    var->vom4 = var->vom3*vom;
    var->vom5 = var->vom4*vom;
    var->vom6 = var->vom5*vom;
    return;
}

BBHCore *CreateBBHCore(REAL8 eta, REAL8 chi1, REAL8 chi2, REAL8 kappa1, REAL8 kappa2,
    REAL8 Theta, REAL8 Phi, REAL8 e0, REAL8 vom)
{
    BBHCore *ret = (BBHCore*)MYMalloc(sizeof(BBHCore));
    ret->pms = CreateBBHDynParams(eta, chi1, chi2, kappa1, kappa2, Theta, Phi, e0, vom);
    ret->var = (BBHDynVariables*)MYMalloc(sizeof(BBHDynVariables));
    SetBBHDynVariables(e0, vom, ret->var);
    return ret;
}

void DestroyBBHCore(BBHCore *core)
{
    if (!core)
        return;
    if (core->pms)
        MYFree(core->pms);
    if (core->var)
        MYFree(core->var);
    MYFree(core);
    return;
}


REAL8 calculate_k_from_core(BBHCore *core)
{
    return calculate_k(core->var, core->pms);
}

REAL8 calculate_k(BBHDynVariables *var, BBHDynParams *pms)
{
    REAL8 tmpe = (1. - var->e02);
    REAL8 PN2 = 3.*var->vom2 / (1. - var->e02);
    REAL8 PN3 = -var->vom3*(3.*pms->sx + pms->dm*pms->sigx)/pow(tmpe, 1.5);
    REAL8 PN4 = var->vom4 * (102 + var->e02*(51 - 26*pms->eta) - 28*pms->eta + 3*(pms->kappa1 - pms->dm*pms->kappa1 + pms->kappa2 + pms->dm*pms->kappa2 - 2*pms->eta*(2 + pms->kappa1 + pms->kappa2))*pms->sigx2 +
        6*pms->sx*((-pms->kappa1 + pms->kappa2 + pms->dm*(2 + pms->kappa1 + pms->kappa2))*pms->sigx + (2 + pms->kappa1 + pms->kappa2)*pms->sx)) / (4. * tmpe * tmpe);
    return PN2 + PN3 + PN4;
}
