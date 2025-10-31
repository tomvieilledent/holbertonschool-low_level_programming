#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to be modified.
 *
 * Description: This function iterates through the input string and
 * capitalizes the first letter of each word. Words are separated by
 * spaces, tabs, newlines, and other specified delimiters.
 *
 * Return: Pointer to the modified string.
 */


char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
	str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
	str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
	str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
	str[i - 1] == '{' || str[i - 1] == '}') &&
	(str[i] >= 'a' && str[i] <= 'z'))
	{
	str[i] -= ('a' - 'A');
	}
	i++;
	}
return (str);
}
