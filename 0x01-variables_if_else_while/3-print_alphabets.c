#include <stdio.h>

/**
 * main - prints out the alphabets in lowercase, and then in uppercase.
 *
 * Return: 0
*/

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}
	{
		putchar('\n');
	}
	return (0);
}
