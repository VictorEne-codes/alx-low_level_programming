#include <stdio.h>

/**
 * main - prints 1 to 100
 * Return: void
 */

int  main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("\n");
			}
		}
		else
		{
			printf("%d  ", i);
		}
	}
	return (0);
}
