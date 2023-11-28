#include <stdio.h>
#include <main.h>
#include <stdlib.h>

/**
 *main - check the code
 * @argv: char
 * @argc: int
 * Return : 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
