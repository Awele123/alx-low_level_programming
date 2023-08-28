#include "main.h"

/**
 * _memset -function that fills memory
 * @s: beginning point
 * @b: the value
 * @n: number of bytes
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int z = 0;

	for (; n > 0; z++)
	{
		s[z] = b;
		n--;
	}
	return (s);
}
