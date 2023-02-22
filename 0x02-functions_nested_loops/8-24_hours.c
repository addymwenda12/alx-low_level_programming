#include<stdio.h>
#include"main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i <= 1 && b <= 9) || (i <= 2 && j <= 3))
			{
				for (k = 0; k <= 5; k++)
				{
					for (l = 0; l <= 9; l++)
					{
						putchar(i + '0');
						putchar(j = '0');
						putchar(58);
						putchar(k + '0');
						putchar(l + '0');
						putchar('\n');
					}
				}
			}
		}
	}
}

