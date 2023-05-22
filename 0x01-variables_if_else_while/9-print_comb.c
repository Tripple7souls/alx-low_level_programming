#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
*/

int main(void)
{
	int number;

	for (number = 48; number <= 56; number++)
	{
		putchar(number);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
