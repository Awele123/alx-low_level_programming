#include "main.h"

/**
 * get_bit - returns the value of a bit at given index
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal, i;

	if (index > 31)
		return (-1);

	i = (n >> index) & 1;
	bitVal = i;
	return (bitVal);
}

