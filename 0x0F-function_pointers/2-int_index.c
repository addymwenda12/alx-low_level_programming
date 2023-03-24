#include "function_pointers.h"
#include <stdlib.h>


/**
 * int_index - function that searches for an integer
 * @cmp: pointer to the function to be used to compare values
 * @size: the number of elements in the array array
 *
 * Return: the index of the first element for which the
 * cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
