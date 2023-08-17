#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer containing the structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
