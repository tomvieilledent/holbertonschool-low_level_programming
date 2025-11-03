#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: A pointer to an 8x8 array representing the chessboard.
 *
 * This function prints the chessboard row by row, with each
 * character followed by a newline at the end of each row.
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
