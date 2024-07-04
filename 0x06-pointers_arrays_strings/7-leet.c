#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * leet - print numbers in place of alphabets
 * @str: input
 *
 * Return: char
 */

char *leet(char *str)
{
	char *r = str;
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
			{
				*str = n[i] + '0';
			}
		}
		str++;
	}
	return (r);
}
