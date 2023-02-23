#include <stdio.h>
#include "main.h"
void print_integer(int x);

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - prints n
 * @x: input
 * Return: Nothing
 */

void print_integer(int x)
{
	int a = 1000000000;

	for (; a >= 1; a /= 10)
		if (x / a != 0)
		{
			_putchar((x / a) % 10 + '0');
		}
}
