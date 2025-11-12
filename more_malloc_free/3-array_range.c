#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 *
 * Return: A pointer to the allocated memory initialized to zero.
 *         If nmemb or size is 0, or if malloc
 *         fails, the function returns NULL.
 */

int *array_range(int min, int max)

{
int *arr, i;

if (min >= max)
	return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
	return (NULL);

for (i = min; i <= max; i++)
	arr[i] = i;
return (arr);
}
