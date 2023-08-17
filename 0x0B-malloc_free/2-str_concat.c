#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int x, y = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] || s2[x]; x++)
		len++;

	result = malloc(sizeof(char) * len);

	if (result == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		result[x] = s1[x];
	}
	while (s2[y] != '\0')
	{
		result[y] = s2[y];
	}
	return (result);
}
