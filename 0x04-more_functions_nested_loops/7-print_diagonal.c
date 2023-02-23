#include"main.h"

/**
 * print_diagonal - prints a diagonal line of backlashes in the terminal
 * @n: the number of times the backslash character should be printed
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
