#include <stdio.h>
/**
 * main - print alpha in caps and low case
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	char LowerC = 'a';
	char UpperC = 'A';

	while (LowerC <= 'z')
	{
		putchar(LowerC);
		LowerC++;
	}
	while (UpperC <= 'Z')
	{
		putchar(UpperC);
		UpperC++;
	}
	putchar('\n');
	return (0);
}
