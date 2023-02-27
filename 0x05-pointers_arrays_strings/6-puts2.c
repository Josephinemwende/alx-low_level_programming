#include <stdio.h>
#include "main.h"

/**
 * puts2 - the function prints every other character of a string
 * starting with the first character followed by a new line
 * @str: string
 * Return: Nothing
 */

void puts2(char *str)
{
	int x = 0, y = 1;

	while (str[x] != '\0')
		x++;

	x -= 1;

	for (; y <= x; y += 2)
		_putchar(str[y]);
	_putchar('\n');
}
