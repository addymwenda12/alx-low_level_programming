#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and
 * sets the head pointer to NULL
 *
 * @head: pointer to a pointer to the head node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
	temp = current->next;
	free(current);
	current = temp;
	}
	*head = NULL;
}
