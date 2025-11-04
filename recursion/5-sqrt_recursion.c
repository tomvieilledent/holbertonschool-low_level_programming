#include "main.h"

/**
 * 5-sqrt_recursion.c - Contains a function to compute the natural square
 * root of a number recursively.
 *
 * This file provides an implementation of a recursive function that calculates
 * the natural square root of a given integer. If the number does not have a
 * natural square root, the function returns -1.
 *
 * Author: fitax
 */

int _sqrt_recursion(int n)

{
	n = square_root(0, n);
	return (n);
}
int square_root(int s, int t)
{
	if (t < 0 || s == t)
		return (-1);
	else if (s * s == t)
		return (s);
	else
		return (square_root(s + 1, t));
}
