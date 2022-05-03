#include "main.h"

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}

/**
 * create_file - creates a file
 * @filename: filename to be printed
 * @text_content: content of the file
 *
 * Return: 1 on Success, -1 on failure (file cannot be created,
 * file cannot be written, write "fails", etc...)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, i = 0;
	size_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = _strlen(text_content);
		i = write(fd, text_content, len);
		if (i == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
