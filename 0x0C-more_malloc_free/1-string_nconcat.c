#include "main.h"
#include<stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len_s1, len_s2, lresult, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (n > len_s2)
		n = len_s2;
	lresult = len_s1 + n;

	result = malloc(lresult + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < lresult; i++)
	{
		if (i < len_s1)
			result[i] = s1[i];
		else
			result[i] = s2[i - len_s1];
	}
	result[i] = '\0';

	return (result);
}
