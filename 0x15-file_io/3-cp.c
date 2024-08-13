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
 * main - entry point
 * @argc: input
 * @argv: input
 *
 * Return: int
 */


int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_r, bytes_w;
	char buffer[BUFF_SIZE];

	if (argc != 3)
		print_err("Usage: cp file_from file_to\n", NULL, 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_err("Error: Can't read from file %s\n", argv[1], 98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		print_err("Error: Can't write to %s\n", argv[2], 99);
	}
	while ((bytes_r = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		bytes_w = write(fd_to, buffer, bytes_r);
		if (bytes_w == -1)
		{
			close(fd_from);
			close(fd_to);
			print_err("Error: Can't write to %s\n", argv[2], 99);
		}
	}
	if (bytes_r == -1)
	{
		close(fd_from);
		close(fd_to);
		print_err("Error: Can't read from file %s\n", argv[1], 98);
	}
	if (close(fd_from) == -1)
		print_err("Error: Can't close fd %d\n", NULL, 100);
	if (close(fd_to) == -1)
		print_err("Error: Can't close fd %d\n", NULL, 100);
	return (0);
}
