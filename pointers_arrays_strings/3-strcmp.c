#include "main.h"


/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Description: Compares the strings pointed to by @s1 and @s2,
 * character by character. The comparison stops when a difference
 * is found or when a null byte ('\0') is reached.
 *
 * Return: An integer less than, equal to, or greater than zero
 * if @s1 is found, respectively, to be less than, to match, or
 * be greater than @s2.
 */

int _strcmp(char *s1, char *s2)

{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	i++;
}
return (s1[i] - s2[i]);
}
