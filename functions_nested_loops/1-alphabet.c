#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function uses a loop to iterate through the lowercase
 * alphabet and prints each character using the _putchar function.
 * It ends by printing a newline character.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
