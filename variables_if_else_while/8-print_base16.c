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

	for (asciiLetter = 48; asciiLetter <= 57; asciiLetter++)
{
	putchar(asciiLetter);
}
	asciiLetter = 64;

	for (asciiLetter = 97; asciiLetter <= 102; asciiLetter++)
{
	putchar(asciiLetter);
}
putchar('\n');
return (0);
}
