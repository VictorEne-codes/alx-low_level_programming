#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: input
 * @size: input
 *
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
