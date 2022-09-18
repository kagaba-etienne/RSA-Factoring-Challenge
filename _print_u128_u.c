#include "factors.h"

/**
 * _print_u128_u - printing uint128 numbers
 * @u128: a uint128 number to print
 * Return: number of digits printed
 */

int _print_u128_u(uint128_t u128)
{
	int rc;
	if (u128 > UINT64_MAX)
	{
		uint128_t leading = u128 / P10_UINT64;
		uint64_t trailing = u128 % P10_UINT64;
		rc = _print_u128_u(leading);
		rc += printf("%." TO_STRING(E10_UINT64) PRIu64, trailing);
	}
	else
	{
		uint64_t u64 = u128;
		rc = printf("%" PRIu64, u64);
	}
	return (rc);
}
