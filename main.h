#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct data_format - struct
 * @symb: format to print
 * @fun: function pointer
 */

typedef struct data_format
{
	char symb;
	void (*fun)(va_list);
} data_struct;

int _putchar(char c);
int print_char(va_list c);
int _printf(const char *format, ...);

#endif
