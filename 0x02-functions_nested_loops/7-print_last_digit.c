#include "main.h"

/**
 * print_last_digit - prints last digit of a num
 * @n: the number to be checked
 *
 * Return: value of the last digit of  number
 */

int print_last_digit(int n)
{
	int last_n;

	last_n = n % 10;
	if (last_n < 0)
	{
	last_n = last_n * -1;
	}
	_putchar(last_n + '0');
	return (last_n);
}
