#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free grud of 2D arrays
 * @grid: input
 * @height: input
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
