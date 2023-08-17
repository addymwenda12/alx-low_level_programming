#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: The input number
 *
 * Return: -1 if n is less than 0 and 0 is 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
