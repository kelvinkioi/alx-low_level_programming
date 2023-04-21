#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments to be passed
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list ar;

	if (n == 0)
	{
		return (0);
	}

	va_start(ar, n);
	while (i < n)
	{
		sum += va_arg(ar, int);
		i++;
	}
	va_end(ar);
	return (sum);
}
