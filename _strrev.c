#include "factors.h"

/**
 * _strrev - to reverse a string;
 * str: string to reverse
 * Return: reversed string
 */

char *_strrev(char *str)
{
	char *p1;
	char *p2;

	if (!str || !*str)
		return str;
	for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return (str);
}
