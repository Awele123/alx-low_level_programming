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
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 && str != NULL)
		return (NULL);

	for (g = 0; g <= size; g++)
		str[g] = c;

	free(str);

	return (str);
}
