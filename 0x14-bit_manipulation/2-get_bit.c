#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets bit at a given index
 * @n: input
 * @index: input
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mem;

	mem = sizeof(n) * 8 - 1;

	if (index > mem)
	{
		return (-1);
	}
	return ((n >> index) & 1);

}
