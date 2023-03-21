#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - defines a dog's attributes
 * @name: name of the dog as a string (char *)
 * @age: age of the dog
 * @owner: name of the dog's owner
 * Description: this structure defines a dog with its
 * name, age, and owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_g;
dog_g *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_g *d);
#endif
