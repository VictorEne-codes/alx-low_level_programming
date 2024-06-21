#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print two digit numbers
 * Return: always return 0
 */

int main(void)
{
	int i, j, k, l;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					putchar('0' + i);
            				putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
