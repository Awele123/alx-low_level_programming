#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted unsigned int or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int i, convnum = 0, decval = 1;
	int l = strlen(b);

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = (l - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			convnum += decval;
		}
		decval *= 2;
	}
	return (convnum);
}
