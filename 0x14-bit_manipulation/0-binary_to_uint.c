#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: Pointing to a string of 0 and 1 chars.
 *
 * Return: Converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			j <<= 1;
		}
		else if	(b[i] == '1')
		{
			j = (j << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (j);
}
