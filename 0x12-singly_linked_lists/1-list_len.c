#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements
 * in a linked list_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	/* Iterate over the list */
	while (current != NULL)
	{
		/* Advance the current pointer */
		current = current->next;
		/* Increment the counter */
		count++;
	}
	return (count);
}
