/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel:
* 20xx.xx.xx, LOC
**/

#include "pngw.h"
#include <pngw_Datatypes.h>
#include <pngw_Upart.h>
#include <pngw_Utils.h>

COMPLEX16 calculate_QpcWaveform(REAL8 lval, BBHCore *core)
{
    //SetBBHCoreDynVariables(eVal, vomVal, core);
    REAL8 Q_U, Q_E;
    COMPLEX16 Q_L, Q_LE;
    COMPLEX16 QPlusL, QPlusLE, QCrossL, QCrossLE;
    Q_U = calculate_QUPart_waveform(lval, core->var, core->pms);
    Q_E = calculate_QEPart_waveform(lval, core->var, core->pms);
    Q_L = calculate_QLPart_waveform(lval, core->var, core->pms);
    Q_LE = calculate_QLEPart_waveform(lval, core->var, core->pms);
    QPlusL = Q_L * core->pms->hPlusL;
    QPlusLE = Q_LE * core->pms->hPlusLE;
    QCrossL = Q_L * core->pms->hCrossL;
    QCrossLE = Q_LE * core->pms->hCrossLE;
    // return Q_U*core->pms->hPlusU + Q_E*core->pms->hPlusE + QPlusL + conj(QPlusL) + QPlusLE + conj(QPlusLE) -
    //     I*(QCrossL + conj(QCrossL) + QCrossLE + conj(QCrossLE));
    // return QPlusL + conj(QPlusL) + I*(QCrossL + conj(QCrossL));
    return Q_U*core->pms->hPlusU + Q_E*core->pms->hPlusE + QPlusL + conj(QPlusL) + QPlusLE + conj(QPlusLE) -
        I*(QCrossL + conj(QCrossL) + QCrossLE + conj(QCrossLE));
    // return Q_L;
}

INT calculate_QpcWaveformVec(REAL8Vector *lVec, REAL8Vector *etVec, REAL8Vector *vomVec, BBHCore *core,
    REAL8Vector **QplusVec, REAL8Vector **QcrossVec)
{
    REAL8Vector *ret_QplusVec = CreateREAL8Vector(lVec->length);
    REAL8Vector *ret_QcrossVec = CreateREAL8Vector(lVec->length);
    COMPLEX16 Qpc;
    for (INT i = 0; i < lVec->length; i++) {
        SetBBHCoreDynVariables(etVec->data[i], vomVec->data[i], core);
        Qpc = calculate_QpcWaveform(lVec->data[i], core);
        ret_QplusVec->data[i] = creal(Qpc);
        ret_QcrossVec->data[i] = cimag(Qpc);
    }
    *QplusVec = ret_QplusVec;
    *QcrossVec = ret_QcrossVec;
    return X_SUCCESS;
}
