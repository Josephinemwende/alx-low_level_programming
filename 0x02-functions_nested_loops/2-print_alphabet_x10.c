#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check  description
 * description: it prints 10 times the alphabet in lower case
 * followed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char letters;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
	_putchar('\n');
	}
}
