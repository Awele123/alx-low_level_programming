#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: result
 */

int get_endianness(void)
{
	unsigned int u = 1;
	char *c = (char *) &u;

	if (u)
		c = (char *) &u;
	return (*c);
}
