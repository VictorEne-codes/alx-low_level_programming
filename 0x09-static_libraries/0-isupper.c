#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

/**
 * _isupper - function to check for uppercase
 * @c: input param
 *
 * Return: return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
