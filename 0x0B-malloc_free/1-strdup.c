#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns pointed yo new space
 * @str: input
 *
 * Return: char
 */

char *_strdup(char *str)
{
	char *array;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	array = malloc(len + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	strcpy(array, str);
	return (array);
}

