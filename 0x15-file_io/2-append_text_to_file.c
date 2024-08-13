#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * append_text_to_file - appends a text to a file
 * @filename: input
 * @text_content: input
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_written;
	size_t length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[length] != '\0')
	{
		length++;
	}
	num_written = write(fd, text_content, length);
	if (num_written == -1 || (size_t)num_written != length)
	{
		close(fd);
		return (-1);
	}
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
