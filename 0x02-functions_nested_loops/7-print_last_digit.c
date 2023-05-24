#include <stdio.h>
#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @n: Interger
 * Return: 0
*/

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	printf("%d", m);

	return (0);
}
