#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -  function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s_list;
	unsigned int i;
	char *s;

	va_start(s_list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(s_list, char *);

		if (s == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
		printf("%s", s);
		}

		if (separator && i < n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(s_list);
}

