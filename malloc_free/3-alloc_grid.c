#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2D grid of dimensions
 * width x height and initializes it to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated grid, or NULL if an error occurs.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
