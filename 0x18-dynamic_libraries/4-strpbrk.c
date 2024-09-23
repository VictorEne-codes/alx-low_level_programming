#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input
 * @accept: input
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
