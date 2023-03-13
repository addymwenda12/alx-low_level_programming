#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
		ptr[n] = c;
	return (ptr);
}
