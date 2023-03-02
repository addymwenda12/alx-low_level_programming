#include "main.h"
#include<stdio.h>
#include<ctype.h>
/**
 * print_buffer - function that prints a buffer
 * @b: Pointer to the buffer to be printed
 * @size: number of bytes to be printed from the buffer
 *
 * Return: prints the content of the buffer pointed to by @b
 * in a specific format
 * print_hex_prefix: Prints the position of the first byte of each line i
 * n hexadecimal (8 chars), starting with 0
 * print_hex_content: Prints the hexadecimal content of the buffer,
 * 2 bytes at a time, separated by a space
 * print_ascii_content: Prints the ASCII content of the buffer,
 * replacing non-printable characters with a '.'
 * print_buffer_line: Prints a single line of the buffer output,
 * using the above functions to format the output
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", (unsigned char)b[i + j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];

				if (isprint(c))
				{
					printf("%c", c);
				}
				else
				{
					printf(".");
				}
			}
		}

		printf("\n");
	}
}
