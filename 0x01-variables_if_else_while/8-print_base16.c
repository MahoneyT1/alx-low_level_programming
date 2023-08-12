#include <stdio.h>
/**
 * main - prints hexadecimal numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
	char numbers_1 = '0';
	char letters_2 = 'a';

	while (numbers_1 <= '9')
	{
		putchar(numbers_1);
		numbers_1++;
	}
	while (letters_2 <= 'f')
	{
		putchar(letters_2);
		letters_2++;
	}
	putchar('\n');
	return (0);
}
