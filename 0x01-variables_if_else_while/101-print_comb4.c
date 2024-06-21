#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print two digit numbers
 * Return: always return 0
 */

int main(void)
{
	int i, j, k;
	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			for (k = j; k <= 9; k++)
			{
				putchar('0' + i);
            			putchar('0' + j);
				putchar('0' + k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
