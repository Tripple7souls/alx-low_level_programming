#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment which consist only of bytes from accept
 * @accept: prefix substring
 * Return: lenght of a prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
			{
			length++;
			s++;
			}
	return (length);
}
