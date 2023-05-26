#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: 0
*/

void print_numbers(void)
{
	int alphabet;

	for (alphabet = 48; alphabet <= 57; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
