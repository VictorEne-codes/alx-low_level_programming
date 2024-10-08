#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to intefer
 * @b: input
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		uint = (uint << 1) + (b[i] - '0');
	}
	return (uint);
}
