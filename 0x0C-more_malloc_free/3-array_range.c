#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of intefers
 * @min: input
 * @max: inpit
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int *array;
	unsigned int i, range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	array = malloc(sizeof(int) * range);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
