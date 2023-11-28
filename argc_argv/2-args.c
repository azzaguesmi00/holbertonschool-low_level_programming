#include <stdio.h>

/**
 *main - check the code
 * @argv: char
 * @argc: int
 * Return : 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc - 1);

	for (i = 0; i < argc; i++)
	{
		printf("%s/n", argv[i]);
	}
	if (i < argc - 1)
	{
		printf("\n");
	}

	return (0);
}
