#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the valude of x raised to the power of y
 * @x: input
 * @y: input
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
