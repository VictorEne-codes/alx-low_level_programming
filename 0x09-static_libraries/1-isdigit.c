#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digits
 * @c: input param
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
