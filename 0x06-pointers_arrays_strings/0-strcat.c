#include"main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;

	while (*scr)
		*p++ = *src++;

	*p = '\0';
	return (dest);
}
