#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argv: array containing command line in program
 * @argc: number of command line in program
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
