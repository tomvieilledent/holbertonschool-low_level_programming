#include "main.h"
#include "stdio.h"

/**
 * add - returns the sum of two integers
 * @a: The first integer to be added.
 * @b: The second integer to be added.
 *
 * Return: The sum of the two integers.
 */

void print_to_98(int n)

{
int i;
for (i = n; i < 98; i++)
	printf("%d, ", i);
for (i = n; i > 98; i--)
	printf("%d, ", i);
printf("98\n");
}

