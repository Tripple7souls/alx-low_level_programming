#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment which consist only of bytes from accept
 * @accept: prefix substring
 * Return: lenght of a prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lenght = 0;
	int right = 1;

	while (*s != '\0' && right)
	{
		right = 0;
		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				right = 1;
				break;
			}
		}
		if (right)
		{
			lenght++;
		}
		s++;
	}
	return (lenght);
}
