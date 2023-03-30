#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 * @begin: the index of the first character to check
 * @end: the index of the last character to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int _is_palindrome(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	if (s[begin] == s[end])
	{
		return (_is_palindrome(s, begin + 1, end - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (_is_palindrome(s, 0, len - 1));
}
