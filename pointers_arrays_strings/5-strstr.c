#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Description: This function scans the string pointed to by @s and
 * locates the first occurrence of any character from the string
 * pointed to by @accept. The search does not include the terminating
 * null byte ('\0') of either string.
 *
 * Return: A pointer to the first occurrence in @s of any character
 * from @accept, or NULL if no such character is found.
 */

char *_strstr(char *haystack, char *needle)

{
	int i = 0;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}

		i++;
	}
	return 0;
return (0);
}
