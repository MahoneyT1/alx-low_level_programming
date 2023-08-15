#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10
 *
 * Return:void
 */

void print_alphabet_x10(void)
{
char f;
int i = 0;

while (i < 10)
{
for (f = 'a'; f <= 'z'; f++)
{
_putchar(f);
}
_putchar('\n');
i++;
}
}
