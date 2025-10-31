#include "main.h"


/**
 * _strncpy - Copies a string up to n bytes
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Description: Copies up to n characters from the string @src
 * to the buffer @dest. If @src is shorter than n, the remaining
 * space is filled with null bytes ('\0').
 *
 * Return: A pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0;

while (i < n && src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
while (i < n)
{
	dest[i] = '\0';
	i++;
}
return (dest);
}
