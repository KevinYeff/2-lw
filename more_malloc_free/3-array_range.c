#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function that creates an array of integers.
 *
 * @min: ...
 * @max: ...
 *
 * Return: A pointer to a newly created array.
 */

int *array_range(int min, int max)
{
	int *newarray;
	int h, length = max - min + 1;

	if (min > max)
		return (NULL);

	newarray = malloc(sizeof(int) * length);

	if (!newarray)
		return (NULL);

	for (h = 0; min <= max; h++)
	{
		newarray[h] = min;
		min++;
	}
	return (newarray);
}
