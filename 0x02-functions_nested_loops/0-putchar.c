#include <stdio.h>
#include <stdlib.h>

/**
*_putchar - function to print putchar
*Return: always return 0
*/

int _putchar(void)
{
	char put[] = "_putchar";

	write(1, put, sizeof(put) - 1);
	write(1, "\n", 1);
	return (0);
}
