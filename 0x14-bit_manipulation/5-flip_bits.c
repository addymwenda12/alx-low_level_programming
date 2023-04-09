#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * you would need to flip to get one number to another
 *
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Calculate the XOR of the two numbers */
	unsigned long int xor_outcome = n ^ m;

	/* Initilize a counter for the number of bits to be flipped */
	unsigned int count = 0;

	while (xor_outcome)
	{
		/* If the least significant bit of the result is 1, increment */
		count += xor_outcome & 1;

		/* Shifts the xor result one bit to the right */
		xor_outcome >>= 1;
	}
	/* Return the number of bits to be flipped */
	return (count);
}
