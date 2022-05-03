#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: buffer
 * @letters: number of characters
 *
 * return: Always 0.(Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = NULL;
	ssize_t i, j;
	int fd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters + 1);
	if (!buf)
		return (0);

	i = read(fd, buf, letters);
	if (i == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	buf[i] = '\0';

	j = write(STDOUT_FILENO, buf, i);
	if (j == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (j);
}
