#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: pointer to the result dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
