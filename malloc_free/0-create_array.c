#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars, and initializes it with a specif
 *                char.
 *
 * @size: size of the array
 * @c: char
 *
 * Return: Pointer to array or '\n'
 */
char *create_array(unsigned int size, char c)
{
	unsigned int h;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < size; h++)
	{
		p[h] = c;
	}
	return (p);
}
