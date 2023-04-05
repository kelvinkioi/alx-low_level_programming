#include "main.h"
/**
 * s_root - helps find the natural square root of a number
 * @n: integer
 * @i: integer
 * Return: -1 if there is no natural squareroot number
 * otherwise returns the natural squareroot of number
 */
int s_root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (s_root(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * Return: -1 if there is no natural squareroot number
 * otherwise returns the natural squareroot of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (s_root(n, 1));
}
