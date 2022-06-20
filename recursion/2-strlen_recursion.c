#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string.
 *
 * @s: Pointer to a string.
 *
 * Return: Returns the length of the string in this case pointed by s.
 */

int _strlen_recursion(char *s)
{
	int h;

	h = 0;

	if (s[h] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(&(s[h + 1])));
	}
}
