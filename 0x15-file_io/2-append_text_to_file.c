#include "main.h"
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text to a file
 *
 * @filename: name of the file to read
 * @text_content: content to add to file
 *
 * Return: returns 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (((int) wr) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
