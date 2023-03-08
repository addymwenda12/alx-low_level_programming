#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: The string to check
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	char *begin = s;
	char *end = s + len - 1;

	while (begin < end)
	{
		if (*begin != *end)
		{
			return (0);
		}
		begin++;
		end--;
	}
	return (1);
}
