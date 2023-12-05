#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC
#include <stdarg.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct om
{
	char op;
	void (*take)(va_list *);
} om_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
char *strings(char *s);

#endif
