#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ should print
 * the diagonal should end with a \n
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int x = 0, y;

	if (n > 0)
	{
		for (; x < n; x++)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
