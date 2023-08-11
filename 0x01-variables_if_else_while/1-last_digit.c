#include <stdio.h>
#include <stdlib>
#include <time.h>

/**
 * main - Enty point
 *
 * Return: Always 0 (success)
 *
 */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int result = n % 10;

	if (result > 5)
		printf("Last digit of n is %d and is greater 5\n", result);
	else if (result == 0)
		printf("Last digit of n is %d and is 0\n", result);
	else if (result < 6 && result != 0)
		printf("Last digit of is n  and is less than %d  and not 0\n", result);
	return (0);
}
