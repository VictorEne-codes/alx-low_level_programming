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
		if (a <= 8)
		{
			putchar('0' +  a);
			putchar(',');
			putchar(' ');
			a++;
		}
		else
		{
			putchar('0' + a);
			break;
		}
	}
	return (0);
}
