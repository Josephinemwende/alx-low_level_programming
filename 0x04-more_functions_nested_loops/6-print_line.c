#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character _ should be printed
 * the line should end with \n
 * Return: \n if n is 0 or less
 */

void print_line(int n)
{
	int x = 0;

	if (n > 0)
	{
		for (; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}
