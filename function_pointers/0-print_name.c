#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy
 *
 * Description: This function copies n bytes from the memory area
 * pointed to by src to the memory area pointed to by dest.
 *
 * Return: A pointer to the destination memory area (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
