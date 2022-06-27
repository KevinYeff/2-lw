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
	char *s;
	int a, b;

	if (str == 0)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	a++;
	s = malloc(a * sizeof(*s));
	if (s == 0)
		return (NULL);
	for (b = 0; b < a; b++)
		s[b] = str[b];
	return (s);
}
