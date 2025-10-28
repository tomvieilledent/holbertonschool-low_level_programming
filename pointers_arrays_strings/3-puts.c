#include "main.h"


/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 * Return: The length of the string.
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
_putchar('\n');
}
