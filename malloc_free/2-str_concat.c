#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Return: Pointer to a newly allocated space in memory containing
 * the contents of s1, followed by s2, and null terminated.
 * Returns NULL on failure or if either s1 or s2 is NULL.
 */

char *str_concat(char *s1, char *s2)

{
	int len1 = 0, len2 = 0, i = 0;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	con = malloc(sizeof(char) * (len1 + len2 + 1));
	if (con == NULL)
		return (NULL);

	while (i < len1)
	{
		con[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		con[i] = s2[i - len1];
		i++;
	}
	con[i] = '\0';

	return (con);
}
