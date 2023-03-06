#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: The memory area which bytes is copied to
 * @n: The number of bytes to be copied
 * @src: memory area which bytes is copied from
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
