#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: list head
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
