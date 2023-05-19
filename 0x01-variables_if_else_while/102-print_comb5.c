#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers
 *
 * Return: 0
*/

int main(void)
{
	int a, b, x, y;

	for (a = 48; a <= 57; a++)
		for (b = 48; b <= 56; b++)
			for (x = 48; x <= 57; x++)
				for (y = 49; y <= 57; y++)
					if (a == b && x == y)
					{
						continue;
					}
					else
					{
						putchar (a);
						putchar (b);
						putchar (' ');
						putchar (x);
						putchar (y);
						putchar (',');
						putchar (' ');
					}
	putchar ('\n');

	return (0);
}
