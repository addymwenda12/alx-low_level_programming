#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the address to initialize
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
