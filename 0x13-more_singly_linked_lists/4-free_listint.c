#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to head of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
