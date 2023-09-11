#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes dog
 * @d: pointer to dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
