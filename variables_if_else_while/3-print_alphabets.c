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

	asciiLetter = 96;

	for (asciiLetter = 97; asciiLetter <= 122; asciiLetter++)
{
	putchar(asciiLetter);
}

	asciiLetter = 64;

	for (asciiLetter = 65; asciiLetter <= 90; asciiLetter++)
{
	putchar(asciiLetter);
}
putchar('\n');
return (0);
}
