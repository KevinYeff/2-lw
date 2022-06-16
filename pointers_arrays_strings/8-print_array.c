#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the n elements of an array of
 *               integer, followed by a new line.
 *                Numbers separated bycoma and space.
 *
 *@n: Number of elements of the array to be printed.
 *@a: Pointer.
 */

void print_array(int *a, int n)
/* *a points to array, n = number of elements of the array(5).*/
{
	int h;/* field */

	for (h = 0; h <= n; h++)/* fields containing array value starting
				  * in 0
				  */
	{
		printf("%d", a[h]);/* print array value in field */

		if (h != (n - 1))
		{
			printf(",");/* only if field not equal to n-1
				      * 5 in this case
				      */
		}
		if (h < n)
		{
			printf(" ");
		}
	}
	printf("\n");
}
