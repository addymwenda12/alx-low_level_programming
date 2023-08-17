#include"main.h"
#include<string.h>
#include<stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first
 * character, followed by a new line
 *
 * @str: The string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
