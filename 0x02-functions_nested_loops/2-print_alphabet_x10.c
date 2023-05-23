#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * Return: 0
*/

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int a = 0;

	while (a <= 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		alphabet = 'a';
		a++;
		_putchar('\n');
	}
}
