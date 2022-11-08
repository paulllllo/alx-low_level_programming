#include "main.h"
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - A program that copies content from a file to another
 *
 * @argc: number of arguements to program
 * @argv: array of all arguements to program
 *
 * Return: returns 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_to, fd_from, clz;
	size_t count = 0;
	ssize_t rd, wr;
	char *buf = malloc(1024);

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	rd = read(fd_from, buf, 1024);
	clz = close(fd_from);
	if (clz < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (fd_from < 0 || ((int) rd) < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (buf[count])
		count++;
	umask(0);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	wr = write(fd_to, buf, count);
	if (fd_to < 0 || ((int) wr) < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	clz = close(fd_to);
	if (clz < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
