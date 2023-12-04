#include "3-calc.h"
/**
 * op_sub - sub numbers
 * @a: int
 * @b: int
 * Return: sum of a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_add - add numbers
 * @a: int
 * @b: int
 * Return: sum of a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_mul - mul numbers
 * @a: int
 * @b: int
 * Return: sum of a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div numbers
 * @a: int
 * @b: int
 * Return: sum of a/b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod numbers
 * @a: int
 * @b: int
 * Return: sum of a%b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
