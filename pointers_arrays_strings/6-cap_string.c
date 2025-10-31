#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to convert
 * Return: pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' ||
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
