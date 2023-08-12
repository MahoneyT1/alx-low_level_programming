#include <stdio.h>


/**
 * main - prints all the numbers of base 16 in lowercase alphabet
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num1;
	char lett;

	for (num1 = 0; num1 < 10; num1++)
		putchar((num1 % 10) + '0');

	for (lett = 'a'; lett <= 'f'; lett++)
		putchar(lett);

	putchar('\n');
	return (0);
}
