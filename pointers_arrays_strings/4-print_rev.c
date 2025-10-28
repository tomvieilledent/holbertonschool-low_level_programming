#include "main.h"





/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be reversed and printed.
 *
 * Description: This function prints the characters of a string
 *              in reverse order using the _putchar function.
 *              It first iterates through the string to find its end,
 *              then prints each character backward until the start
 *              of the string is reached. Finally, it prints a new line.
 *
 * Return: Nothing (void).
 */

void print_rev(char *s)

{
	int t = 0;

	while (*s != '\0')
	{
		s++;
		t++;
	}
	s--;
	t--;
	while (t >= 0)
	{
		_putchar(*s);
		t--;
		s--;
	}
_putchar('\n');
}
