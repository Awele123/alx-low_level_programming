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
	int **alloc;
	int w, h;

	if (width == 0 || height <= 0)
		return (NULL);
	alloc = malloc(sizeof(int *) * height);
	if (alloc == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		alloc[w] = malloc(sizeof(int) * width);
		if (alloc[w] == NULL)
		{
			while (w >= 0)
			{
				w++;
			}
			free(alloc[w]);
			free(alloc);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			alloc[w][h] = 0;
	}
	return (alloc);
}

