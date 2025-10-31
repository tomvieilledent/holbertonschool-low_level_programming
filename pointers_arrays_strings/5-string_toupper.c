#include "main.h"

/**
 * reverse_array - Reverses the elements of an integer array in place
 * @a: Pointer to the first element of the array
 * @n: Number of elements in the array
 *
 * Description: This function reverses the order of elements in the
 *              integer array pointed to by @a. It swaps the first
 *              element with the last, the second with the second-to-last,
 *              and so on, until the entire array is reversed.
 *
 * Return: Nothing (void)
 */

char *string_toupper(char *a)

{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
