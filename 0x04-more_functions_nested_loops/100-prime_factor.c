#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
			if (n == 1 || n == i)
			{
				printf("%ld\n", i);
				return (0);
			}
		}
	}
	return (0);
}
