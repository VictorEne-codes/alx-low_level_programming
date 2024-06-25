#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - funtion to check for lowercase
 * @c: input
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
