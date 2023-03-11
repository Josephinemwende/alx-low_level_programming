#include <stdio.h>
#include "main.h"

/**
 * _puts - the function prints a string, followed by a new line to stdout
 * @s: string
 * Return: Nothing
 */

void _puts(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		_putchar(s[x]);
		x++;
	}
	_putchar('\n');
}
