#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * This function searches for the first occurrence of the substring
 * @needle in the string @haystack. The terminating null bytes are
 * not compared.
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

void print_chessboard(char (*a)[8])

{
int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
	_putchar('\n');
	}

}
