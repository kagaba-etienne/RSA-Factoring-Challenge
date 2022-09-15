#include "factors.h"

/**
 * factorize - to factorize a number 1 step down
 * @n: number to factorize
 * Return: first factor
 */

int factorize(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (i);
		i += 1;
	}
	return (n);
}
