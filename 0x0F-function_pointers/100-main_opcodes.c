#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints its own opcodes
 * @argc: arguments count
 * @argv: array of arguments
 * Return: result
 */

int main(int argc, char *argv[])
{
	int b, j;
	char *fun;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	fun = (char *)main;

	for (j = 0; j < b; j++)
	{
		if (j == b - 1)
		{
			printf("%02hhx\n", fun[j]);
			break;
		}
		printf("%02hhx ", fun[j]);
	}
	return (0);
}
