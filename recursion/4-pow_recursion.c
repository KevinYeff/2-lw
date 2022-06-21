#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to
 *                  the power of y.
 *
 * @x: Number.
 * @y: Exponent.
 *
 * Return: If exponent is lower than 0, returns -1, otherwise
 *         returns value of number.
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
	else
	{
		return (1);
	}
}
