#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers, from 0 to 9, followed by a new line.
 *
 *
*/

void print_most_numbers(void)
{
	int alphabet;

	for (alphabet = 48; alphabet <= 57; alphabet++)
	{
		if ((alphabet == 50) | (alphabet == 52))
		{
			continue;
		}
		else
		{
			_putchar(alphabet);
		}
	}
	_putchar('\n');
}
