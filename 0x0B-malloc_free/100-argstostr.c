#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates arguments to strings
 * @ac: input
 * @av: input
 *
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *array;
	int i, j, len = 0, total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		total_len += len + 1;
	}
	array = malloc(total_len + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			array[total_len++] = av[i][j];
		}
		array[total_len++] = '\n';
	}
	array[total_len] = '\0';
	return (array);
}
