#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings to print.
 * @...: The strings to be printed.
 *
 * Return: Nothing (void).
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i = 0;
	unsigned int num;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
