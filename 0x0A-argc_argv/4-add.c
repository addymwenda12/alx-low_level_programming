#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - adds positive numbers
 * @argv: array that contain command line in program
 * @argc: number of command line in program
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
