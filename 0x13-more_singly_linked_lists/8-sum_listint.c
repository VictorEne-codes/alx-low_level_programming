#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: input
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
