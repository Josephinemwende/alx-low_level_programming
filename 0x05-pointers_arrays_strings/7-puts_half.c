#include <stdio.h>
#include "main.h"

/**
 * puts_half - the functio prints the second half of the string
 * if the numbers of characters is odd the function
 * should print the n characters of the string
 * @str: input string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int length = 0, x, y;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		x = length / 2;
	else
		x = (length + 1) / 2;
	for (y = x; y < length; y++)
		_putchar(str[y]);
	_putchar('\n');
}
