#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter on
 *                  each element of ana array.
 *
 * @array: Array to iterate.
 * @size: Size of the array.
 * @action: Execute a function using a pointer.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		i = 0;

		for (; i < size; i++)
			action(array[i]);
	}
	else
		return;
}
