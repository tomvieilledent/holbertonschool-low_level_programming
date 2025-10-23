#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)

{
int hh, h, mm, m;

for (hh = 0; hh <= 2; hh++)
	if (hh <= 1)

	for (h = 0; h <= 9; h++)
		for (mm = 0; mm <= 5; mm++)
			for (m = 0; m <= 9; m++)
			{
				_putchar('0' + hh);
				_putchar('0' + h);
				_putchar(':');
				_putchar('0' + mm);
				_putchar('0' + m);
				_putchar('\n');
			}

	else
	for (h = 0; h <= 3; h++)
		for (mm = 0; mm <= 5; mm++)
			for (m = 0; m <= 9; m++)
			{
				_putchar('0' + hh);
				_putchar('0' + h);
				_putchar(':');
				_putchar('0' + mm);
				_putchar('0' + m);
				_putchar('\n');
			}
}
