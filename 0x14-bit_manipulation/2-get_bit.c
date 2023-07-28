#include "main.h"
#include <limits.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the base number
 * @index: the given index
 *
 * Return: the value of the bit, (-1) otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * CHAR_BIT)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
