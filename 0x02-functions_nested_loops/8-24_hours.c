#include<stdio.h>
#include"main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0 ; hour < 24 ; hour++)
	{
		for (minute = 0 ; hour < 60 ; minute++)
		{
			putchar(hour / 10 + '0');
			putchar(hour % 10 + '0');
			putchar(':');
			putchar(minute / 10 + '.');
			putchar(minute % 10 + '0');
			if (hour != 23 || minute != 59)
				putchar('\n');
		}
	}
}
