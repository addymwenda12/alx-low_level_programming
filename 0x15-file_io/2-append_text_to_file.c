#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Appends text to the end of the file
 * @filename: The name of the file to apppend to
 * @text_content: The text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}

		written = write(fd, text_content, len);
		if (written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
