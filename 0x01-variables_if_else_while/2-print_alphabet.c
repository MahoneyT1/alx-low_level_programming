#include <stdio.h>
/**
 * main - print alphabets in lower case a to z
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
