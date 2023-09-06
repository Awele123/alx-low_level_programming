#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @c: initialized char
 * @size: size of array
 * Return:result
 */

char *create_array(unsigned int size, char c)
{
	unsigned int g;
	char *array_char;

	if (size == 0)
		return (NULL);
	array_char = malloc(sizeof(char) * size);
	if (array_char == NULL)
		return (NULL);

	for (g = 0; g < size; g++)
		array_char[g] = c;

	return (array_char);

	free(array_char);

	return (0);
}
