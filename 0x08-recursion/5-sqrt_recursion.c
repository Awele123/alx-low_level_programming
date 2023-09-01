#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion -returns the natural square root of a number
 * @n: number
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n != 1)
	return (-1);

	if (n == 1)
	{
		return (1);
	}
	else
		return (n * _sqrt_recursion(sqrt)(n));
}
