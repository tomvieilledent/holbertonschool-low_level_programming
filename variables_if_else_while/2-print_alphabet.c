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
	/*char letter = "a";*/
	char asciiLetter;

	asciiLetter = 97;

	while (asciiLetter < 123)
	{
		putchar(asciiLetter);
		asciiLetter = asciiLetter + 1;
	}
		putchar('\n');

return (0);
}
