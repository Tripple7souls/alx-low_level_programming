#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
*/

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
		for (b = a + 1; b <= 9; b++)
			if (a == 0)
		{
			putchar('0' + a);
		}
			putchar('0' + b);
			count++;
			if (count < 45)
			{
			putchar(',');
			putchar(' ');
			}
	putchar('\n');

	return (0);
}
