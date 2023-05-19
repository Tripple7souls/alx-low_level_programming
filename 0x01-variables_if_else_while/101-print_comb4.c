#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0
*/

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 7; a++)
		for (b = a + 1; b <= 8; b++)
			for (c = b + 1; c <= 9; c++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				putchar(',');
				putchar(' ');
			}
	putchar('\n');

	return (0);
}
