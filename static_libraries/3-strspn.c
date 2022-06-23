#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix
 *           substring.
 *
 * @s: String.
 * @accept: Source.
 *
 * Return: Number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int h;
	int k;
	unsigned int length;

	length = 0;

	for (h = 0; s[h] != '\0'; h++)
	{
		for (k = 0; accept[k] != '\0' && accept[k] != s[h]; k++)
		{}
		if (s[h] == accept[k])
			length++;
		if (accept[k] == '\0')
			return (length);
	}
	return (length);
}
