#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @x: Input
 * Return: Absolute value of int
 */

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
