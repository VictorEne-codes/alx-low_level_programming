#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints a binary number
 * @n: inpit
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	signed long int mem;
	char c;
	int flag;

	mem = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	flag = 0;
	while (mem >= 0)
	{
		c = (n >> mem) & 1;
		if (flag == 1)
		{
			putchar(c + '0');
		}
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				flag = 1;
			}
		}
		mem -= 1;
	}
}
