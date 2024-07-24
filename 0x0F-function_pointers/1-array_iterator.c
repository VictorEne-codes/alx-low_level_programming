#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function to execute function written
 * @array: input
 * size: input
 * @action: input
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
