#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * factorial -returns the factorial of a given number.
 * @n: int
 * Return: 0
 *
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}
