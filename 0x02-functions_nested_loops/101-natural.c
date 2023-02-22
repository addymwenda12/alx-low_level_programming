#include <stdio.h>
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: Nothing.
  */

int main(void)
{
	int i, product;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			product += i;
	printf("%d\n", product);
	return (0);
}
