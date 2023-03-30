#include<stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments in the program
 * @argv: array containing the command line in program
 * Return: 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
