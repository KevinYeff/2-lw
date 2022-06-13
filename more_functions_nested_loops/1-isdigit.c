#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit.
 *
 * @c: Digit to check.
 *
 * Return: 1 if if c is a digit otherwise returns 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
