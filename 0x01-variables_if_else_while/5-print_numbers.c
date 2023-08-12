#include <stdio.h>
/**
 * main - print numbers of base ten
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char base_tenn = '0';

	while (base_tenn <= '9')
	{
		putchar(base_tenn);
		base_tenn++;
	}
	putchar('\n');
	return (0);
}
