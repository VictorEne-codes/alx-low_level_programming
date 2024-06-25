#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: input parameter
 *
 * Return: 1 if alphabet and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
