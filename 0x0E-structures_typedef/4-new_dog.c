#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creat new dog
 * @name : membre1
 * @age : membre2
 * @owner : membre3
 * description : creat new dog without destroying older
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_n, len_o;

	len_n = _strlen(name);
	len_o = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len_n + 1));
	if (dog->name == NULL)
		return (NULL);

	dog->owner = malloc(sizeof(char) * (len_o + 1));
	if (dog->owner == NULL)
		return (NULL);

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	dog->age = age;
	return (dog);
}

