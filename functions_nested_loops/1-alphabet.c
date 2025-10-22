#include "main.h"

/**
 * print_alphabet - Entry point
 */

void print_alphabet(void)
{
	char asciiLetter;

	asciiLetter = 97;

	while (asciiLetter < 123)
	{
		_putchar(asciiLetter);
		asciiLetter = asciiLetter + 1;
	}
		_putchar('\n');
}
