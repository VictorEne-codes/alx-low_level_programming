#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add nodes at beginning
 * @head: input
 * @str: input
 *
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	new_str = strdup(str);
	if (new_str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}
	new_node->str = new_str;
	new_node->len = strlen(new_str);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
