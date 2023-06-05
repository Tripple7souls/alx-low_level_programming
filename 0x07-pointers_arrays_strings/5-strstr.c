#include <stdio.h>
#include "main.h"

/**
 * _strstr -  locates a substring.
 * @haystack: string
 * @needle: substring
 * Return:  pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}

