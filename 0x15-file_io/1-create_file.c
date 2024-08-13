#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * create_file - creates a file
 * @filename: input
 * @text_content: input
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_w;
	size_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		num_w = write(fd, text_content, len);
		if (num_w == -1 || (size_t)num_w != len)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
