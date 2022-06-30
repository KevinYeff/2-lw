#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Function that allocates memory for an array, using malloc.
 *
 * @nmemb: Number of elements.
 * @size: Siz of data type.
 *
 * Return: If nmem || size = 0 return NULL
 *         if malloc fails, function returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memspace;
	unsigned int length = nmemb * size, h;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memspace = malloc(length);

	if (memspace == 0)
		return (NULL);
	for (h = 0; h < length; h++)
		memspace[h] = 0;

	return (memspace);
}
