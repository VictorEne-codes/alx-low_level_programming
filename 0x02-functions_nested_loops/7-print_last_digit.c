#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_last_digit(int n)
{
	int i;

	i = abs(n % 10);
	_putchar(i);
	return (abs(n % 10));
}
