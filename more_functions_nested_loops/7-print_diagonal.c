#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * Description: Contains a function `print_diagonal` that draws a diagonal
 * followed by a new line.
 * @n: The number of backslashes to print.
 */

void print_diagonal(int n)

{
	int l, c;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
		{
			for (c = 1; c < l; c++)
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
