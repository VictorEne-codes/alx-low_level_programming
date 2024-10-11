#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: input
 * @key: input
 * @value: input
 *
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *value_c;
	unsigned long int j, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_c = strdup(value);
	if (value_c == NULL)
		return (0);

	j = key_index((const unsigned char *)key, ht->size);
	for (i = j; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_c;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(value_c);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = value_c;
	n->next = ht->array[j];
	ht->array[j] = n;

	return (1);
}
