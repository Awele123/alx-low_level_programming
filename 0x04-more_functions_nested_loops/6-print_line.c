#include "main.h"

/**
 * print_line -function that draws a straight line in the terminal
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int b;

		for (b = 1 ; b <= n ; b++)
			_putchar('_');
		_putchar('\n');
	}
}
