#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings to print.
 * @...: The strings to be printed.
 *
 * Return: Nothing (void).
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
unsigned int i = 0;
char *charg;

va_list args;
va_start(args, n);

if (n == 0)
	return (0);

while (i < n)
{
charg = va_arg(args, char *);
printf("%s%s", charg, separator);
i++;
}
printf("\n");
}
