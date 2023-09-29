#include "main.h"

/**
 * get_bit - returns the value of a bit in a given index
 * @n: digut to be found
 * @index: id
 * Return: result
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int g;

	while (index > 63)
		return (-1);

	g = (n >> index) & 1;

	return (g);
}
