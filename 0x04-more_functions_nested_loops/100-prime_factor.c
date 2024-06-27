#include <stdio.h>
#include <math.h>

/**
 * main -  prime factor
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	int pf;

	for (pf = 2; pf <= sqrt(num); pf++)
	{
		if (num % pf == 0)
		{
			num = num / pf;
			pf = 1;
		}
	}
	printf("%ld\n", num);
return (0);
}
