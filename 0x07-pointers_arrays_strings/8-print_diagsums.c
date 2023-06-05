#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals square matrix of ints
 * @a: integer
 * @size: size of matrix
 * return: 0
*/

void print_diagsums(int *a, int size)
{
	int add1 = 0;
	int add2 = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		add1 += a[i * size + 1];
		add2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", add1, add2);
}
