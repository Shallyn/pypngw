/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#ifndef __INCLUDE_PNGW_UTILS__
#define __INCLUDE_PNGW_UTILS__
#include "pngw_Datatypes.h"

INT get_ilk_from_nm(INT n, INT m);
REAL8 calculate_k(BBHDynVariables *var, BBHDynParams *pms);
REAL8 calculate_k_from_core(BBHCore *core);
BBHDynParams *CreateBBHDynParams(REAL8 eta, REAL8 chi1, REAL8 chi2, REAL8 kappa1, REAL8 kappa2, REAL8 Theta, REAL8 Phi, REAL8 eini, REAL8 vomini);
BBHCore *CreateBBHCore(REAL8 eta, REAL8 chi1, REAL8 chi2, REAL8 kappa1, REAL8 kappa2,
    REAL8 Theta, REAL8 Phi, REAL8 e0, REAL8 vom);
void SetBBHDynVariables(REAL8 e0, REAL8 vom, BBHDynVariables *var);
void SetBBHCoreDynVariables(REAL8 e0, REAL8 vom, BBHCore *core);


#endif
