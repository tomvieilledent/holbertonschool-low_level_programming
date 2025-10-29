#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function prints one character out of two
 * starting with the first character of the given string. It uses
 * the _putchar function to display characters, and ends with
 * a new line after printing.
 *
 * Return: Nothing.
 */

void puts2(char *str)

{
int i = 0;
while (str[i])
{
		_putchar(str[i]);
	i++;
	i++;
}
_putchar('\n');
}
