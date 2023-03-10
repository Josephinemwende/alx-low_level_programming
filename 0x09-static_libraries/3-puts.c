#include <stdio.h>
#include "main.h"

/**
 * _puts - the function prints a string, followed by a new line to stdout
 * @str: string
 * Return: Nothing
 */

void _puts(char *s)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
