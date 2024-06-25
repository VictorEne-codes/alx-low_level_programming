#include <stdio.h>

/**
 * print_alphabet - funtion to print alphabets
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
