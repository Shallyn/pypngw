import numpy as np

CST_G_SI = 6.67384e-11
CST_C_SI = 299792458e0
CST_PI = np.pi
CST_MSUN_SI = 1.98892e30
CST_MRSUN_SI = 1.47662504e3
CST_MTSUN_SI = 4.92549095e-6
def XLALSimInspiralTaylorT2Timing_0PNCoeff(totalmass, eta):
	totalmass *= CST_G_SI / pow(CST_C_SI, 3.0)
	return -5.*totalmass/(256.*eta)

def XLALSimInspiralTaylorT2Timing_2PNCoeff(eta):
    return 7.43/2.52 + 11./3. * eta

def XLALSimInspiralTaylorT2Timing_4PNCoeff(eta):
    return 30.58673/5.08032 + 54.29/5.04*eta + 61.7/7.2*eta*eta

def XLALSimInspiralChirpTimeBound(fstart, m1, m2, s1, s2):
    M = m1 + m2
    mu = m1 * m2 / M
    eta = mu / M
    # chi = (s1*m1 + s2*m2)/M <= max(|s1|,|s2|)
    chi = abs(s1) if abs(s1) > abs(s2) else abs(s2) # over-estimate of chi
    c0 = abs(XLALSimInspiralTaylorT2Timing_0PNCoeff(M, eta))
    c2 = XLALSimInspiralTaylorT2Timing_2PNCoeff(eta)
    c3 = (226.0/15.0) * chi
    c4 = XLALSimInspiralTaylorT2Timing_4PNCoeff(eta)
    v = np.cbrt(CST_PI * CST_G_SI * M * fstart) / CST_C_SI
    return c0 * pow(v, -8) * (1.0 + (c2 + (c3 + c4 * v) * v) * v * v)

def XLALSimInspiralFinalBlackHoleSpinBound(S1z, S2z):
    maximum_black_hole_spin = 0.998
    s = 0.686 + 0.15 * (S1z + S2z)
    if (s < abs(S1z)):
        s = abs(S1z)
    if (s < abs(S2z)):
        s = abs(S2z)
    if (s > maximum_black_hole_spin):
        s = maximum_black_hole_spin
    return s

def XLALSimInspiralMergeTimeBound(m1, m2):
    norbits = 1
    M = m1 + m2
    r = 9.0 * M * CST_MRSUN_SI / CST_MSUN_SI
    v = CST_C_SI / 3.0
    return norbits * (2.0 * CST_PI * r / v)

def XLALSimInspiralRingdownTimeBound(M, s):
    nefolds = 11
    f1 = +1.5251
    f2 = -1.1568
    f3 = +0.1292
    q1 = +0.7000
    q2 = +1.4187
    q3 = -0.4990
    omega = (f1 + f2 * pow(1.0 - s, f3)) / (M * CST_MTSUN_SI / CST_MSUN_SI)
    Q = q1 + q2 * pow(1.0 - s, q3)
    tau = 2.0 * Q / omega
    return nefolds * tau

def XLALSimInspiralTaylorT3Frequency_0PNCoeff(totalmass):
	totalmass *= CST_G_SI / pow(CST_C_SI, 3.0)
	return 1. / (8. * CST_PI * totalmass)

def XLALSimInspiralChirpStartFrequencyBound(tchirp, m1, m2):
    M = m1 + m2 # total mass
    mu = m1 * m2 / M # reduced mass
    eta = mu / M # symmetric mass ratio
    c0 = XLALSimInspiralTaylorT3Frequency_0PNCoeff(M)
    return c0 * pow(5.0 * M * (CST_MTSUN_SI / CST_MSUN_SI) / (eta * tchirp), 3.0 / 8.0)

def calculate_fStart(fLow, m1, m2, chi1, chi2, deltaT):
    m1_SI = m1 * CST_MSUN_SI
    m2_SI = m2 * CST_MSUN_SI
    tchirp = XLALSimInspiralChirpTimeBound(fLow, m1_SI, m2_SI, chi1, chi2)
    s = XLALSimInspiralFinalBlackHoleSpinBound(chi1, chi2)
    tmerge = XLALSimInspiralMergeTimeBound(m1_SI, m2_SI) + XLALSimInspiralRingdownTimeBound(m1_SI + m2_SI, s)
    extra_time_fraction = 0.1
    extra_cycles = 3.0
    textra = extra_cycles / fLow
    fstart = XLALSimInspiralChirpStartFrequencyBound((1.0 + extra_time_fraction) * tchirp, m1_SI, m2_SI)
    tchirp = XLALSimInspiralChirpTimeBound(fstart, m1_SI, m2_SI, chi1, chi2)
    chirplen = round((tchirp + tmerge + 2.0 * textra) / deltaT)
    chirplen_exp = np.frexp(chirplen)[1]
    chirplen = pow(2, chirplen_exp)
    deltaF = 1.0 / (chirplen * deltaT)
    tshift = round(textra / deltaT) * deltaT + round(tmerge / deltaT) * deltaT
    def freqWind(f):
        if hasattr(f, '__len__'):
            ret = np.ones(len(f))
            for i, fthis in enumerate(f):
                if fthis < fstart:
                    ret[i] = 0.0
                elif fthis < fLow:
                    ret[i] = 0.5 * (1 - np.cos(CST_PI * (fthis - fstart) / (fLow - fstart) ))
            return ret
        if f < fstart:
            return 0.0
        elif f < fLow:
            return 0.5 * (1 - np.cos(CST_PI * (f - fstart) / (fLow - fstart) ))
        else:
            return 1.0
    return fstart, deltaF, tshift, freqWind