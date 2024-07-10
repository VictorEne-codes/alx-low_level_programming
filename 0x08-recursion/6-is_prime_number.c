#include <stdio.h>
#include "main.h"

/**
 * is_help - helper function
 * @n: input
 * @i: input
 *
 * Return: int
 */

int is_help(int i, int n)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_help(i + 1, n));
}

/**
 * is_prime_number - returns 1 if the input is prime, otherwise 0
 * @n: input
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_help(2, n));
}
