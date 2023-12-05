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
	unsigned int i;

	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ptr, i));
		if (i != n - 1)
			printf("%s", separator);
		else
			printf("\n")
	}
	va_end(ptr);
}
