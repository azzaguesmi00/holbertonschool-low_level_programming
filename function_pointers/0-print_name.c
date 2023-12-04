#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -print a name using a funtion
 * @name: the name to print
 * @f: function pointer
 * Return:0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && F != NULL)
	{
		f(name);
	}
	return (0);
}
