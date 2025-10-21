#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char asciiLetter;

	asciiLetter = 122;

	while (asciiLetter > 96)
	{
		putchar(asciiLetter);
		asciiLetter = asciiLetter - 1;
	}
		putchar('\n');

return (0);
}
