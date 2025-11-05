#include <stdio.h>

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
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
