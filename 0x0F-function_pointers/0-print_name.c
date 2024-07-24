#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function to print name
 * @name: input
 * @f: input
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
