#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2 dimencional
 *                array of integers.
 *
 * @width: size on x.
 * @height: size on y.
 *
 * Return: NULL if width or height are negative or 0.
 */

int **alloc_grid(int width, int height)
{
	int **arraypointer;
	int x, y;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arraypointer = malloc(sizeof(int *) * height);
	if (arraypointer == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		arraypointer[x] = malloc(sizeof(int) * width);
		if (arraypointer[x] == NULL)
		{
			for (--x; x >= 0; x++)
			{
				free(arraypointer[x]);
			}
			free(arraypointer);
			return (NULL);
		}

	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			arraypointer[x][y] = 0;
		}
	}
	return (arraypointer);
}
