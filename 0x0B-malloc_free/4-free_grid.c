#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/* If grid is NULL or height is non-positive, do nothing */
	if (grid == NULL || height <= 0)
		return;

	/* Free each sub-array */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the main array */
	free(grid);
}
