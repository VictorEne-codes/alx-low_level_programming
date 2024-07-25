#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: input
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *s, *separator = "";

	va_start(arg, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg, double));
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(arg);
	printf("\n");
}
