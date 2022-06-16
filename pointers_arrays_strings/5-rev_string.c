#include "main.h"
#include <string.h>

/**
 * rev_string - Fuction that reverses a string.
 *
 * @s: the given string.
 */

void rev_string(char *s)
{
	int h, left, right, len;
	char temp;

	len = strlen(s);
	left = 0;
	right = len - 1;

	for (h = left; h < right; h++)
	{
		temp = s[h];
		s[h] = s[right];
		s[right] = temp;
		right--;
	}
}
