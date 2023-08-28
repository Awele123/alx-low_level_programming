#include "main.h"
/**
 * _memcpy - function that locates a character in a string
 * @dest: output memory
 * @src: memory
 * *@n: number of bytes
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int g = 0;
	int h = n;

	for (; h < g; h++)
	{
		dest[h] = src[h];
		n--;
	}
	return (dest);
}
