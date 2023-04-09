#include "main.h"

/**
 * clear_bit - Function thats sets the value of a bit to 0
 * at a gievm index
 *
 * @index: The index of the bit to set
 * @n: Pointer to the number
 *
 * Return: 1 if worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
