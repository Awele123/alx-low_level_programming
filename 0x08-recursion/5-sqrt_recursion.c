#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 *  _sqrt_recursion -calculates square root of a number
 * @n: number
 * @o: index
 * Return: result
 */
int _sqrt(int n, int o);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -calculates natural square root
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

