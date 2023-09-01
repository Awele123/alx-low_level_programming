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
	return (_sqrt(int n, int o));
}
/**
 * _square_root -calculates natural square root
 * @n: number
 * @o: index
 * Return: result
 */

int _sqrt(int n, int o)
{
	int sqrt = o * o;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
	{
		return (o);
	}
	else
		return (_sqrt(n, o + 1));
}

