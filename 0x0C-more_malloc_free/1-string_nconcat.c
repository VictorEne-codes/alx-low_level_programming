#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: input
 * @s2: input
 * @n: input
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	array = malloc(len1 + n + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		array[len1 + j] = s2[j];
	}
	array[len1 + n] = '\0';
	return (array);
}
