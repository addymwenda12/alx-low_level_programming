#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: pointer to the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *ptr = h;

	for (i = 0; ptr != NULL; i++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
