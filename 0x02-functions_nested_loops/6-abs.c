#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 *_abs - computes the absolute value of an integer
 *
 * Return: the absolute value of int
 *
 */
int _abs(int n)
{
	int n;

	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
