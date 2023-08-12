#include <stdio.h>


/**
 * main - A program that print the alphabet on lowercase and upper case
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
	if (alphabet != 'e' && alphabet != 'q')
	putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
