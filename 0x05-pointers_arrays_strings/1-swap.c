#include <stdio.h>
#include "main.h"

/**
 * swap_int - function to swap two integers
 * @a: input 1
 * @b: input 2
 *
 * Return: always void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
