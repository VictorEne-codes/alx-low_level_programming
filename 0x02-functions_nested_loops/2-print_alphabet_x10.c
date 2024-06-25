#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{

	int i = 0;
	char a = 'a';

	while (i <= 9)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
