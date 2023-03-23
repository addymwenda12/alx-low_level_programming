#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @size: The size of the array
 * @action: Pointer to the function
 * @array: Array input
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size && action)
		for (i = 0; i < size ; i++)
			action(array[i]);
}
