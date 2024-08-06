#include <stdlib.h>
#include "lists.h"

/**
 * find_listint2 - helper function
 * @head: input
 *
 * Return: listint_t
 */

listint_t *find_listint2(listint_t *head)
{
	listint_t *p, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
			if (p == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint list
 * @h: input
 *
 * Return: number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *ln;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	ln = find_listint2(*h);
	for (len = 0; (*h != ln || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == ln && loop)
		{
			if (ln == ln->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
