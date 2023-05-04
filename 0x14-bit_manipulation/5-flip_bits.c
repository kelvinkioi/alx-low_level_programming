#include "main.h"

/**
 * flip_bits -  function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: positive integer number
 * @m: positive integer number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int k = (n ^ m);

	for (; k > 0; count++)
	{
		k &= (k - 1);
	}
	return (count);
}
