#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index
 * of a listint_t linked list.
 *
 * @head: A pointer to the head node of the list
 * @index: The index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);

	return (1);
}
