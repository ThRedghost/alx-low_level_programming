#ifndef DOG_H
#define DOG_H

#define dog_t struct dog

/**
 * struct dog - struct for dog
 * @name : the name
 * @age : age
 * @owner : owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

