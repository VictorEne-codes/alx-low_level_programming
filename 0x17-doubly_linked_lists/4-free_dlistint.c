#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: input
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((p = head) != NULL)
	{
		head = head->next;
		free(p);
	}
}
