#include <stdio.h>
#include "main.h"

/**
 * get_endianness - check for endianness
 * Return: int
 */

int get_endianness(void)
{
	unsigned int m;

	return ((int) (((char *)&m)[0]));
}
