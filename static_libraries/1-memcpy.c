#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 *
 * @dest: Memory area.
 * @src: Source memory.
 * @n: Bytes from src memory area.
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n;  h++)
	{
		dest[h] = src[h];
	}
	return (dest);
}
