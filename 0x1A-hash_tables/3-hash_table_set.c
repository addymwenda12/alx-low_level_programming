#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the hash table
 * @key: The key(cannot be empty string)
 * @value: The value associated with the key
 * Return: 1 if it succeed, 0 while not
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key already exist, update the key */
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	/* No collision, create new node */
	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
		return (0);
	
	new_node->key = strdup(key); /* Copy of the key */
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value); /* Copy of the value */
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
