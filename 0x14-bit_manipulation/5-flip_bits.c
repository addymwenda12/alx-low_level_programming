#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the given number
 * @m: the other number
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	int size = sizeof(unsigned long int) * 8;

	for (i = 0; i < size; i++)
	{
		if ((n & (1 << 0)) != (m & (1 << 0)))
			count++;
		n = (n >> 1);
		m = (m >> 1);
	}
	return (count);
}
