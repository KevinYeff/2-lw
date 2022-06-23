#include "main.h"

/**
 * _isalpha - Checks if c is a letter, lowecase or uppercase.
 * @c: Character to be tested.
 * Return: 1 if matches the check, otherwise returns 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
