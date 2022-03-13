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
	int (*fun)(va_list);
} data_struct;

int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);
int _printf(const char *format, ...);
int print_percentage(va_list list);
int print_number(va_list num);
int print_binary(va_list num);

#endif
