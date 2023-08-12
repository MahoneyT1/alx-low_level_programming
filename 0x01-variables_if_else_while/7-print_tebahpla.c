#include <stdio.h>
/**
 * main - print alphabets in reverse mode
 *
 * Return: (0)
 *
 */
int main(void)
{
	char alphabets1 = 'z';

	while (alphabets1 >= 'a')
	{
		putchar(alphabets1);
		alphabets1--;
	}
		putchar('\n');
		return (0);
}
