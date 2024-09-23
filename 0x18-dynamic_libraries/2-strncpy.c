#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - function to copy string
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
