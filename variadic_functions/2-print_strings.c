#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Check the code.
 * @n:  unsigned int
 * @separator: char pointer
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", strings(va_arg(arg, char *)));
		if ((separator != NULL) & (i < n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
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
