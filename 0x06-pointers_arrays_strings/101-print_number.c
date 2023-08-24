#include "main.h"

/**
 * print_number -function prints an integer
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int z;

	z = n;

	if (n < 0)
	{
		_putchar('-');
		z = -n;
	}

	if (z / 10 != 0)
	{
		print_number(z / 10);
	}
	_putchar((z % 10) + '0');
}
