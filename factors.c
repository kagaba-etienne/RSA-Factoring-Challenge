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
	int buffer;
	int factor;

	file = fopen(argv[1], "r");
	while(fscanf(file,"%d", &buffer) == 1)
	{
		factor = factorize(buffer);
		printf("%d = %d * %d\n", buffer, factor, buffer / factor);
	}
	fclose(file);
	return (EXIT_SUCCESS);
}
