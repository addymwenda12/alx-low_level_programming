#include "main.h"
#include <stdio.h>

/**
 * get_endianness - check the endiannes of a system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int test_number = 1;
	char *byte_pointer = (char *)&test_number;

	if (*byte_pointer)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
