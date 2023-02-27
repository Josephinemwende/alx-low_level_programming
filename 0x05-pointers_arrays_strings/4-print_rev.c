#include <stdio.h>
#include "main.h"

/**
 * print_rev - the function prints a string in reverse followed by a new line
 * @s: string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	while (x)
		_putchar(s[--x]);

	_putchar('\n');
}
