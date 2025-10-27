#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 except 2 and 4
 * Description: Contains a function `print_most_numbers` that prints numbers
 * from 0 to 9 except 2 and 4, followed by a new line.
 */
void print_most_numbers(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2)
		{
			continue;
		}
		if (i == 4)
		{
			continue;
		}
		else
		_putchar(i + '0');
	}
	_putchar('\n');
}
