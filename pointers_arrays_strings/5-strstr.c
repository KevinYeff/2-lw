#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: Pointer.
 * @needle: Pointer.
 *
 * Return: A pointer to the beginning of a located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
