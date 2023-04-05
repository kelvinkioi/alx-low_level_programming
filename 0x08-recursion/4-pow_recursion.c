#include "main.h"
/**
 * _pow_recursion - function that returns the
 * value of x raised to the power of y
 * @x: integer to be raised
 * @y: power to be used
 * Return: result of the code
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
