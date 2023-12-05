#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: char
 * @n: int
 * Return: char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int counter;
	va_list p;
	va_start(p, n);
	for (counter = 0; counter < n; counter++)
	{
		printf(“%s”, va_arg(p(p, counter));
		if (counter != n — 1)
 			printf(“%s”, separator);
		else
 			printf(“\n”);
	}
	va_end(p);
}
