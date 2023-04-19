#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name -  function that prints a name
 * @name: name to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
