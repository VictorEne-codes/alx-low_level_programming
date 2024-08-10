#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set bit to 0 at given index
 * @n: input
 * @index: input
 *
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mem, m;

	mem = sizeof(*n) * 8 - 1;

	if (index > mem)
	{
		return (-1);
	}
	m = 1 << index;
	*n = *n & ~m;
	return (1);
}
