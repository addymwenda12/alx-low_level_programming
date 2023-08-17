#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 *
 * @head: Double pointer to the head of the list
 * @str: Pointer to the string to be added
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Duplicate the string */
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Initialize the new node */
	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = *head;

	/* Update the head pointer */
	*head = new_node;

	return (new_node);
}
