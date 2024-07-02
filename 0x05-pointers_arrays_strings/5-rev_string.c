#include "main.h"
#include <string.h>

/**
 * rev_string - function to reverse string
 * @s: input
 *
 * Return: void
 */

void swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

void rev_string(char *s)
{
	int i;
	int len = strlen(s) - 1;

	for (i = 0; len > i; i++, len--)
	{
		swap(s + len, s + i);
	}
}
