#include "main.h"

/**
 * print_square : draw a square
 * @size: The size of square
 * @l: The number of lines
 * @c: The number of columns
 */

void print_square(int size)

{
	int l, c;

	for (l = 0; l < size; l++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
