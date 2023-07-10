#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * print_error - Prints an error message to stderr
 * @message: The error message to print
 */

void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * exit_with_error - Prints an error message and exits with a specified code
 * @code: The exit code
 * @message: The error message to print
 */

void exit_with_error(int code, const char *message)
{
	print_error(message);
	exit(code);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, or error codes on failure
 */

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to");
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		exit_with_error(98, "Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		exit_with_error(99, "Can't write to file");
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			exit_with_error(99, "Can't write to file");
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		exit_with_error(98, "Can't read from file");
	}
	if (close(fd_from) == -1)
		exit_with_error(100, "Can't close fd");
	if (close(fd_to) == -1)
		exit_with_error(100, "Can't close fd");

	return (0);
}
