#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string.
 * @s: Pointer to the string whose length is to be calculated.
 * Description:
 * This function calculates the length of a string using recursion. It returns
 * the total number of characters in the string, excluding the null terminator.
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
