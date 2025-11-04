#include "main.h"


/**
 * File: 0-puts_recursion.c
 *
 * Description: This file contains the implementation of a function that prints
 * a string, followed by a new line, using recursion.
 *
 * Author: fitax
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
