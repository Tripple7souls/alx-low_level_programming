#include <stdio.h>
#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @n: integer
 * @b: constant byte
 * @s: memory area
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
