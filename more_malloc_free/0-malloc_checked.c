#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * and exits with status 98 on failure.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function exits with status 98.
 */

void *malloc_checked(unsigned int b)

{
void *var;

var = malloc(b);

	if (var == NULL)
		exit(98);

return (var);
}
