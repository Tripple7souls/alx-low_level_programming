#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * set_string - sets the value of a pointer to a char.
 * @s: character
 * @to: string
 * Return: 0
*/

void set_string(char **s, char *to)
{
	int length = strlen(to);

	*s = (char *)malloc((length + 1) * sizeof(char));
	strcpy(*s, to);
}
