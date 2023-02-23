#include"main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of times the underscore to be printed
 * Return: a straight line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
