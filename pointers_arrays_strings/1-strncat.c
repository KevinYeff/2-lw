#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenate n bytes from source to dest.
 *
 * @dest: Destination string.
 * @src: Source string does not need to be null-terminated.
 * @n: Number of bytes from src.
 *
 * Return: Destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int h, k;

	for (h = 0; dest[h] != 0; h++)
	{}
	for (k = 0; k < n; k++)
	{
		dest[h] = src[k];
		h++;
	}
	return (dest);
}
