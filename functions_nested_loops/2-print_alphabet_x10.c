#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 1; n <= 10; n++)
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

}
