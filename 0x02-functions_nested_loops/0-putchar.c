#include <stdio.h>
#include <stdlib.h>

/**
*_putchar - function to print putchar
*Return: always return 0
*/

int _putchar(void)
{
	char put[] = "_putchar";
	int i;

	for (i = 0; put[i] != '\0'; i++)
	{
		putchar(put[i]);
	}
	putchar('\n');
	return (0);
}
