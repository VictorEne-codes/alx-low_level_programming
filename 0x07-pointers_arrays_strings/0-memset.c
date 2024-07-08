#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with constant byte
 * @s: input
 * @b: inpit
 * @n: input
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
