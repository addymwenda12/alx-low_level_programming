#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input name
 * @f: pointer of the function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);
}
