#include <stdio.h>
#include "main.h"

/**
 * _strcpy - the function copies the string pointed to by src
 * including the terminating null byte to the buffer
 * pointed to by dest
 * @dest: pointer to destination of the string
 * @src: pointer to source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	while (*src)
		*dest++ = *src++;
	return (x);
}
