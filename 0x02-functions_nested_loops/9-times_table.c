#include <stdio.h>
#include "main.h"

/**
 * times_table - print times table to 9
 * Return: void
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (k < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
