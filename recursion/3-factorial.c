#include "main.h"

/**
 * factorial - Computes the factorial of a given number.
 * @n: The number for which the factorial is to be computed.
 * Return: -1 if n is negative, 1 if n is 0 or 1,
 * and the factorial of n for other positive integers.
 */

int factorial(int n)

{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
