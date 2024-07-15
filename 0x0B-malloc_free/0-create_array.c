#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function to create arrays of char
 * @size: input
 * @c: input
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
