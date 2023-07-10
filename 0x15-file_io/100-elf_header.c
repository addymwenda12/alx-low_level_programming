#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 * display_error - Prints an error message to stderr
 * @message: The error message to display
 */

void display_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(ERROR_EXIT_CODE);
}

/**
 * display_elf_header - Displays the information contained in ELF header
 * @filename: The path to the ELF file
 */

void display_elf_header(const char *filename)
{
	int fd;
	ssize_t bytes_read;

	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		display_error(strerror(errno));

	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr))
		display_error("Failed to read ELF header");

	close(fd);

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		display_error("Not an ELF file");

	printf("Magic:   %c%c%c\n", header.e_ident[EI_MAG1],
			header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("Class:   %d-bit\n", (header.e_ident[EI_CLASS]
				== ELFCLASS32) ? 32 : 64);
	printf("Data:    %s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:  %s\n", (header.e_ident[EI_OSABI] == ELFOSABI_SYSV)
			? "UNIX - System V" : "Other");
	printf("ABI Ver: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:    0x%04x\n", header.e_type);
	printf("Entry:   0x%lx\n", header.e_entry);
}

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of command-line arguments strings
 *
 * Return: 0 on success, 1 on incorrect usage
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	display_elf_header(argv[1]);

	return (0);
}
