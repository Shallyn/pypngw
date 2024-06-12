/**
* Writer: Xiaolin.liu
* xiaolin.liu@mail.bnu.edu.cn
*
* This module contains basic functions for  calculation.
* Functions list:
* Kernel: 
* 20xx.xx.xx, LOC
**/

#ifndef __INCLUDE_BASIC_CONSTANTS__
#define __INCLUDE_BASIC_CONSTANTS__

#include "basic_Datatypes.h"

#ifdef  __cplusplus
extern "C" {
#endif

#if __STDC_VERSION__ >= 199901L
#define MY_REAL4_MANT 24 /**< Bits of precision in the mantissa of a REAL4 */
#define MY_REAL4_MAX 0x1.fffffe0000000p+127 /**< Largest normalized REAL4 number (2-2^-23)*2^127 */
#define MY_REAL4_MIN 0x1.0000000000000p-126 /**< Smallest normalized REAL4 number 2^-126 */
#define MY_REAL4_EPS 0x1.0000000000000p-23 /**< Difference between 1 and the next resolvable REAL4 2^-23 */
#define MY_REAL8_MANT 53 /**< Bits of precision in the mantissa of a REAL8 */
#define MY_REAL8_MAX 0x1.fffffffffffffp+1023 /**< Largest normalized REAL8 number (2-2^-52)*2^1023 */
#define MY_REAL8_MIN 0x1.0000000000000p-1022 /**< Smallest normalized REAL8 number 2^-1022 */
#define MY_REAL8_EPS 0x1.0000000000000p-52 /**< Difference between 1 and the next resolvable REAL8 2^-52 */
#else
#define MY_REAL4_MANT 24
#define MY_REAL4_MAX 3.4028234663852886e+38
#define MY_REAL4_MIN 1.1754943508222875e-38
#define MY_REAL4_EPS 1.1920928955078125e-07
#define MY_REAL8_MANT 53
#define MY_REAL8_MAX 1.797693134862315708145274237317043568e308
#define MY_REAL8_MIN 2.225073858507201383090232717332404064e-308
#define MY_REAL8_EPS 2.220446049250313080847263336181640625e-16
#endif

#define MY_REAL16_MAX LDBL_MAX
#define MY_REAL16_MIN LDBL_MIN
#define MY_REAL16_EPS LDBL_EPSILON

#ifdef QUADMATH_H
#define MY_REAL32_MAX FLT128_MAX
#define MY_REAL32_MIN FLT128_MIN
#define MY_REAL32_EPS FLT128_EPSILON
#else 
#define MY_REAL32_MAX LDBL_MAX
#define MY_REAL32_MIN LDBL_MIN
#define MY_REAL32_EPS LDBL_EPSILON
#endif

#define MY_UINT8_MAX   UINT64_C(18446744073709551615)
#define MY_UINT4_MAX   UINT64_C(4294967295)
#define MY_UINT2_MAX   UINT64_C(65535)
#define MY_INT8_MAX    UINT64_C(9223372036854775807)
#define MY_INT4_MAX    UINT64_C(2147483647)
#define MY_INT2_MAX    UINT64_C(32767)


// e
#define CST_E         2.718281828459045235360287471352662498
// ln2
#define CST_LN2       0.693147180559945309417232121458176568
// ln10
#define CST_LN10      2.302585092994045684017991454684364208
// sqrt(2)
#define CST_SQRT2     1.414213562373095048801688724209698079
// 1/sqrt(2)
#define CST_SQRT1_2   0.707106781186547524400844362104849039
// Euler gamma constant
#define CST_GAMMA     0.577215664901532860606512090082402431
// exp(gamma)
#define CST_EXPGAMMA  1.781072417990197985236504103107179549
// pi
#define CST_PI        3.141592653589793238462643383279502884
// 2pi
#define CST_2PI       6.283185307179586476925286766559005768
// pi/2
#define CST_PI_2      1.570796326794896619231321691639751442
// pi/4
#define CST_PI_4      0.785398163397448309615660845819875721
// 1/pi
#define CST_1_PI      0.318309886183790671537767526745028724
// 2/pi
#define CST_2_PI      0.636619772367581343075535053490057448
// 1/2pi
#define CST_1_2PI     0.15915494309189533576888376337251
// 2/sqrt(pi)
#define CST_2_SQRTPI  1.128379167095512573896158903121545172
// 1/sqrt(2pi)
#define CST_1_SQRT2PI 0.398942280401432677939946059934381868
// pi/180
#define CST_PI_180    1.745329251994329576923690768488612713e-2
// 180/pi
#define CST_180_PI    57.295779513082320876798154814105170332
// ln(pi)
#define CST_LNPI      1.144729885849400174143427351353058712

/**< Speed of light in vacuum, m s^-1 */
#define CST_C_SI 299792458e0 

/**< Gravitational constant, N m^2 kg^-2 */
#define CST_G_SI 6.67430e-11

#define CST_PC_SI       3.0856775807e16 /**< Parsec, m */
#define CST_MRSUN_SI    1.47662504e3    /**< Geometrized solar mass, m */
#define CST_MTSUN_SI    4.92549095e-6   /**< Geometrized solar mass, s */

#ifndef	FALSE
#define	FALSE	(0)
#endif

#ifndef	TRUE
#define	TRUE	(!FALSE)
#endif

#ifdef NAN
# define X_NAN NAN
#elif defined(INFINITY)
# define X_NAN (INFINITY/INFINITY)
#else
# define X_NAN (0./0.)
#endif

#define X_INFINITY_REAL8 HUGE_VALF
#define X_INFINITY_REAL16 HUGE_VALL
// #define X_NAN NAN

#define MAX_STR_LEN 256

#ifdef  __cplusplus
}
#endif
#endif

