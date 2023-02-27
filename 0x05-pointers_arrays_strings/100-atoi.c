#include"main.h"
#include<string.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted to an integer
 *
 * Return: integer value of the string
 */

int _atoi(char *s)
{
	int sign = 1, num = 0, i = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	return (num * sign);
}
