#include "main.h"
/**
 * _islower - prints lowercase alphabet and returns 1
 *@c: parameter to be printed
 *
 * Return: 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
