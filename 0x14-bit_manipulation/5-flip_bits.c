#include "main.h"

/**
 * flip_bits - returns number of bits to flip from number to another
 * to get from one number to another
 * @n: digit 1
 * @m: digit 2
 * Return: result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y = 63, amount = 0;
	unsigned long int g;
	unsigned long int h = n ^ m;

	while (y >= 0)
	{
		g = h >> y;
		if (g & 1)
			amount++;
		y--;
	}
	return (amount);
}
