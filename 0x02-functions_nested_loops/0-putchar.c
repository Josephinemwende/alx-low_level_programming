#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes the character x to standard ouput
 * @x: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
