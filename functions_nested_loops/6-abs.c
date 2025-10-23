#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to evaluate
 *
 * This function returns the absolute value of n.
 * If n is negative, it returns -n; otherwise, it returns n.
 *
 * Return: the absolute value of n
 */

int _abs(int n)

{
	if (n < 0)
		{
		return (-n);
		}
	else
		{
		return (n);
		}
}
