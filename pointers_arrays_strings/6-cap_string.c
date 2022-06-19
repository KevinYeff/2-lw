#include "main.h"
/**
 * cap_string - Capitalizes all the words of a string-
 *
 * @n: string.
 *
 * Return: n.
 */

char *cap_string(char *n)
{
	int i, k;

	int temp = 32;
	int sep[12] = {',', ';', '.', '?', '"',
		       '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - temp;
		}

		temp = 0;

		for (k = 0; k <= 12; k++)
		{
			if (n[i] == sep[k])
			{
				temp = 32;
				break;
			}
		}
	}
	return (n);
}
