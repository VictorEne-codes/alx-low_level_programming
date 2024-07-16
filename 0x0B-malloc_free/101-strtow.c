#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_words - counts words in string
 * @str: input
 *
 * Return: int
 */

int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == ' ')
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

/**
 * copy_words - copy strings
 * @array: input
 * @str: input
 *
 * Return: void
 */

void copy_words(char **array, char *str)
{
	int i, start = 0, end = 0, word_index = 0;

	while (str[start])
	{
		while (str[start] == ' ')
		{
			start++;
		}
		end = start;
		while (str[end] && str[end] != ' ')
		{
			end++;
		}
		if (end > start)
		{
			int len = end - start;

			array[word_index] = malloc((len + 1) * sizeof(char));
			if (array[word_index] == NULL)
			{
				for (i = 0; i < word_index; i++)
				{
					free(array[i]);
				}
				free(array);
			}
			strncpy(array[word_index], str + start, len);
			array[word_index][len] = '\0';
			word_index++;
			start = end;
		}
	}
	array[word_index] = NULL;
}

/**
 * strtow - splits words
 * @str: input
 *
 * Return: char
 */

char **strtow(char *str)
{
	int num_words;
	char **array;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);

	array = malloc((num_words + 1) * sizeof(char *));

	if (array == NULL)
	{
		return (NULL);
	}
	copy_words(array, str);
	return (array);
}
