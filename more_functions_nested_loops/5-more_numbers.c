#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times, followed by "\n"
 * Description: Contains a function `more_numbers` that prints numbers
 * from 0 to 14, 10 times, followed by a new line.
 *
 */
void more_numbers(void)

{
	int i, n;

	for (n = 0; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
