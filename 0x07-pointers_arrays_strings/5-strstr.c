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
	while (*haystack)
	{
		char *start = haystack;
		char *needlestr = needle;

		while (*needlestr && *haystack && *haystack == *needlestr)
		{
			haystack++;
			needlestr++;
		}

		if (!*needlestr)
		{
			return (start);
		}

		haystack = start + 1;
	}
	return (0);
}
