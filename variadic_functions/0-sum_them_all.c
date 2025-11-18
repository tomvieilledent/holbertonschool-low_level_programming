#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments.
 * @...: The integers to sum.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)

{
unsigned int i = 0;
int total = 0;

va_list args;
va_start(args, n);

if (n == 0)
	return (0);

while (i < n)
{
	total += va_arg(args, int);
	i++;
}

va_end(args);
return (total);
}
