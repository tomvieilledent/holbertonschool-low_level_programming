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
int len = 0, c;

while (str[len] != '\0')
{
	len++;
}
if (len % 2 == 0)
{
	c = len / 2;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}

}
else
{
	c = (len + 1) / 2;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
}
_putchar('\n');
}
