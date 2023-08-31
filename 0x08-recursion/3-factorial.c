#include "main.h"
#include <stdio.h>
/**
 * factorial -returns the factorial of a given number.
 * @n: parameter
 * Return: result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
