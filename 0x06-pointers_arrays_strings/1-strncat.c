#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return:  pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		for (b = 0; b < n && src[b] != '\0'; b++, a++)
		{
			dest[a] = src[b];
		}
	dest[b] = '\0';

	return (dest);
}

