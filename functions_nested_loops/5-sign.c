#include "main.h"

/**
 * _isalpha - Checks if a character is an alpha
 * @c: The character to check (ASCII value)
 *
 * Return: 1 if c is an alpha, 0 otherwise
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('O');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
