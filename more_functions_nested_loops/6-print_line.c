#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * Description: Contains a function `print_line` that prints underscores
 * (`_`) based on the input parameter `n`, followed by a new line.
 * line in the terminal using the character '_', followed by a new line.
 * @n: The number of underscores to print.
 */
void print_line(int n)

{
	int b;

	for (b = 0; b <= n; b++)
		_putchar('_');
	_putchar('\n');
}
