#include "lists.h"

/**
 * get_dnodeint_at_index - get node index for an element
 * @head: doubly linked list head
 * @index: integer index number
 *
 * Return: node having the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);
}
