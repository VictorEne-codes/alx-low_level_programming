#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a mememory block
 * @old_size: input
 * @new_size: input
 * @ptr: input
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
