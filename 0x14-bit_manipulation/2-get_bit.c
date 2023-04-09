#include "main.h"
#include <stdlib.h>

/**
 * get_bit - Function that return the value of a given bit
 * at a given index
 *
 * @index: The index to get starting from 0
 * @n: The number to get the bit from
 *
 * Return: The value of the bit at the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
