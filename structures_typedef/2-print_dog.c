#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function that prints a struct.
 *
 * @d: Pointer to a struct.
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		if (d->name == NULL)
			printf("Name: (nill)\n");
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age : %f\n", d->age);
		}
		if (d->owner == NULL)
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
	else
		return;
}
