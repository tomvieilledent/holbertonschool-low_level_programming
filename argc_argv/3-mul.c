#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the name of the program followed by a new line.
 * The program name is always the first argument (argv[0]).
 * @argc: argument count
 * @argv: array of argument strings
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])

{
	int i;
	(void)argc;

	if (argv[1] != NULL && argv[2] != NULL)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
		printf("Error\n");
	return (0);
}
