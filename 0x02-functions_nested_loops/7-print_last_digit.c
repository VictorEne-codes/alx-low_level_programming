#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - checks and prints last digit
 * @n: input parameter
 *
 * Return: always 0
 */

int print_last_digit(int n)
{
	int i;

	i = abs(n % 10);
	_putchar(i + '0');
	return (abs(n % 10));
}
