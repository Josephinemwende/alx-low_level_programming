#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: Input
 * Return: Absolute value of int
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
