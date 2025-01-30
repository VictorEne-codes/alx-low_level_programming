#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 *
 * @array: input
 * @size: size
 * @value: value
 * Return: int
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t n;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (n = 0; n < size; n++)
		printf("%s %d", (n == 0) ? ":" : ",", array[n]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 *
 * @array: input
 * @size: size
 * @value: value
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = recursive_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
