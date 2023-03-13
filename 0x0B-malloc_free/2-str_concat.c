#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: First string
* @s2: Second string
* Return: NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int len = len1 + len2 + 1;
	char *ptr = malloc(sizeof(char) * (len1 + len2 + 1));

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
	if (!ptr)
	{
		return (NULL);
	}
	memcpy(ptr, s1, len1);
	memcpy(ptr + len1, s2, len2 + 1);
	return (ptr);
}
