#include "main.h"

/**
 * times_table - prints every minute from 00:00 to 23:59
 */

void times_table(void)
{
	int n1, n2, t;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			if (n2 == 0)
			{
				t = n1 * n2;
				if (t > 10)
				{
					_putchar(t / 10 + '0');
					_putchar(t % 10 + '0');
				}
				if (t <= 10)
				{
					_putchar(t / 10 + '0');
				}
			}
			else
			{
				t = n1 * n2;
				_putchar(',');
				_putchar(' ');
				if (t > 10)
				{
					_putchar(t / 10 + '0');
					_putchar(t % 10 + '0');
				}
				if (t <= 10)
				{
					_putchar(' ');
					_putchar(t % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}
