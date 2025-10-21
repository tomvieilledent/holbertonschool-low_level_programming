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

	for (asciiLetter = 97 ; asciiLetter <= 122; asciiLetter++)
		if (asciiLetter == 101)
		{
			continue;
		}
		else if (asciiLetter == 113)
		{
			continue;
		}
		else
		{
		putchar(asciiLetter);
		}
putchar('\n');

return (0);
}
