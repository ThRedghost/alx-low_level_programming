#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a intialise ofstruct
 * @d : struct name
 * @name : name of the dog
 * @age : age
 * @owner : owner
 * Return : nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
