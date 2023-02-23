#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int x = '0';

	for (; x <= '9'; x++)
		_putchar(x);
	_putchar('\n');
}
