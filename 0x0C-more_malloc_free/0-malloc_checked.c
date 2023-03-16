#include "main.h"
#include <stdlib.h>
#include<stdio.h>
#include <errno.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer to be allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		perror("malloc");
		exit (98);
	}
	return (ptr);
}
