#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	array = malloc(len1 + len2 + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	strcpy(array, s1);
	strcat(array, s2);
	return (array);
}
