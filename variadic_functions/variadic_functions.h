#ifndef VAR
#define VAR
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct print - struct type
 * @sym: type
 * @prt: print
*/
typedef struct print
{
	char *sym;
	void (*prt)(va_list liste);
} print_t;

#endif
