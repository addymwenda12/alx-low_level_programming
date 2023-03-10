#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: Number of command line in a program
 * @argv: Array containing command line in a program
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int cents = atoi(argv[1]);
	int num_coins = 0;

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins += cents / 25;
	cents %= 25;
	num_coins += cents / 10;
	cents %= 10;
	num_coins += cents / 5;
	cents %= 5;
	num_coins += cents / 2;
	cents %= 2;
	num_coins += cents;
	printf("%d\n", num_coins);
	return (0);
}
