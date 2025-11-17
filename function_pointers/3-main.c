#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point for calculator program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, or exits with error code
 */

int main(int argc, char *argv[])

{
	int (*operator)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && *argv[2] == '/') || (num2 == 0 && *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(num1, num2));
	return (0);
}
