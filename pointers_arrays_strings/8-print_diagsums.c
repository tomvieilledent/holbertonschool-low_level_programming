#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the square matrix of integers
 * @size: size of the matrix (number of rows/columns)
 *
 * Description: Calculates and prints the sums of the two diagonals
 * of a square matrix of integers.
 */

void print_diagsums(int *a, int size)

{
int i = 0;
int d1 = 0, d2 = 0;

for (i = 0; i < size; i++)
{
	d1 = d1 + a[i * size + i]; /* i*size pour la ligne */
	d2 = d2 + a[i * size + size - 1 - i];
}
printf("%d, %d\n", d1, d2);
}
