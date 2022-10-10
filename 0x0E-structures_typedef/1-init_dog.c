#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes a variable
 * @d: Variable type
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
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
