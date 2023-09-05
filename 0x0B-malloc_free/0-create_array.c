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
	unsigned int i;
		char *array_char;

	array_char = malloc(sizeof(char) * size);

	if (size == 0 && array_char != NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		array_char[i] = c;

	free(array_char);

	return (array_char);
}
