#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function prints the second half of a given
 * string, followed by a new line. If the number of characters
 * in the string is odd, it prints the last (length - 1) / 2
 * characters. It uses the _putchar function to display each
 * character.
 *
 * Return: Nothing.
 */

void puts_half(char *str)

{
int len = 0, c = 0;

while (str[len] != '\0') /*défini longueur  string*/
{
	len++;
}
len--;
if (len % 2 == 0) /*si len pair*/
	for (c = len / 2; c <= len; c++)
	{
		_putchar(str[c]);
	}
else /*si len impair*/
	for (c = (len + 1) / 2; c <= len; c++)
	{
		_putchar(str[c]);
	}
_putchar('\n');
}
