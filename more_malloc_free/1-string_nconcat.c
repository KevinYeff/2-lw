#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Function that concatenates two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 * @n : Number of characters to take from string number 2.
 *
 * Return: A pointer to a newly allocated spae in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcct;
	unsigned int length = n;
	unsigned int fields;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (fields = 0; s1[fields]; fields++)
		length++;

	strcct = malloc(sizeof(char) * (length + 1));

	if (strcct == NULL)
		return (NULL);

	length = 0;

	for (fields = 0; s1[fields]; fields++)
		strcct[length++] = s1[fields];

	for (fields = 0; s2[fields] && fields < n; fields++)
		strcct[length++] = s2[fields];

	strcct[length] = '\0';

	return (strcct);
}
