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

	for (i = 0; i < argc)

	{
		printf("%s/n", argv[i]);
		i++;
	}

	return (0);
}
