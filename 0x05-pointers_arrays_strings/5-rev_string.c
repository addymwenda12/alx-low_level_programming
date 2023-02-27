#include"main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
