#include "main.h"



/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to the string to print.
 *
 * Description: This function prints each character of the string
 *              one by one using the _putchar function, and then
 *              prints a newline character at the end.
 *
 * Return: Nothing (void).
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
