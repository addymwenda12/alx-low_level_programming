#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: character to the allocator location
 * Return: 0
 */

char *_strdup(char *str)
{
	char *c;
	int i, n = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		c[n] = str[n];
	}
	return (c);
}
