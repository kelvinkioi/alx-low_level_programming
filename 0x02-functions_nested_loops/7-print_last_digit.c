#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n: integer
  *
  * Return: Value of the last digit
  */
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		x = x * -1;
	}

	_putchar(x + '0');

	return (x);
}
