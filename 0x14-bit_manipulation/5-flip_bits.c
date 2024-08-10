#include <stdio.h>
#include "main.h"

/**
 * flip_bits - bits to flip to grt one from anotger
 * @n: input
 * @m: input
 *
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mem, flip, i;

	mem = sizeof(n) * 8 - 1;
	flip = 0;
	i = 0;
	while (i <= mem)
	{
		if ((n & 1) != (m & 1))
		flip++;
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (flip);
}
