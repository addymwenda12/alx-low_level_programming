#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUFFER_SIZE 1024

/**
 * Print_elf_header - prints the ELF header information
 * @ehdr: The ELF header structure
 */

void print_elf_header(Elf64_Ehdr *ehdr)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x ", ehdr->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
			ehdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
			ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
			"Unknown");

	printf("  Data:                              %s\n",
			ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			ehdr->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
			"Unknown");

	printf("  Version:                           %d\n", ehdr->e_ident
			[EI_VERSION]);

	printf("  OS/ABI:                            %s\n",
				ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
				ehdr->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "UNIX - HP-UX" :
				ehdr->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
				ehdr->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - GNU" :
				ehdr->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" :
				ehdr->e_ident[EI_OSABI] == ELFOSABI_IRIX ? "UNIX - IRIX" :
				ehdr->e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "UNIX - FreeBSD" :
				ehdr->e_ident[EI_OSABI] == ELFOSABI_TRU64 ? "UNIX - TRU64" :
				ehdr->e_ident[EI_OSABI] == ELFOSABI_ARM ? "UNIX - ARM" :
				ehdr->e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Standalone App" :
				"Unknown");

	printf("  ABI Version:                       %d\n", ehdr->e_ident
			[EI_ABIVERSION]);

	printf("  Type:                              %s\n",
			ehdr->e_type == ET_NONE ? "NONE (None)" :
			ehdr->e_type == ET_REL ? "REL (Relocatable file)" :
			ehdr->e_type == ET_EXEC ? "EXEC (Executable file)" :
			ehdr->e_type == ET_DYN ? "DYN (Shared object file)" :
			ehdr->e_type == ET_CORE ? "CORE (Core file)" :
			"Unknown");

	printf("  Entry point address:               0x%lx\n", ehdr->e_entry);

	printf("  Start of program headers:          %lu (bytes into file)\n",
			ehdr->e_phoff);

	printf("  Start of section headers:          %lu (bytes into file)\n",
			ehdr->e_shoff);

	printf("  Flags:                             0x%x\n", ehdr->e_flags);

	printf("  Size of this header:               %u (bytes)\n",
			ehdr->e_ehsize);

	printf("  Size of program headers:           %u (bytes)\n",
			ehdr->e_phentsize);

	printf("  Number of program headers:         %u\n", ehdr->e_phnum);

	printf("  Size of section headers:           %u (bytes)\n",
			ehdr->e_shentsize);

	printf("  Number of section headers:         %u\n", ehdr->e_shnum);

	printf("  Section header string table index: %u\n", ehdr->e_shstrndx);
}

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	int fd, n;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, "Error: Cannot open file %s\n", argv[1]);
		return (98);
	}

	n = read(fd, &ehdr, sizeof(ehdr));
	if (n != sizeof(ehdr))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file %s\n", argv[1]);
		close(fd);
		return (98);
	}

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
			ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: File %s is not an ELF file\n", argv[1]);
		close(fd);
		return (98);
	}

	print_elf_header(&ehdr);

	close(fd);
	return (0);
}
