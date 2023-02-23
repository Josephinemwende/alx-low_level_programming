#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: input character
 * Return: 1 if number is positive, 0 if number is 0, or
 * -1 if number is negative
 */

int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x  = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	else
	{
		x = -1;
		_putchar('-');
	}

	return (x);
}
