#include "main.h"

/**
 * print_square - Draws a square using the character '#'
 * @size: The size of the square
 *
 * Description: Prints a square of '#' characters of a given size.
 * If size is 0 or less, only a new line is printed.
 * Uses _putchar function to print characters.
 */

void print_square(int size)

{
	int l, c;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
