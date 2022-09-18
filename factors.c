#include "factors.h"
/**
 * main - to open file and supply integers
 * @argc - argument count
 * @argv - argument vector
 * Return  - success or failure
 */

int main(int argc, char **argv)
{
	FILE *file;
	char number[39];
	char buffer[40];
	uint128_t test;
	uint128_t factor1;
	uint128_t factor2;

	file = fopen(argv[1], "r");
	if (file == NULL)
		return (EXIT_FAILURE);
	while(fscanf(file,"%s", buffer) == 1)
	{
		strcpy(number, buffer);
		test = transform(buffer);
		_print_u128_u(test);
		factor1 = factorize(test);
		factor2 = test / factor1;
		printf("=");
		_print_u128_u(factor2);
		printf("*");
		_print_u128_u(factor1);
		printf("\n");
	}
	fclose(file);
	return (EXIT_SUCCESS);
}
