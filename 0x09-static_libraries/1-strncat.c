#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - function to append strings
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
