#include "main.h"

/**
 * binary_to_uint - converts binary to unisgned int
 * @b: the given binary as character
 *
 * Return: the converted number uint, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			result = result * 2;
		}
		else if (b[i] == '1')
		{
			result = result * 2 + 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
