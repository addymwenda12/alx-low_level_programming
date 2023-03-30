#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements
 * of a list_t list
 * @h: Pointer to the list_t list to print
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		current = current->next;
		count++;
	}
	return (count);
}
