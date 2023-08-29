#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of two diagonals
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sumb, sumc, z;

	sumb = 0;
	sumc = 0;

	for (z = 0; z < size; z++)
	{
		sumb = sumb + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		sumc += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", sumb, sumc);
}
