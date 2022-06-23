#include "main.h"

/**
 * _strncpy - Write a function that copies a string safe way.
 *
 * @dest: Destiny string.
 * @src: Source string.
 * @n: Number of elements that we want to copy to dest.
 *
 * Return: Dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h;

	for (h = 0; h < n && src[h] != '\0'; h++)
	{
		dest[h] = src[h];
	}
	for ( ; h < n; h++)
	{
		dest[h] = '\0';
	}
	return (dest);
}
