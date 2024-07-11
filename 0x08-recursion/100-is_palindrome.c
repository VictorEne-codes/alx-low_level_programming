#include <stdio.h>
#include "main.h"

/**
 * _strlenrecursion - return the length og strings
 * @str: input
 *
 * Return: int
 */

int _strlen_recursion(char *str)
{
	if (*str)
	{
		str++;
		return (1 + _strlen_recursion(str));
	}
	return (0);
}

/**
 * helper - helper function for is_palindrome
 * @str: input
 * @len: input
 * @count: input
 *
 * Return: int
 */

int helper(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (helper(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: input
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (helper(s, len - 1, count));
}
