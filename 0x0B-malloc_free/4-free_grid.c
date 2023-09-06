#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free array
 * @grid: grid
 * @height: height
 * Return: result
 */

void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t <= height; t++)
	{
		free(grid[t]);
	}
	free(grid);
}
