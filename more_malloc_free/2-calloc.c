#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The maximum number of bytes to take from s2.
 *
 * Return: A pointer to the newly allocated space in memory
 *         containing the concatenated string.
 *         If malloc fails, the function returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
unsigned char *arr;
unsigned int i;

if (nmemb == 0 || size == 0)
	return (NULL);

arr = malloc(nmemb * size);
if (arr == NULL)
	return (NULL);

for (i = 0; i < nmemb; i++)
	arr[i] = 0;

return (arr);
}