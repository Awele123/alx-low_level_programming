#include <stdlib.h>
#include "main.h"

/**
 * array_range -creates an array of integers.
 * @min: min range
 * @max: max range
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *p;
	int  y, j, z;

	y = 0;

	if (min > max)
		return (NULL);

	z = max - min + 1;

	p = malloc(sizeof(int) * z);

	if (y == 0 && p == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		p[j] = min++;

	return (p);
}

