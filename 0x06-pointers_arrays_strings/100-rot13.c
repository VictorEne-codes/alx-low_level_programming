#include <string.h>
#include "main.h"

/**
 * rot13 - encrypt using rot13
 * @str: input
 *
 * Return: char
 */

char *rot13(char *str)
{
	char off_set, *r = str;
	while (*str)
	{
		off_set = (*str & 32) + 65;
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			*str = (*str - off_set + 13) % 26 + off_set;
		str++;
	}
	return (r);
}
