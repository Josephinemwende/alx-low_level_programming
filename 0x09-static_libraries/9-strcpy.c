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
	int l, i;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
