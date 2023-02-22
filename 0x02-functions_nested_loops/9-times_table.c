#include<stdio.h>
#include"main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 *
 * Return: none
 */

void times_table(void)
{
	int i, j, product;

	for (j = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			product = i * j;
			if  (j == 0)
			{
				putchar('0');
			}
			else if (product < 10)
			{
				putchar(' ');
				putchar(product + '0');
			}
			else
			{
				putchar(product / 10 + '0');
				putchar(product % 10 + '0');
			}
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
		}
	}
}
