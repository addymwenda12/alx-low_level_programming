#include"main.h"

/**
 * _strncat - Concatenates two strings, but uses at most n bytes from src
 *
 * @dest: The destination of the string
 * @src: The source string
 * @n: The maximum number of bytes to copy from src
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
		p++;

	while (*src && n--)
		*p++ = *src++;

	*p = '\0';

	return (dest);
}
