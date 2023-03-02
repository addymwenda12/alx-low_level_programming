#include"main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: First string to be compared
 * @s2: Second string to be compared
 *
 * Return: an integer less than, equal to, or greater than zero
 * if s1 is found
 * to be less than, equal to, or greater than s2, respectively
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
