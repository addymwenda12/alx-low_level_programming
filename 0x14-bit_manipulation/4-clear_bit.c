#include "main.h"
#include <limits.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the given number
 * @index: the given index
 *
 * Return: (1) if succeed, (-1) otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * CHAR_BIT)
	{
		return (-1);
	}

	mask = ~(1UL << index);

	*n &= mask;

	return (-1);
}
