#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

/**
 * create_file - Create a file and writes a string to it
 *
 * @filename: The name of the fle to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor = open(filename, O_CREAT | O_WRONLY |
			O_TRUNC, S_IRUSR | S_IWUSR);
	ssize_t n;

	if (filename == NULL)
		return (-1);

	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		n = write(file_descriptor, text_content,
				strlen(text_content));
		if (n == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
