#include<stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: Number of arguments in the program
 * @argv: Array containing the command line in program
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
