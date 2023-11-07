#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog - function free dogs
 * @d : struct name
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

