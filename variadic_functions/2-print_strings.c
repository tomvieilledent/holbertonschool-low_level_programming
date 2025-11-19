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
	const char *str;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, const char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
