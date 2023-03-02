#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j;
	char *letters = "aeotl";
	char *numbers = "43701";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
