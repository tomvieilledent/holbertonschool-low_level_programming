#include "main.h"
#include "stdio.h"

/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line
* @n: the starting number
*
* Description: prints all numbers from n to 98, separated by a comma
* and a space, in ascending or descending order depending on n.
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
