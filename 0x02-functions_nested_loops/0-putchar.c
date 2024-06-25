#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_put - function to print putchar
*Return: always return 0
*/

int _put(void)
{
	char put[] = "_putchar";
	int i;

	for (i = 0; put[i] != '\0'; i++)
	{
		_putchar(put[i]);
	}
	return (0);
}
