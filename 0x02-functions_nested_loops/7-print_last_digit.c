#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @n: Interger
 * Return: m (value of last digit)
*/

int print_last_digit(int n)
{
	int m;

	m = abs(n) % 10;
	_putchar('0' + m);

	return (m);
}
