#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds posutive  nimbers
 * @argc: input
 * @argv: input
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) < 48 || atoi(argv[i]) > 57)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
