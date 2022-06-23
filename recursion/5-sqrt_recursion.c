#include "main.h"
/**
 * rootscan - Will check if n has a natural square root.
 *
 * @n: Number to compare its power to the number.
 * @h: Iterate number.
 *
 * Return: Square root of number.
 */

int rootscan(int n, int h)
{
	if (h * h == n)
	{
		return (h);
	}
	if (h * h > n)
	{
		return (-1);
	}
	return (rootscan(n, h + 1));
}


#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 *
 * @n: Number.
 *
 * Return: The square root of n; -1 if n does not have natural square natural
 *         number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (rootscan(n, 1));
	}
}
