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
		putchar('\n');
		asciiLetter = asciiLetter + 1;
	}
/* tant que lettre =/ z, lettre=lettre+1*/

return (0);
}
