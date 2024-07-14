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
REAL8 calculate_QWaveform(REAL8 tSIval, REAL8 lval, BBHCore *core, AntennaPatternF *apf);
INT calculate_QpcWaveform_emode(INT n, INT m, REAL8 lval, BBHCore *core, 
    COMPLEX16 *ret_QPlus, COMPLEX16 *ret_QCross);
COMPLEX16 calculate_QpcWaveform_ecoeff(INT n, INT m, REAL8 lval, BBHCore *core);
COMPLEX16 calculate_QpcWaveform_eexp(INT n, INT m, REAL8 lval, BBHCore *core);
COMPLEX16 calculate_QpcWaveform_QhMinus(INT n, INT m, REAL8 lval, BBHCore *core);

INT calculate_QpcWaveformVec(REAL8Vector *lVec, REAL8Vector *etVec, REAL8Vector *vomVec, BBHCore *core,
    REAL8Vector **QplusVec, REAL8Vector **QcrossVec);
INT calculate_QWaveformVec(REAL8Vector *tSIVec, REAL8Vector *lVec, 
    REAL8Vector *etVec, REAL8Vector *vomVec, 
    BBHCore *core, AntennaPatternF *apf,
    REAL8Vector **QVec);
INT calculate_QpcWaveformVec_emode(INT n, INT m, REAL8Vector *lVec, REAL8Vector *etVec, REAL8Vector *vomVec, BBHCore *core,
    REAL8Vector **QplusVec, REAL8Vector **QcrossVec);
INT calculate_QpcWaveformVec_eexp(INT n, INT m, REAL8Vector *lVec, REAL8Vector *etVec, REAL8Vector *vomVec, BBHCore *core,
    REAL8Vector **QplusVec, REAL8Vector **QcrossVec);

REAL8 Calculate_l(BBHCore *core);
REAL8 Calculate_t(BBHCore *core);
REAL8 Calculate_vom(INT n, INT m, REAL8 freq, BBHCore *core);

INT calc_QSPA_emode(INT n, INT m, REAL8Vector *freqsVec, BBHCore *core,
    REAL8Vector **ret_ReAmpQpVec, REAL8Vector **ret_ImAmpQpVec, 
    REAL8Vector **ret_ReAmpQcVec, REAL8Vector **ret_ImAmpQcVec,
    REAL8Vector **ret_PhaseVec);
INT calc_QSPA_Allemode(REAL8Vector *freqsVec, BBHCore *core,
    REAL8Vector **ret_ReQpVec, REAL8Vector **ret_ImQpVec, 
    REAL8Vector **ret_ReQcVec, REAL8Vector **ret_ImQcVec);
INT calc_QstrainSPA_Allemode(REAL8 MT, REAL8Vector *freqsVec, BBHCore *core, AntennaPatternF *apf,
    REAL8Vector **ret_ReQVec, REAL8Vector **ret_ImQVec);

#endif
