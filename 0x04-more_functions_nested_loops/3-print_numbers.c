#include<stdio.h>
#include"main.h"

/**
 * print_numbers - a function that prints the numbers from 0 to 9
 *
 * Return: 0-9, followed by a new line
 */

void print_numbers(void)
{
	int i;

	for (i > 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
