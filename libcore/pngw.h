/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#ifndef __INCLUDE_PNGW__
#define __INCLUDE_PNGW__
#include "pngw_Datatypes.h"
#include "pngw_Utils.h"
#include "pngw_Upart.h"
#include "pngw_Epart.h"
#include "pngw_Lpart.h"
#include "pngw_LEpart.h"

COMPLEX16 calculate_QpcWaveform(REAL8 lval, BBHCore *core);
INT calculate_QpcWaveformVec(REAL8Vector *lVec, REAL8Vector *etVec, REAL8Vector *vomVec, BBHCore *core,
    REAL8Vector **QplusVec, REAL8Vector **QcrossVec);

#endif
