#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: natural square root, or -1 if none
 */

int _sqrt_recursion(int n)

{
	n = square_root(0, n);
	return (n);
}
/**
 * square_root - Helper function to calculate square root recursively
 * @s: current test value
 * @t: number to find the square root of
 * Return: square root, or -1 if not a natural square root
 */

int square_root(int s, int t)
{
	if (t < 0 || s == t)
		return (-1);
	else if (t == 1)
		return (1);
	else if (s * s == t)
		return (s);
	else
		return (square_root(s + 1, t));
}
