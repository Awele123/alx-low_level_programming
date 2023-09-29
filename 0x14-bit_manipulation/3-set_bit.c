#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: index to be set 
 * Return: result
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	while (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
