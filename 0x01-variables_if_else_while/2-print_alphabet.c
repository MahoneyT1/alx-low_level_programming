#include <stdio.h>
/**
 * main - print alphabets in lower case 
 *
 * Return: always 0 (success)
 *
 */
int main (void)
{
	char one = 'a';

	while (one <= 'z')
	{
		putchar(one);
		one++;
	}
	putchar("\n");
	return (0);
