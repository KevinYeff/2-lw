#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates 2 strings.
 *
 * @s1: Pointer to string "Best ".
 * @s2: Pointer to string "School"
 *
 * Return: Returns pointer to a mew allocate space wich contains the contents
 *         of s1, s2 and null terminated.
 */

char *str_concat(char *s1, char *s2)
{
	char *memspace;
	int h, k;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	for (h = 0; s1[h] != '\0'; h++)
	{}
	for (k = 0; s2[k] != '\0'; k++)
	{}
	memspace = malloc((sizeof(char) * h) + (sizeof(char) * k) + 1);
	if (memspace == 0)
	{
		return (NULL);
	}
	for (h = 0; s1[h] != '\0'; h++)
	{
		memspace[h] = s1[h];
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		memspace[h] = s2[k];
		h++;
	}
	memspace[h] = '\0';
	return (memspace);
}
