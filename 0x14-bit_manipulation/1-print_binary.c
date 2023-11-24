#include "main.h"

/**
 * print_binary - prints the binary representation
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, bit = 0;

	for (i = 31; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			bit = 1;
		}
		else if (bit)
		{
			_putchar('0');
		}
	}
	if (!bit)
	{
		_putchar('0');
	}
	_putchar('\n');
}
