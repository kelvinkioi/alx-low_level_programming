#include "main.h"
/**
 * _isupper - checks if integer c is uppercase
 *@c: integer to be checked
 *
 * Return: 1 if c is uppercase 0 if othewise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
