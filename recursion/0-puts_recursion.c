#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to be printed
 *
 * Description: Recursively prints each character of the string
 * until the null terminator is encountered, followed by a new line.
 */

void _puts_recursion(char *s)

{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
