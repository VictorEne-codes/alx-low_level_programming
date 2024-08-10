#include <stdio.h>
#include "main.h"

/**
 * set_bit - set bit to 1 at index
 * @n: input
 * @index: input
 *
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mem;
	unsigned long int m;

	mem = sizeof(*n) * 8 - 1;
	if (index > mem)
	{
		return (-1);
	}
	m = 1 << index;
	*n = m | *n;
	return (1);
}
