#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of its paramters
 * @n: The paramter number
 * @...: A variable number of paramter
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list b;
	unsigned int g = 0, add = 0;

	va_start(b, n);

	while (g < n)
	{	g++;
		add += va_arg(b, int);

	va_end(b);
}
	return (add);
}
