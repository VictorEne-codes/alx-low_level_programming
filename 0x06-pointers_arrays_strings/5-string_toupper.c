#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * string_toupper - convert strings to uppercase
 * @str: input
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper((unsigned char) str[i]);
		i++;
	}
	return (str);
}
