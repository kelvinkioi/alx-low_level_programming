#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_all - function that prints anything
  * @format: list of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list ar;
	char *s, *separator;

	va_start(ar, format);

	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(ar, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ar, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ar, double));
				break;
			case 's':
				s = va_arg(ar, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(ar);
}
