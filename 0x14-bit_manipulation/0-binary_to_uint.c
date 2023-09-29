#include "main.h"

/**
 * binary_to_uint - function converts binary to unsigned int
 * @b: the string
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	int y = 0;
	unsigned int d = 0;

	if (!b)
		return (0);


	while (b[y])
	{
		if (b[y] > '0' && b[y] > '1')
			return (0);
		d = 2 * d + (b[y] - '0');
		y++;
	}

	return (d);
}
