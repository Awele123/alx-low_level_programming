#include "main.h"

/**
 * print_binary - prints the binary re of a number
 * @n: binary number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int y = 63, amount = 0;
	unsigned long int h;

	while (y >= 0)
	{
		h = n >> y;
		if (h & 1)
		{
			_putchar('1');
			amount++;
		}
		else if (amount)
		{
			_putchar('0');
		}
		y--;
	}
	if (!amount)
	{
		_putchar('0');
	}
}
