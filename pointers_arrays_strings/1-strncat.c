#include "main.h"



/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string to be appended to
 * @src: The source string to append from
 * @n: The maximum number of bytes to use from src
 *
 * Description: This function appends up to n characters from the src
 * string to the dest string, and adds a terminating null byte at the end.
 * If src is less than n characters long, the entire string is appended.
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0, j = 0;

while (dest[i] != '\0')
{
	i++;
}
while (src[j] != '\0' && j < n)
{
	dest[i] = src[j];
	i++;
	j++;
}
dest[i] = '\0';
return (dest);
}
