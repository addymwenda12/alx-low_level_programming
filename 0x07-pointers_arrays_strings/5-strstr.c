#include <stddef.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: the string to search in
 * @needle: the substring to seach for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *b1, *b2;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack == '\0')
	{
		b1 = haystack;
		b2 = needle;

		while (*b1 == *b2 && *b2 != '\0')
		{
			b1++;
			b2++;
		}
		if (*b2 == '\0')
		{
			return (haystack);
		}
		haystack = b1 + 1;
	}
	return (NULL);
}
