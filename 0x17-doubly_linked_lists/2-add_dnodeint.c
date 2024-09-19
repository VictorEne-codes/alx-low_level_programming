#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: input
 * @n: input
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;
	dlistint_t *p;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	p = *head;

	if (p != NULL)
	{
		while (p->prev != NULL)
			p = p->prev;
	}

	new_n->next = p;

	if (p != NULL)
		p->prev = new_n;

	*head = new_n;

	return (new_n);
}
