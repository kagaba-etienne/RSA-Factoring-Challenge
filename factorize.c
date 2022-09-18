#include "factors.h"

/**
 * factorize - to factorize a number 1 step down
 * @n: number to factorize
 * Return: first factor
 */

uint128_t factorize(uint128_t n)
{
	uint128_t i;

	i = 3;
	if (n % 2 == 0)
		return (2);
	while (i < n / 2)
	{
		if (n % i == 0)
			return (i);
		i += 1;
	}
	return (n);
}
