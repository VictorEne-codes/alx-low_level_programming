#include <string.h>
#include "main.h"

/**
 * rot13 - encrypt using rot13
 * @s: input
 *
 * Return: char
 */

char *rot13(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'm')
		{
			s[i] += 13;
		}
		else if (s[i] >= 'A' && s[i] <= 'M')
		{
			s[i] += 13;
		}
		else if (s[i] >= 'n' && s[i] <= 'z')
		{
			s[i] -= 13;
		}
		else if (s[i] >= 'N' && s[i] <= 'Z')
		{
			s[i] -= 13;
		}
	}
	return (s);
}
