#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: argument type list
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int g = 0;
	char *r, *p = "";

	va_list file;

	va_start(file, format);

	if (format)
	{
		while (format[g])
		{
			switch (format[g])
			{
				case 'c':
					printf("%s%c", p, va_arg(file, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(file, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(file, double));
					break;
				case 's':
					r = va_arg(file, char *);
					if (!r)
						r = "(nil)";
					printf("%s%s", p, r);
					break;
				default:
					g++;
					continue;
			}
			p = ", ";
			g++;
		}
	}

	printf("\n");
	va_end(file);
}
