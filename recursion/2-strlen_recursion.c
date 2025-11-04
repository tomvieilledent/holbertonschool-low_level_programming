#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be printed.
 * Description:
 * This function prints a string using recursion. Each character of the string
 * is printed in reverse order, followed by a new line at the end.
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{	
		return 0;
	}
	else 
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
