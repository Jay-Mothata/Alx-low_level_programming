#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: If width or height is 0 or negative - NULL.
 *         If the function fails - NULL.
 *         Otherwise - a pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* If width or height is 0 or negative, return NULL */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the array */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for the sub-arrays */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		/* If malloc fails, free everything and return NULL */
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		/* Initialize each element of the sub-array to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	/* Return the pointer to the 2D array */
	return (grid);
}
