#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Function that prints anything
 * @format: The list of types of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list vl;
	int i;
	char c;
	char *string;

	i = 0;
	va_start(vl, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = (char) va_arg(vl, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(vl, int));
				break;
			case 'f':
				printf("%f", va_arg(vl, double));
				break;
			case 's':
				string = va_arg(vl, char *);
				if (string == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", string);
				}
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vl);
}
