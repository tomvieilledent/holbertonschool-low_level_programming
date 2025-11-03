#include "main.h"


/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the accepted characters
 *
 * Description: This function calculates the number of bytes in the initial
 * segment of @s which consist only of bytes from @accept.
 *
 * Return: the number of bytes in the initial segment of @s
 * which consist only of bytes from @accept
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
