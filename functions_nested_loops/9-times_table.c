#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 * Return: void
 */

void times_table(void)

{
int n1, n2, t;

for (n1 = 0; n1 <= 9; n1++)
	{
	for (n2 = 0; n2 <= 9; n2++)
		{
		if (n2 >= 9)
			{
			t = n1 * n2;
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			}
		else
			{
			t = n1 * n2;
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			_putchar(44);
			_putchar(32);
			_putchar(32);
			}
		}
	_putchar('\n');
	}
}
