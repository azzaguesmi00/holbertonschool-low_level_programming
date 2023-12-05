#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: char
 * @n: int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%c", strings(va_arg(ptr, char)));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");

/**
 * strings - return string
 * @s: char
 * Return: char
 */
char *strings(char *s)
{
	char *x = "(nil)";

	if (s == NULL)
	{
		return (x);
	}
	return (s);
}

