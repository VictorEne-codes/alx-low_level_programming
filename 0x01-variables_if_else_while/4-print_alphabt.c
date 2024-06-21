#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all alphabets except q and e
 * Return: always return 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
