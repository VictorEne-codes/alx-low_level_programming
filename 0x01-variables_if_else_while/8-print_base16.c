#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print hexadecimal digits in lpwecase
 * Return: always returns 0
 */

int main(void)
{
	char a = 'a';
	char A = 0;

	while (A <= 9)
	{
		putchar('0' + A);
		A++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
