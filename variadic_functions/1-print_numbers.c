#include <stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers- prints numbers, followed by a new line
 * @separator: char
 * @n: unsigned int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x = 0;

	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
