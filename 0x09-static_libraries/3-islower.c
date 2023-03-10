#include <stdio.h>
#include "main.h"

/**
 * _islower - Check description
 * @c: An input character
 * description: checks for lowercase character
 * Return: 1 if c is lowercase
 * Return 0 otherwise
 */
int _islower(int c)
{
	char x;
	int y = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
			y = 1;
	}

	return (y);
}
