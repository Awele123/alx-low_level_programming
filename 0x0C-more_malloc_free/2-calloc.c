#include <stdlib.h>
#include "main.h"

/**
 * *_memset -set block of memory
 * @s: memory
 * @b: char
 * @n: determinant
 * Return: result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int u;

	for (u = 0; u < n; u++)
		s[u] = b;
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: amount of elements
 * @size: size
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *std;

	if (nmemb == 0 || size == 0)
		return (NULL);

	std = malloc(size * nmemb);

	if (std == NULL)
	{
		free(std);
		return (NULL);
	}

	_memset(std, 0, nmemb * size);

	return (std);
}
