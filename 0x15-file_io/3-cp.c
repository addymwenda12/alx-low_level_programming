#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stddef.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024
/**
 * open_file_for_reading - Opens a file for reading
 * @filename: The name of the file to open
 *
 * Return: The file descriptor of the opened file
 */

int open_file_for_reading(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_file_for_writing - Opens a file for writing
 * @filename: The name of the file to open
 *
 * Return: The file descriptor of the opened file
 */

int open_file_for_writing(const char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}
/**
 * copy_file - Copies the contents of one file to another
 * @fd_from: The file descriptor of the file to copy from
 * @fd_to: The file descriptor of the file to copy to
 */

void copy_file(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	int bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_file - Closes a file descriptor
 * @fd: The file descriptor to close
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the contents of one file to another
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 *
 * Return: 0 on success, or a non-zero value on failure
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file_for_reading(argv[1]);
	fd_to = open_file_for_writing(argv[2]);
	copy_file(fd_from, fd_to);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
