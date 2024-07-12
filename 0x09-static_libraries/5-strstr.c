#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
