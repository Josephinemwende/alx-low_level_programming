#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbersfrom 0 to 9 except 2 and 4
 * followed by a new line
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int x = '0';

	for (; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}
	_putchar('\n');
}
