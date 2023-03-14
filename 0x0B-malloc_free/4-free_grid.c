#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a two dimensional grid
 * previously created by your alloc_gridd function
 * @grid: pointer to 2 dimensinal array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
