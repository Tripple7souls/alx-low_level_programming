#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * @int a, b: range
 *
*/

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("%2d, ", a * b);
		}
		printf("\n");
	}
}
