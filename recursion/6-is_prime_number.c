#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: number to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}

/**
 * prime_check - Checks if a number is prime recursively
 * @t: number to check for primality
 * @s: current divisor
 * Return: 1 if prime, 0 otherwise
 */

int prime_check(int t, int s)
{
	if (t < 2)
	{
		return (0);
	}
	if (t % s == 0 && s != t)
	{
		return (0);
	}
	if (s > t - 1)
	{
		return (1);
	}
	return (prime_check(t, s + 1));
}
