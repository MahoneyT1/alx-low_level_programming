#include "main.h"

/**
 * _puts_recursion - Function that prints a string, by new line
 * @s: strings to print
 *
 * Return: always (0) success
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + i);
	}
	_putchar('\0');
}
