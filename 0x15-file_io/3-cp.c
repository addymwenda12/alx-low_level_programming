#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 on success, or error code
 */

int main(int argc, char *argv[])
{
	int fd_to, fd_from, read_count, write_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* Truncate or create file_to for writing */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	/* Copy file_from to file_to */
	while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	/* Check for read error */
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	/* Close file descriptors */
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				fd_to);
		exit(100);
	}
	return (0);
}
