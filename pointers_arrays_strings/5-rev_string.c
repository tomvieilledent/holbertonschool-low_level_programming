#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 *
 * Description: This function reverses the content of a string
 *              in place, without using any additional arrays.
 *              It swaps characters from the start and end of
 *              the string, moving toward the center, until the
 *              entire string is reversed.
 *
 * Return: Nothing (void).
 */

void rev_string(char *s)

{
	int i = 0, j = 0;
	char temp;

	while (s[j] != '\0')
	{
		j++;
	}

	j--;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
