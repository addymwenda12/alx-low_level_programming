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
		else if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + (s[i] - '0');
		else if (result > 0)
			break;
		}
		i++;
	}
	return (result * sign);
}
