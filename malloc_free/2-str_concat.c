#include <stdlib.h>
#include "main.h"

/*
*/

char *str_concat(char *s1, char *s2)

{
	int len1 = 0, len2 = 0, i = 0;
	char *con;

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
