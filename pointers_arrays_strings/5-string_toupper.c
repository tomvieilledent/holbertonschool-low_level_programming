#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @a: Pointer to the string to be converted
 *
 * Description: This function iterates through the string pointed to by @a
 *              and converts all lowercase alphabetic characters to their
 *              uppercase equivalents. The conversion is done in place.
 *
 * Return: Pointer to the modified string
 */

char *string_toupper(char *a)

{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
