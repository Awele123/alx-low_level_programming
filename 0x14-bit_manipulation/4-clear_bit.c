#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a guven index
 * @n: pointer to the number to change
 * @index: but index to clear
 * Return: result
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	while (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
