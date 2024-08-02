# pypngw
Post-Newtonian GW waveform generator

Installation && compile

```
./mkconf.sh
./configure
make
```

sometimes the lib cannot use in Apple core macbook.

Run in python

Run in python

```python
from pypngw import calculate_strain_SPA
m1 = 12
m2 = 10
chi1 = 0
chi2 = 0
iota = 45 * np.pi/180
phic = 0
e0 = 0.3
distance = 100
fmin = 5
deltaF = 1
detname = 'ET1'
psi = 0
ra = 0
dec = 0
freqs, htilde = calculate_strain_SPA(m1, m2, chi1, chi2, 
                iota, phic, e0, distance, fmin, deltaF,
                detname, psi, ra, dec)
```

see more details and description in \_\_init\_\_.py
