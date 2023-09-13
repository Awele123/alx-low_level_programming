#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: array size
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	while (array == NULL || action == NULL)
		return;

	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}
}

