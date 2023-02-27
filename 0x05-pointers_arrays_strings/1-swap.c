#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: integer input
 * @b: integer input
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
