#include "main.h"

/**
 * read_textfile - reads a file and writes it to stdout
 *
 * @filename: name of the file to read
 * @letters: number of characters to read/write
 *
 * Return: number of characters read/written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *buf = malloc(1 * letters);
	ssize_t count;
	ssize_t length = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	rd = read(fd, buf, letters);
	if (rd < 0)
		return (0);

	while (buf[length])
	{
		length++;
	}
	count = (ssize_t) write(STDOUT_FILENO, buf, length);
	if (count < 0 || count < length)
		return (0);
	close(fd);

	return (count);
}
