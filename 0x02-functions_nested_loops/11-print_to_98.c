#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98 followed by a new line
 * @x: Input integer
 * Return: Nothing
 */

void print_to_98(int x)
{
	if (x <= 98)
	{
		for (; x <= 98; x++)
		{
			printf("%d", x);

			if (x == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; x >= 98; x--)
		{
			printf("%d", x);

			if (x == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
