#include <stdio.h>

/**
 * main - displays fibonacci of numbers
 * Return: always return 0
 */

int main(void)
{
	int i;
	unsigned long a = 0, b = 1, c;
	unsigned long ax, ay, bx, by;
	unsigned long x, y;

	for (i = 0; i < 92; i++)
	{
		c = a + b;
		printf("%lu, ", c);

		a = b;
		b = c;
	}

	ax = a / 10000000000;
	bx = b / 10000000000;
	ay = a % 10000000000;
	by = b % 10000000000;

	for (i = 93; i < 99; i++)
	{
		x = ax + bx;
		y = ay + by;
		if (ay + by > 9999999999)
		{
			x += 1;
			y %= 10000000000;
		}

		printf("%lu%lu", x, y);
		if (i != 98)
			printf(", ");

		ax = bx;
		ay = by;
		bx = x;
		by = y;
	}
	printf("\n");
	return (0);
}
