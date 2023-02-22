#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - check description
 * description: It prints the alphabets in lower case
 * Return: Nothing
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
