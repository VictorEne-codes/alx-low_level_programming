#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*main - function to print putchar
*Return: always return 0
*/

int main(void)
{
	char put[] = "_putchar";
	int i;

	for (i = 0; put[i] != '\0'; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');
	return (0);
}
