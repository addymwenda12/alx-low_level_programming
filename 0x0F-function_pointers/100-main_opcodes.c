#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for opcode program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of strings containing the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *funcptr = (unsigned char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", *(funcptr + i));
		if (i == (bytes - 1))
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
