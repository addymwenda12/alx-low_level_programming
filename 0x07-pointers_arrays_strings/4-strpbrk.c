#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: a pointer to the string to be searched
 * @accept: a pointer to the string containing the characters to be matched
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*S != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
