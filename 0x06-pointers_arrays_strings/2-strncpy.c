#include"main.h"

/**
 * _strncpy - Copies a string, but uses at most n bytes from src
 *
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy from src
 *
 * Return: A pointer to the destination buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
