#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: String.
 * @c: Character to find.
 *
 * Return: A pointer to the first ocurrence or
 *         NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	int h;

	for (h = 0; s[h] >= '\0'; h++)
	{
		if (s[h] == c)
		{
			return (s + h);
		}
	}
	return ('\0');
}
