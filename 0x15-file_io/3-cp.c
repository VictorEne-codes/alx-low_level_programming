#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <errno.h>
#include "main.h"

/**
 * print_err - prints error message
 * @message: input
 * @filename: input
 * @exit_code: input
 *
 * Retuen: void
 */

void print_err(const char *message, const char *filename, int exit_code)
{
	if (filename)
	{
		dprintf(STDERR_FILENO, message, filename);
	}
	else
	{
		dprintf(STDERR_FILENO, "%s\n", message);
	}
	exit(exit_code);
}

/**
 * _cp - helper function
 * @file_from: input
 * @file_to: input
 *
 * Return: void
 */

void _cp(char *file_from, char *file_to)
{
	int fd1, fd2, num_r, num_w;
	char buffer[BUFF_SIZE];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		print_err("Error: Can't read from file %s\n", file_from, 98);

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		print_err("Error: Can't write to %s\n", file_to, 99);

	num_r = 1024;
	while (num_r == 1024)
	{
		num_r = read(fd1, buffer, 1024);
		if (num_r == -1)
			print_err("Error: Can't read from file %s\n", file_from, 98);

		num_w = write(fd2, buffer, num_r);

		if (num_w == -1)
			print_err("Error: Can't write to %s\n", file_to, 99);
	}

	if (num_r == -1)
		print_err("Error: Can't read from file %s\n", file_from, 98);
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
/**
 * main - entry point
 * @argc: input
 * @argv: input
 *
 * Return: int
 */


int main(int argc, char *argv[])
{
	if (argc != 3)
		print_err("Usage: cp file_from file_to\n", NULL, 97);
	_cp(argv[1], argv[2]);

	return (0);
}
