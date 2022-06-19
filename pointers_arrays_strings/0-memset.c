#include "main.h"
/**
 * _memset - Fills n bytes of memory area pointed to by s with
 *           the constant byte b.
 *
 * @s: Pointer.
 * @b: Char variable.
 * @n: Unsigned char. N bytes to be filled.
 *
 * Return: The pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}
	return (s);
}
