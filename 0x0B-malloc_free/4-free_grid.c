#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocated to the grid
 * created by alloc_grid()
 * @grid: grid to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height == 0)
		return;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
