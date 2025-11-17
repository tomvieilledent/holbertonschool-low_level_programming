#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter
 *					on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to be used.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (size <= 0 || array == NULL|| cmp == NULL)
		return(-1);

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}	
	return (-1);
}
