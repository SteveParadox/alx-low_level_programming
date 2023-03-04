#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog struct
 * @d: struct pointer
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
