#include "main.h"


/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 * Return: The length of the string.
 */

int _strlen(char *s)

{
	int t = 0;

while (*s != '\0')
{
t++;
s++;
}
return (t);
}
