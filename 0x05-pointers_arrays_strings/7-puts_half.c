#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - prints have of the string
 * @str: input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str);

	if (length % 2 == 0)
	{
		length = length / 2;
	}
	else
	{
		length = (length + 1) / 2;
	}
	for (; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
