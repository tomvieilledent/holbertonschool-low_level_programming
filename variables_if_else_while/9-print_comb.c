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
	int n;

	for (n = 48; n <= 56; n++)
	{
		putchar(n);
		putchar(44);
		putchar(32);
	}
	putchar(57);
return (0);
}
