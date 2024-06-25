#include <stdio.h>

/**
 * print_alphabet_x10 - function to print alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		i++;
	}
	putchar('\n');
}
