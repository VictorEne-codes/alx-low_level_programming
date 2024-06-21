#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints alphabets
 * Return: always returns 0
 */

int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
