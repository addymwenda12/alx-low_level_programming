#include "main.h"

/**
* helper - Finds the square root of two numbers
*
* @a: The number
* @b: The number to test for the square root of @a
*
* Return: square root
*/

int helper(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (helper(a, b + 1));

	return (1);
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: The number to return the square root of
*
* Return: The natural square root of the number
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (helper(n, 1));
}
}
