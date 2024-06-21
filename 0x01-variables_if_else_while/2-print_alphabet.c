#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints alphabets
 * Return: always returns 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
