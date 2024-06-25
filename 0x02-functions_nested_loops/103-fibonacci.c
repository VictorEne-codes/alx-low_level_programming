#include <stdio.h>

/**
 * main - displays fibinacci
 * Return: always returns 0
 */

int main(void)
{
	unsigned long i = 0, j = 1, k;
	float l;

	while (1)
	{
		k = i + j;
		if (k > 4000000)
			break;

		if ((k % 2) == 0)
			l += k;

		i = j;
		j = k;
	}
	printf("%.0f\n", l);

	return (0);
}
