#include "factors.h"

/**
 * transform - transforms string to uint128
 * @str: string containing integer to transform
 * Return: uint128 integer type
 */

uint128_t transform(char *str)
{
	int len;
	char buffer1[20];
	uint64_t bufferint64;
	uint128_t bufferint128;
	int i;
	char *endptr;
	int base;

	len = strlen(str);
	base = 10;
	if (len > 19)
	{
		strcpy(buffer1, str);
		sscanf(buffer1, "%s", str);
		strcpy(buffer1, _strrev(buffer1));
		buffer1[19] = '\0';
		strcpy(buffer1, _strrev(buffer1));
		bufferint64 = strtoull(buffer1, &endptr, base);
		for (i = 0; i < len; i++)
			if ( len - i < 19)
				str[i] = '\0';
		bufferint128 = P10_UINT64 * transform(str);
		bufferint128 += (uint128_t)(bufferint64);
	}
	else
	{
		bufferint64 = strtoull(str, &endptr, base);
		bufferint128 = (uint128_t)(bufferint64);
	}
	return bufferint128;
}
