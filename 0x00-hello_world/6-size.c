#include <stdio.h>

/**
 * main - size of types
 *
 * Description: This function wull output sizes of different types
 *
 * Return: will return 0
 *
 */
int main(void)
{
	printf("Size of char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %c bytes(s)\n", sizeof(int));
	printf("Size of a long int: %c bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %c bytes(s)\n", sizeof(long long int));
	printf("Size of float: %c byte(s)\n", sizeof(float));
	return (0);
}
