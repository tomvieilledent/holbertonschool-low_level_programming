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

void reverse_array(int *a, int n)

{
	int i, j = 0;
	int t;

	for (i = n - 1; i > (n / 2); i--, j++)
	{
	t = a[i];
	a[i] = a[j];
	a[j] = t;
	}
}
