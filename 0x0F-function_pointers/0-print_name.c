#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: input
 * @f: input
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
