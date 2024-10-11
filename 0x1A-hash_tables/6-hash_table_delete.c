#include "hash_tables.h"


/**
 * hash_table_delete - function that deletes a hash table
 * @he: input
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *n, *tmp;
	unsigned long int j;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			n = ht->array[j];
			while (n != NULL)
			{
				tmp = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
