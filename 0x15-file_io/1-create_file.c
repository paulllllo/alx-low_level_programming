#include "main.h"
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - Creates a file
 *
 * @filename: name of the file to read
 * @text_content: content to add to file
 *
 * Return: returns 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		wr = write(fd, text_content, strlen(text_content));
	}
	else
	{
		wr = write(fd, "", strlen(""));
	}
	close(fd);
	if (wr == 0 || wr > 0)
		return (1);
	else
		return (-1);
}
