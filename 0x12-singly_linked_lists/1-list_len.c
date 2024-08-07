#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the length of list
 * @h: input
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
