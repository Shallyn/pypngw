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

BBHDynParams *CreateBBHDynParams(REAL8 eta, REAL8 chi1, REAL8 chi2, REAL8 kappa1, REAL8 kappa2, REAL8 Theta, REAL8 Phi)
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
    ret->pms = CreateBBHDynParams(eta, chi1, chi2, kappa1, kappa2, Theta, Phi);
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
