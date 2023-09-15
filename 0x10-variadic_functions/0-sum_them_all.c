#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - veriadic function to calculate the sum of indefinite input
 *@ const unsigned int n - parameter to hold input
 *@n: The number of paramters passed to the function.
 *@...: A variable number of paramters to calculate the sum of.
 *
 * Return: return 0 if n is zero else 1 success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list unSeen;

		va_start(unSeen, n);

		for (i = 0; i < n ; i++)
		{
			result = result + va_arg(unSeen, int);
		}
		va_end(unSeen);
	}
	return (result);
}
