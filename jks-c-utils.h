#ifndef JKS_C_UTILS_H_
#define JKS_C_UTILS_H_

#include <stdio.h>


#ifdef __cplusplus
extern "C" { /* } */
#endif

#ifndef ROM
#define ROM
#endif

#if (__STDC_VERSION__ < 199901L) && !defined(inline)
#define inline
#endif

#ifndef __attribute__
#define __attribute__(x)
#endif

#define CONCATENATE_(x, y) x##y
#define CONCATENATE(x, y) CONCATENATE_(x, y)

#define STRING_(x) #x
#define STRING(x) STRING_(x)

#define BIT(x) (1ul << (x))

#define BIT0 0x01
#define BIT1 0x02
#define BIT2 0x04
#define BIT3 0x08
#define BIT4 0x10
#define BIT5 0x20
#define BIT6 0x40
#define BIT7 0x80
#define BIT_BYTE(x) (1 << (x))

#define BIT8 0x0100u
#define BIT9 0x0200u
#define BIT10 0x0400u
#define BIT11 0x0800u
#define BIT12 0x1000u
#define BIT13 0x2000u
#define BIT14 0x4000u
#define BIT15 0x8000u
#define BIT_U(x) (1u << (x))

#define BIT16 0x00010000ul
#define BIT17 0x00020000ul
#define BIT18 0x00040000ul
#define BIT19 0x00080000ul
#define BIT20 0x00100000ul
#define BIT21 0x00200000ul
#define BIT22 0x00400000ul
#define BIT23 0x00800000ul
#define BIT24 0x01000000ul
#define BIT25 0x02000000ul
#define BIT26 0x04000000ul
#define BIT27 0x08000000ul
#define BIT28 0x10000000ul
#define BIT29 0x20000000ul
#define BIT30 0x40000000ul
#define BIT31 0x80000000ul
#define BIT_UL(x) (1ul << (x))

#if (__STDC_VERSION__ >= 199901L)
#define BIT32 0x0000000100000000ull
#define BIT33 0x0000000200000000ull
#define BIT34 0x0000000400000000ull
#define BIT35 0x0000000800000000ull
#define BIT36 0x0000001000000000ull
#define BIT37 0x0000002000000000ull
#define BIT38 0x0000004000000000ull
#define BIT39 0x0000008000000000ull
#define BIT40 0x0000010000000000ull
#define BIT41 0x0000020000000000ull
#define BIT42 0x0000040000000000ull
#define BIT43 0x0000080000000000ull
#define BIT44 0x0000100000000000ull
#define BIT45 0x0000200000000000ull
#define BIT46 0x0000400000000000ull
#define BIT47 0x0000800000000000ull
#define BIT48 0x0001000000000000ull
#define BIT49 0x0002000000000000ull
#define BIT50 0x0004000000000000ull
#define BIT51 0x0008000000000000ull
#define BIT52 0x0010000000000000ull
#define BIT53 0x0020000000000000ull
#define BIT54 0x0040000000000000ull
#define BIT55 0x0080000000000000ull
#define BIT56 0x0100000000000000ull
#define BIT57 0x0200000000000000ull
#define BIT58 0x0400000000000000ull
#define BIT59 0x0800000000000000ull
#define BIT60 0x1000000000000000ull
#define BIT61 0x2000000000000000ull
#define BIT62 0x4000000000000000ull
#define BIT63 0x8000000000000000ull
#define BIT_ULL(x) (1ull << (x))
#endif


#ifdef __cplusplus
/* { */ }
#endif

#endif /* C_UTILS_H_ */
