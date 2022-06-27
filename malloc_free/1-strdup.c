#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - Function that returns a pointer to a newly allocated space in
 *            memory, witch contains a copy of the string given as a parameter.
 *
 * @str: Duplicated string.
 *
 * Return: NULL if str is NULL, returns a pointer to the duplicated string on
 *         success, it also returns NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *s2;
	int h, k;

	if (str == NULL)
	{
		return (NULL);
	}

	for (h = 0; str[h] != '\0'; h++)
	{
		k++;
	}
	k += 1;

	s2 = malloc(k * sizeof(char));

	if (s2 == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < str[h]; h++)
	{
		s2[h] = str[h];
	}
	return (s2);
}