#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: The string between numbers
 * @n: The number of strings
 * @...: variable number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list t;
	char *r;
	unsigned int x;

	va_start(t, n);

	for (x = 0; x < n; x++)
	{
		r = va_arg(t, char *);

		if (r == NULL)
			printf("(nil)");
		else
			printf("%s", r);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(t);
}
