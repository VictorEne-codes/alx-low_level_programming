#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_recur - helper function to reverse a listint list
 * @f: input
 * @s: input
 *
 * Return: listint
 */

listint_t *reverse_recur(listint_t *f, listint_t *s)
{
	listint_t *p, *prev = NULL;

	p = f;
	while (p->next != s)
	{
		prev = p;
		p = p->next;
	}

	if (prev != NULL)
		prev->next = f;
	s = f->next;
	f->next = p->next;
	if (f != p && s != f)
		s = reverse_recur(s, f);
	p->next = s;
	return (p);
}

/**
 * reverse_listint - reverses a listint list
 * @head: input
 *
 * Return: listint
 */

listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	*head = reverse_recur(*head, NULL);
	return (*head);
}
