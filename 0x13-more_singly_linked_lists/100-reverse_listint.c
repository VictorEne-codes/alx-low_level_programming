#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: input
 *
 * Return: listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *cur = *head;

	while (cur != NULL)
	{
		listint_t *next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*head = prev;
	return (*head);
}
