#include<stdio.h>
#include"main.h"
#include<string.h>

/**
 * print_rev - Prints a string in reverse, followed by a newline
 *
 * @s: The string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	/* Get the length of the string */
	while (s[len] != '\0')
		len++;

	/* Print the string on reverse */
	for (int i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	/* Prints a new line character to start a new line */
	_putchar('\n');
}
