#include "main.h"

/**
 * _strcpy - Copies a string pointed
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Description: This function copies the string pointed to by src,
 * including the terminating null byte ('\0')
 * The function returns a pointer to dest.
 *
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)

{
int i = 0;
while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
dest[i] = '\0';
return (dest);
}
