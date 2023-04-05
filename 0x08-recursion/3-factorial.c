#include "main.h"
/**
 * factorial - function that returns the factorial
 * of a given number
 * @n: integer
 * Return: Void
 */
int factorial(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		x = n * factorial(n - 1);
		return (x);
	}
}
