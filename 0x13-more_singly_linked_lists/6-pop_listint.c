#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * of a listint_t linked list
 *
 * @head: pointer to a pointer to the head node of the list
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (0);

	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (data);
}
