#include "main.h"

/**
 * swap_int -swaps the values of two integers.
 * @a:first integer to swap
 * @b:second iteger to swape
 */
void swap_int(int *a, int *b)

{
	int i = *a;
	*a = *b;
	*b = i;
}

