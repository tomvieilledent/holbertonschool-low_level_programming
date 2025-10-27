#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using the character '#'
 * @size: The size (height) of the triangle
 */

void print_triangle(int size)

{
	int n, a, b;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (a = size - n; a > 0; a--)
				_putchar(' ');
			for (b = 1; b <= n; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
