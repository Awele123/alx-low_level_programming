#include "main.h"
/**
 * _strncat - function that concatenate two strings
 * @dest: output
 * @src: input
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int p;
	int d;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	d = 0;
	while (d < n && src[d] != '\0')
	{
	dest[p] = src[d];
	p++;
	d++;
	}
	dest[p] = '\0';
	return (dest);
}
