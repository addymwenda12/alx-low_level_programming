#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to the string to be searched
 * @c: the character to be pointed to the string
 *
 * Return: pointer to the first occurrence of the character c in string
 * else NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
