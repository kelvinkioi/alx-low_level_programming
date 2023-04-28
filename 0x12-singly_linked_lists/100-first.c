#include <stdio.h>
/**
 * printer - A function that is executed before the main function
 * Return: Void
 */

void __attribute__ ((constructor)) printer()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
