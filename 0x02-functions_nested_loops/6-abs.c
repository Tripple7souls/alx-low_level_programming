#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @int: integer
 * Return: 0
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
