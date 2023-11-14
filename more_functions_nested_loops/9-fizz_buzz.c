#include <stdio.h>

/**
 * main- print from 0 to 100
 * Multiples of 3 print fizz
 * Multiples of 5 print buzz
 *
 * Return : 0
 */
int main(void)
{
	int i;
	for (i = 0; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("i%", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
