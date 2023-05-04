#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a string containing binary characters
 *
 * Return: The converted number(unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
		{
			return (0);
		}
		result = 2 * result + (b[i] - 48);
	}
	return (result);
}

