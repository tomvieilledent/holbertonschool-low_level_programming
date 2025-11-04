#include "main.h"

/**
 * _pow_recursion - Computes the power of a number.
 * @x: The base number.
 * @y: The exponent.
 * Return: -1 if y is negative, 1 if y is 0,
 * and the result of x raised to the power of y if y is positive.
 * and the result of x raised to the power of y for other cases.
 */

int _pow_recursion(int x, int y)

{
	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	return ((x) * _pow_recursion(x, y - 1));
}
