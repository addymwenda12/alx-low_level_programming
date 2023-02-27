#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));
	while (sum < 2772)
	{
		c = rand() % 128; /* generate a random ASCII character */
		if (sum + c > 2772) /* check if adding c would exceed the target sum */
			break;
		sum += c;
		printf("%c", c); /* print the character */
	}
	printf("%c\n", 2772 - sum);/* print the last character to get the exact sum */
	return (0);
}
