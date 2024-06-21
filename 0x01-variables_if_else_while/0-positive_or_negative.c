#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a funtion to check for positive or negative numbers
 *
 * Return: always return 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("empty");
	}
	return (0);
}
