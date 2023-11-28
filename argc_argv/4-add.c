#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *main - print positive numbers
 *@argc: int
 *@argv: pointer to an array
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	int n = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		n = n + (atoi(argv[argc]));
	}
	printf("%d\n", n);
	return (0);
}
