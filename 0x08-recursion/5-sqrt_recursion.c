#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 *  _sqrt_recursion -calculates square root of a number
 * @n: number
 * @o: index
 * Return: result
 */
int _square_root(int n, int o);

int _sqrt_recursion(int n)
{
	return (_square_root(n, 1));
}

/**
 * _square_root -calculates natural square root
 * @n: number
 * @o: index
 * Return: result
 */

int _square_root(int n, int o)
{
	int sqrt = o * o;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
	{
		return (o);
	}
	else
		return (_square_root(n, o + 1));
}

