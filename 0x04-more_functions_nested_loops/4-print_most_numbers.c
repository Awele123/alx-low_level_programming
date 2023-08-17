#include "main.h"

/**
 * print_most_numbers -prints from 0 to 9 excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int b;

	for (b = 0 ; b < 10 ; b++)
	{
		if (b != 2 && b != 4)
			_putchar(b + '0');
	}
	_putchar('\n');
}
