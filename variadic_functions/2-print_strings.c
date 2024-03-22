#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: cost character
 * @n: const unsigned integer
 * Return: Always (success)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list liste;
    unsigned int a;
    char *s;

    va_start(liste, n);

    for(a = 0; a < n; a++)
    {
        s = va_arg(liste, char *);

        if (s == NULL)
        printf("(nil)");

        else
        printf("%s", s);
        
        if (a != (n - 1) && separator != NULL)
        printf("%s", separator);
    }
    printf("\n");

    va_end(liste);
}