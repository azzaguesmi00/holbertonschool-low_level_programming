#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - gives the sum of all operators
 * @n: unsigned int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x = 0;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		x += va_arg(ptr, int);

	va_end(ptr);

	return (x);
}
