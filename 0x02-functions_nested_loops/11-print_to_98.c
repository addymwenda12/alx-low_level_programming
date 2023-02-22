#include<stdio.h>
#include"main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start counting from to 98
 * Return: always 0 (success)
 */

void print_to_98(int n)
{
	int step = (n < 98) ? 1 : -1;

	for (int i = n ; i != 98 ; i += step)
	{
		printf("%d, ", 1);
	}
	printf("98\n");
}
