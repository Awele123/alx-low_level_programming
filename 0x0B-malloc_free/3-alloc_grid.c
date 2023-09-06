#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid -returns pointer
 * @width: width
 * @height: height
 * Return: result
 */
int **alloc_grid(int width, int height)
{
	int **final;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	final = malloc(sizeof(int *) * height);
	if (final == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		final[w] = malloc(sizeof(int) * width);
		if (final[w] == NULL)
		{
			free(final);
			for (h = 0; h <= height; h++)
				free(final[h]);
			return (NULL);
		}
	}
	for (h = 0; h < width; h++)
	{
		final[w][h] = 0;
	}
	return (final);
}
