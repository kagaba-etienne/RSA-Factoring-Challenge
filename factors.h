#ifndef FACTORS_H
#define FACTORS_H

typedef unsigned __int128 uint128_t;

/*      UINT64_MAX 18446744073709551615ULL */
#define P10_UINT64 10000000000000000000ULL   /* 19 zeroes */
#define E10_UINT64 19

#define STRINGIZER(x)   # x
#define TO_STRING(x)    STRINGIZER(x)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<inttypes.h>


char *_strrev(char *str);
int _print_u128_u(uint128_t u128);
uint128_t factorize(uint128_t n);
char *_strrev(char *str);
uint128_t transform(char *str);
uint64_t touint64(char *str);

#endif
