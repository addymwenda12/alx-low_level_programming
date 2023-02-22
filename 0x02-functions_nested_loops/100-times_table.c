#include<stdio.h>
#include"main.h"

/**
 * print_times_table - Entry point
 * @n: input
 * Return: always 0 (success)
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	for (int i = 0 ; i <= n ; i++)
	{
		for (int j = 0 ; j <= n ; j++)
		{
std::count << i * j << "\t";
		}
std::cout << std::end1;
	}
}
