#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: input
 * @n: input
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p;
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	p = *head;

	if (p != NULL)
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new_n;
	}
	else
	{
		*head = new_n;
	}

	new_n->prev = p;

	return (new_n);
}
