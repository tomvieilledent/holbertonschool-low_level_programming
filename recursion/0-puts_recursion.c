#include "main.h"


/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Pointer to the string to be printed.
 * Description:
 * This function prints a string using recursion. Each character of the string
 * is printed one by one, followed by a new line at the end.
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
