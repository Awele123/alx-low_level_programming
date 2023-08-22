#include "main.h"
#include <stdio.h>

/**
 * print_array -prints n elements of an array of integers
 * @a: array
 * @n: number of elements of array to be printed
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < (n - 1); g++)
	{
		printf("%d, ", a[g]);
	}
		if (g == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}


