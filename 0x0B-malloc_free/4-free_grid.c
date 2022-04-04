#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by the alloc_grid function
 * @grid: double pointer to multi-dimensional array.
 * @height: height of the grid.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
