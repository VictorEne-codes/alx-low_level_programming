#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: input
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}
