#include "main.h"

/**
 * _strpbrk - Locates the first occurrence of any character from a set.
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

char *_strpbrk(char *s, char *accept)

{
	int i = 0, j =  0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
