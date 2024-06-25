#include <stdio.h>

/**
 * main - displays fibonacci
 * Return: returns 0
 */

int main(void)
{
	int i;
	unsigned long j = 0, k = 1, l;

	for (i = 0; i < 50; i++)
	{
		l = j + k;
		printf("%lu", l);

		j = k;
		k = l;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
