#include <stdio.h>
#include "main.h"

/**
 * rev_string - the function reverses a string
 * @s: string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int length  = 0, x = 0;
	char c;

	while (s[length] != '\0')
		length++;
	while (x < length--)
	{
		c = s[x];
		s[x++] = s[length];
		s[length] = c;
	}
}
