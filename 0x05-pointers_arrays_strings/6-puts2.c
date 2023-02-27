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
	int length = 0, x = 0;

	while (str[length] != '\0')
		length++;

	length -= 1;

	for (; x <= length; x += 2)
		_putchar(str[x]);
	_putchar('\n');
}
