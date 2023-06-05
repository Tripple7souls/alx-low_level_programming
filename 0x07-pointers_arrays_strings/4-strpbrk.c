#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: a pointer to the byte in s that matches
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
