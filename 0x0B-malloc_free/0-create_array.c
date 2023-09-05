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

	array_char = malloc(sizeof(char) * size);

	if (size == 1 && array_char != NULL)
		return (NULL);

	for (g = 1; g <= size; g++)
		array_char[g] = c;

	free(array_char);

	return (array_char);
}
