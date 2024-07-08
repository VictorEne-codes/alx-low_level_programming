#include <string.h>
#include "main.h"

/**
 * _memcpy - functiom that copy memory area
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
