#include <stdio.h>

int main()
{
	int intType;
	char c;
	long int s;
	long long int b;
	float f;

	printf("Size of a int: %zu byte(s)n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(s));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(b));
	printf("Size of a float: %zu byte(s)\n",sizeof (f));

	return(0);
}
