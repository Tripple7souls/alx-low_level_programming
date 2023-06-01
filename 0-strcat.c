#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return:  pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t src_len = strlen(src);

	memcpy(dest + dest_len, src, src_len + 1);

	return (dest);
}
