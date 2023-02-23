#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: input
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	char x = '0';
	int digit = 0;

	for (; x <= '9'; x++)
	{
		if (x == c)
		{
			digit = 1;
			break;
		}
	}
	return (digit);
}
