#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int len(char *str);
char *create_array(int size);
char *iterate_zero(char *str);
void mul(char *prod, char *mult, int digit, int zeroes);
void add_number(char *final_prod, char *next_prod, int next_len);

/**
 * len - Finds the length of a string.
 * @str: input
 * Return: int
 */

int len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
* create_array - Creates an array of x
 * @size: input
 * Return: char
 */
char *create_array(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		exit(98);
	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';
	array[index] = '\0';
	return (array);
}

/**
 * iterate_zero - Iterates till 0
 * @str: input
 *
 * Return: char
 */

char *iterate_zero(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}

/**
 * get_digit - digit to int
 * @c: int
 * Return: int
*/

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * mul - Multiplies a string of numbers by a single digit.
 * @prod: input
 * @mult: input
 * @digit: input
 * @zeroes: input
 * Return: void
 */

void mul(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = len(mult) - 1;
	mult += mult_len;
	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;
	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}
	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_number - Adds the numbers stored in two strings.
 * @final_prod: input
 * @next_prod: input
 * @next_len: input
 * Return: void
 */

void add_number(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;
	while (*(next_prod + 1))
		next_prod++;
	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		next_prod--;
		next_len--;
	}
	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		final_prod--;
		next_prod--;
	}
	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: input
 * @argc: imput
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = iterate_zero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = len(argv[1]) + len(argv[2]);
	final_prod = create_array(size + 1);
	next_prod = create_array(size + 1);
	for (index = len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		mul(next_prod, argv[1], digit, zeroes++);
		add_number(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			_putchar(final_prod[index]);
	}
	_putchar('\n');
	free(next_prod);
	free(final_prod);
	return (0);
}
