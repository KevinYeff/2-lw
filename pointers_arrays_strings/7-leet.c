#include "main.h"

/**
 * leet - Function that encodes a string into 1337.
 *
 * @n: Input.
 *
 * Return: Should be 0.
 */

char *leet(char *n)
{
	int h, k;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (h = 0; n[h] != '\0'; h++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (n[h] == find[k])
			{
				n[h] = replacer[k / 2];
				k = 9;
			}
		}
	}
	return (n);
}
