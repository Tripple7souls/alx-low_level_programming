#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  _islower - checks for lowercase character
 * @c: cahracter
 * Return: 1 if lowercase character and 0 if not lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
