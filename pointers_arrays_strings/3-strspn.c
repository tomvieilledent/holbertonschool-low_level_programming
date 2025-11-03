#include "main.h"


/**
 * _strspn - Gets the length of a prefix substring
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Description: Copies up to n characters from the string @src
 * to the buffer @dest. If @src is shorter than n, the remaining
 * space is filled with null bytes ('\0').
 *
 * Return: A pointer to the resulting string @dest
 */

unsigned int _strspn(char *s, char *accept)

{
	int i = 0, j =  0;
	unsigned int n = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				n++;
				i++;
				j = 0;
			}
			else
			{
				j++;
			}
			
		}
		i++;
	}
	return (n);
}
