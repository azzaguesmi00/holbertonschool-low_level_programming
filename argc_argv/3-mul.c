#include "main.h"
#include <stdio.h>

/**
 * main- check the code
 * @argv: char
 * @argc: int
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		res = atoi(argv[1]) * atoi (argv[2])
		printf("%d\n", res);
	}
	else{
		printf ("Error\n");
		return (1);
	}
	return (0);
}
