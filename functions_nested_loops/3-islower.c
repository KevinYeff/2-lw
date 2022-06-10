#include "main.h"

/**
 * _islower - Checks for lower case character.
 * @c: Characterto be tested.
 * Return: 1 if chracter is lowercase otherwise returns 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
