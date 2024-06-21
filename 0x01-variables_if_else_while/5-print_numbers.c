#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints digit numbers 0-9
 * Return: always returns 0
 */

int main(void)
{
	int a;

	a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
