#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print two digit numbers
 * Return: always return 0
 */

int main(void)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			putchar('0' + i);
            		putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
