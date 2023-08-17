#include<stdio.h>

/**
 * main - prints its name, followed by new name
 * @argc: number of command line arguments
 * @argv: array containing progrma command line arguments
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
