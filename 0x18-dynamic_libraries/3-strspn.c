#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input
 * @accept: input
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
