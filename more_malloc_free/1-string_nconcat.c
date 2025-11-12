#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The maximum number of bytes to take from s2.
 *
 * Return: A pointer to the newly allocated space in memory
 *         containing the concatenated string.
 *         If malloc fails, the function returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *con;
	unsigned int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (len2 < n)
		con = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		con = malloc(sizeof(char) * (len1 + n + 1));
	if (con == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		con[i] = s1[i];

	if (len2 < n)
	{
		for (i = len1; i < len1 + len2; i++)
			con[i] = s2[i - len1];
	}

	if (len2 >= n)
	{
		for (i = len1; i < len1 + n; i++)
			con[i] = s2[i - len1];
	}

	con[i] = '\0';
	return (con);
}
