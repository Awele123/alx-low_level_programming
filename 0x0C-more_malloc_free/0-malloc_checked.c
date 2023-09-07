#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -function that allocates memory
 * @b: number
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	int t;
	int *std;

	t = 0;

	std = malloc(b);

	if (t == 0 && std == NULL)
		exit(98);

	return (std);
}
