#include <stdio.h>
#include "main.h"

/**
 * _isalpha -  Check for alphabetic character
 * @c: input character
 * Description: function returns 1 if c is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */

int _isalpha(int c)
{
	char lowercase, uppercase;
	int letter = 0;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		{
			if (c == lowercase || c == uppercase)
				letter = 1;
		}
	}
	return (letter);
}
