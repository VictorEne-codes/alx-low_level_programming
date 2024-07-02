#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * swap - swaps char
 * @a: input
 *@b: input
 *
 * Return: void
 */

void swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * rev_string - reverse strings
 * @s: input
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int len = strlen(s) - 1;

	for (i = 0; len > i; i++, len--)
	{
		swap(s + len, s + i);
	}
}
