#include "main.h"

/**
 * print_last_digit - returns the last digit of an integer
 * @n: the integer to evaluate
 *
 * This function computes the last digit of n. If n is negative,
 * it returns the positive value of the last digit.
 *
 * Return: the value of the last digit (always positive)
 */

int print_last_digit(int n)

{
int t;

	if (n < 0)
		{
		t = -n % 10;
		}
	else
		{
		t = n % 10;
		}
_putchar('0' + t);
return (t);
}
