#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number inputed
 * @index: index of bit starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int k = 1;

	if (index >= 32)
		return (-1);

	k <<= index;
	(*n) += k;
	return (1);
}
