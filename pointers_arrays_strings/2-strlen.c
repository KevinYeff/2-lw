#include "main.h"

/**
 * _strlen - Fuction that returns the lengh of a string.
 *
 * @s: Pointer type char.
 *
 * Return: Lengh of the string.
 */

int _strlen(char *s)
{
	int h;

	for (h = 0; *s != '\0'; h++)
	{
		s++;
	}
	return (h);
}
