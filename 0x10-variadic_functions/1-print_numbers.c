#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function that prints numbers.
 * @separator: string
 * @n: integer number
 * @...: variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digits;
	unsigned int x = 0;

	va_start(digits, n);

	while (x < n)
	{
		x++;

	printf("%d", va_arg(digits, int));

	if (x != n && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(digits);
}
