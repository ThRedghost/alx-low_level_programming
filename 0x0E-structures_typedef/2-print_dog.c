#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function print element of struct
 * @d : struct name
 * Return : nothing
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name : (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);
	return (0);
}

