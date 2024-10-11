#include "hash_tables.h"
/**
 * hast_djb2 - function implementing the djb2 algorithm
 * @str: input
 *
 * Return: unsigned long int
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = *str++))
		hash = ((hash << 5) + hash) + i;

	return (hash);
}
