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
	if (n < 0)
		{
		_putchar(-n % 10 + '0');
		return (-n % 10);
		}
	else
		{
		_putchar(n % 10 + '0');
		return (n % 10);
		}
}
