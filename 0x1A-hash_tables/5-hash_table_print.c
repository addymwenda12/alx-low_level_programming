#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;

	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			flag = 1;
		}
	}
	printf("}\n");
}
