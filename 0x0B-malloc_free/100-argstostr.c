#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i;
	int total_length = 0;
	int index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	str = malloc(sizeof(char) * total_length);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(str + index, av[i]);
		index += strlen(av[i]);
		str[index++] = '\n';
	}
	if (str[index] == '\0')
	{
		str[index++] = '\n';
	}
	return (str);
}
