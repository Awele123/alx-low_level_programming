#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory
 * @ptr: pointer
 * @old_size: previous size
 * @new_size: new size
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *op;
	unsigned int v;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	op = ptr;

	if (new_size < old_size)
	{
		for (v = 0; v < new_size; v++)
			p[v] = op[v];
	}

	if (new_size > old_size)
	{
		for (v = 0; v < old_size; v++)
			p[v] = op[v];
	}

	free(ptr);
	return (p);
}
