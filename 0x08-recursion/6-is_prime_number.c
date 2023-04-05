#include "main.h"
/**
 * prime - function that helps us find the prime number
 * @x: integer
 * @i: integer
 * Return: 1 if prime 0 if  otherwiswe
 */
int prime(int x, int i)
{
	if (x == 2)
	{
		return (1);
	}
	else
	{
		if (x % i == 0)
		{
			return (0);
		}
		else if (i * i > x)
		{
			return (1);
		}
	}
	return (prime(x, i + 1));
}
/**
 * is_prime_number - function that checks if a number is prime
 * @n: integer
 * Return: 1 if prime 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
