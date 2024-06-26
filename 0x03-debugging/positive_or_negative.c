#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - a funtion to check for positive or negative numbers
 * @i: input param
 * Return: always return 0
 */


int positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 9)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("empty");
	}
	return (0);
}
