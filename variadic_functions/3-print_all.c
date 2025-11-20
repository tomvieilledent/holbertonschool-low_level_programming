#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>

/**
 * print_all - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings to print.
 * @...: The strings to be printed.
 *
 * Return: Nothing (void).
 */

void print_all(const char *const format, ...)

{
	unsigned int i = 0;
	int print_int, print_char;
	double print_float;
	char *print_string;

	va_list ap;

	va_start(ap, format);

	while (format != NULL && i < strlen(format))
	{
		switch (format[i])
		{
		case 's':
		{
			print_string = va_arg(ap, char *);
			if (print_string == NULL)
			{
				printf("(nil)");
				break;
			}
				printf("%s", print_string);
				break;
			
		}
		case 'i':
		{	
			print_int = va_arg(ap, int);
			printf("%d", print_int);
			break;
		}

		case 'c':
		{
			print_char = va_arg(ap, int);
			printf("%c", print_char);
			break;
		}

		case 'f':
		{
			print_float = va_arg(ap, double);
			printf("%f", print_float);
			break;
		}

		default:
		{
			i++;
			continue;
		}
		}

		if (i + 1 < strlen(format))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
