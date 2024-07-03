#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * is_separator - separators of words
 * @c: input
 *
 * Return: int
 */

int is_separator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalize all strings
 * @str: input
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int cap_next = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (is_separator(str[i]))
		{
			cap_next = 1;
		}
		else if (cap_next && isalpha((unsigned char) str[i]))
		{
			str[i] = toupper((unsigned char) str[i]);
			cap_next = 0;
		}
		else if (isdigit((unsigned char) str[i]))
		{
			cap_next = 0;
		}
		else
		{
			str[i] = tolower((unsigned char) str[i]);
		}
		i++;
	}
	return (str);
}
