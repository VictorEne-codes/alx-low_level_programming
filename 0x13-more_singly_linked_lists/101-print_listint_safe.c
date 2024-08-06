#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint - helper function
 * @head: input
 *
 * Return: listint_t
 */

listint_t *find_listint(listint_t *head)
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
 * print_listint_safe - prints a linked list
 * @head: input
 *
 * Return: size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int loop;
	listint_t *ln;

	ln = find_listint((listint_t *) head);

	for (len = 0, loop = 1; (head != ln || loop) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == ln)
			loop = 0;
		head = head->next;
	}
	if (ln != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
