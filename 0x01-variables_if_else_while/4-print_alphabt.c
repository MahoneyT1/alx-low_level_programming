#include <stdio.h>
/**
 * main - print alhabets except q & e
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char alphabet_1 = 'a';

	while (alphabet_1 <= 'z')
	{
		if (alphabet_1 != 'q' && alphabet_1 != 'e')
		{
			putchar(alphabet_1);
		}
		alphabet_1++;
	}
	putchar('\n');
	return (0);
}
