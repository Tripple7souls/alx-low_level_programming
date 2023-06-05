#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest++ = *src++;
	}
	return (dest);
}
