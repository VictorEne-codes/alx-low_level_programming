#include <stdio.h>
#include "main.h"

int _sqrt_help(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_help(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: input
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_help(n, 0));
}
