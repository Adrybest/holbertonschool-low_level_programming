#include "variadic_functions.h"

void print_char(va_list liste);
void print_int(va_list liste);
void print_float(va_list liste);
void print_string(va_list liste);
void print_all(const char * const format, ...);

/**
 * print_char - Print character.
 * @liste: The list for the character
*/
void print_char(va_list liste)
{
	char l;

	l = va_arg(liste, int);
	printf("%c", l);
}

/**
 * print_int - Print integer
 * @liste: The list for the integer
*/

void print_int(va_list liste)
{
	int n;

	n = va_arg(liste, int);
	printf("%d", n);
}

/**
 * print_float - Print floats
 * @liste: The list for the floats
*/

void print_float(va_list liste)
{
	float v;

	v = va_arg(liste, double);
	printf("%f", v);
}

/**
 * print_string - Print strings
 * @liste: The list for the strings
*/

void print_string(va_list liste)
{
	char *s;

	s = va_arg(liste, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - Print anything.
 * @format: const
*/
void print_all(const char * const format, ...)
{
	va_list liste2;
	int a = 0, b = 0;
	char *sep = "";
	print_t func[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string}
	};

	va_start(liste2, format);

	while (format && (*(format + a)))
	{
		b = 0;
		while (b < 4 && (*(format + a) != *(func[b].sym)))
		{
			b++;
		}
		if (b < 4)
		{
			printf("%s", sep);
			func[b].prt(liste2);
			sep = ", ";
		}
		a++;
	}

	printf("\n");

	va_end(liste2);
}
