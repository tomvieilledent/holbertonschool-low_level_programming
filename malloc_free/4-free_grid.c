#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: Pointer to a 2D array of integers to be freed
 * @height: Height of the grid (number of rows)
 *
 * Description: Iterates through each row of the grid and frees the memory
 * allocated for each row. Finally, frees the memory allocated for the grid
 * itself. Prevents memory leaks by ensuring all dynamically allocated memory
 * is properly released.
 */


void free_grid(int **grid, int height)

{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
