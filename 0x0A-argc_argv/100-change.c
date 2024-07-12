#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * @argc: input
 * @argv: input
 * Return: int
 */

int main(int argc, char *argv[])
{
	int c, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	while (c > 0)
	{
		if (c >= 25)
		{
			c -= 25;
		}
		else if (c >= 10)
		{
			c -= 10;
		}
		else if (c >= 5)
		{
			c -= 5;
		}
		else if (c >= 2)
		{
			c -= 2;
		}
		else
		{
			c -= 1;
		}
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
