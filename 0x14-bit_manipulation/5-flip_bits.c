#include "main.h"

/**
 * flip_bits - counts the number of bits to be flipped from n to m
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int b = n ^ m;

	while (b)
	{
		b = b & (b - 1);
		count++;
	}
	return (count);
}

