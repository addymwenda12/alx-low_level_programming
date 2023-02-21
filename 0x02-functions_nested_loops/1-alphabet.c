#include<stdio.h>
#include "main.h"
#include"1-alphabet.h"

/**
 * print_alphabet - prints alphabet in lowercase, followed by a new line
 *
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
