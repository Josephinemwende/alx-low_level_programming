#include <stdio.h>
#include "main.h"

/**
 * print_array - the function prints n elements of an array of integers
 * folowed by a new line
 * @n: number of elements of the array to be printed
 * numbers must be separated by comma followed by a space
 * numbers should be displayed in the same order
 * as they are stored in the array
 * @a: input
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
	printf("\n");
}
