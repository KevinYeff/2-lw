#include "main.h"

/**
 * _isupper - Function that checks for an uppercase character.
 *
 * @c: Is the integer to check.
 *
 * Return: 1 if character us uppercase otherwise returns 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
