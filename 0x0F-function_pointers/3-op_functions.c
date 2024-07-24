#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - add integers
 * @a: input
 * @b: input
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtracts integers
 * @a: input
 * @b: input
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies integers
 * @a: input
 * @b: input
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides integers
 * @a: input
 * @b: input
 *
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - finds remainder after diving integers
 * @a: input
 * @b: input
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
