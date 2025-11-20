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

void print_all(const char *const format, ...)

{
	int i;
	int pr_int;
	double pr_float;
	char *pr_string;

	va_list ap;

	va_start(ap, format);

	while (format != NULL && i < _strlen(format))
	{
		switch (format[i])
		{
		case 's':
			pr_string = va_arg(ap, char *);
			if (pr_string == NULL)
				printf("(nil)");
			{
				printf("%s", pr_string);
				break;
			}
		case 'i':
			pr_int = va_arg(ap, int);
			printf("%d", pr_int);
			break;
		case 'c':
			pr_int = va_arg(ap, int);
			printf("%c", pr_int);
			break;
		case 'f':
			pr_float = va_arg(ap, double);
			printf("%f", pr_float);
			break;
		default:
			i++;
			continue;
		}

		if (i + 1 < _strlen(format))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
