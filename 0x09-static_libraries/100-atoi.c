#include <stdio.h>
#include "main.h"

/**
 * _atoi - the function converts string to intege
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned int y = 0;
	char z = 0;

	while (*s)
	{
		if (*s == '-')
			x *= -1;

		if (*s >= '0' && *s <= '9')
		{
			z = 1;
			y = y * 10 + *s - '0';
		}

		else if (z)
			break;
		s++;
	}

	if (x < 0)
		y = (-y);

	return (y);
}
