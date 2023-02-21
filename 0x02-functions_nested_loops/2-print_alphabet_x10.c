#include<stdio.h>
#include"main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lower
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
