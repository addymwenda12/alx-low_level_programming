#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point for calculator program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of strings containing the arguments.
 *
 * Return: 0 on success, exit with status 98, 99, 100 on failure.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}
