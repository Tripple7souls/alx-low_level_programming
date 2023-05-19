#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
*/

int main(void)
{
	int hexadecimal;

	for (hexadecimal = 48; hexadecimal <= 57; hexadecimal++)
		putchar(hexadecimal);
	for (hexadecimal = 97; hexadecimal <= 102; hexadecimal++)
		putchar(hexadecimal);
	putchar('\n');

	return (0);
}
