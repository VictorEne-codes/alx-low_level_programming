#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: input
 * @index: input
 *
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p1;
	dlistint_t *p2;
	unsigned int n;

	p1 = *head;

	if (p1 != NULL)
		while (p1->prev != NULL)
			p1 = p1->prev;

	n = 0;

	while (p1 != NULL)
	{
		if (n == index)
		{
			if (n == 0)
			{
				*head = p1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				p2->next = p1->next;

				if (p1->next != NULL)
					p1->next->prev = p2;
			}

			free(p1);
			return (1);
		}
		p2 = p1;
		p1 = p1->next;
		n++;
	}

	return (-1);
}
