#include <stdio.h>


/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char lett;

	for (lett = 'z'; lett >= 'a'; lett--)

	putchar(lett);

	putchar('\n');

	return (0);
}
