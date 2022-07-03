#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * *new_dog - Function that creates a new dog.
 *
 * @name: New dog name.
 * @age: Age of the dog.
 * @owner: Dog owner name.
 *
 * Return: NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdata;
	int namelen, ownerlen;

	namelen = _strlen(name) + 1;
	ownerlen = _strlen(owner) + 1;
	newdata = malloc(sizeof(dog_t));

	if (newdata == NULL)
	{
		return (NULL);
	}

	newdata->name = malloc(sizeof(char) + namelen);

	if (newdata->name == NULL)
	{
		free(newdata);
		return (NULL);
	}

	newdata->owner = malloc(sizeof(char) + ownerlen);

	if (newdata->owner == NULL)
	{
		free(newdata->name);
		free(newdata);
		return (NULL);
	}

	newdata->name = _strcpy(newdata->name, name);
	newdata->owner = _strcpy(newdata->owner, owner);
	newdata->age = age;

	return (newdata);
}


/**
 * _strlen - Fuction that returns the lengh of a string.
 *
 * @s: Pointer type char.
 *
 * Return: Lengh of the string.
 */

int _strlen(char *s)
{
	int h;

	for (h = 0; *s != '\0'; h++)
	{
		s++;
	}
	return (h);
}


/**
 * _strcpy - Copies the string pointed to by src
 *           including the terminating null byte (\0).
 * @dest:  Detiny.
 * @src:   Source.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
