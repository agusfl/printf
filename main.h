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

/* prototypes for _printf functions */
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);
int _printf(const char *format, ...);
int print_number(va_list num);
int print_binary(va_list num);
int print_octal(va_list num);
int print_hexa_low(va_list num);
int print_hexa_UPPERCASE(va_list num);
int print_rev(va_list rev);
int print_rot13(va_list rot13);
int print_unsigned(va_list num);

/* auxiliar functions */
int _putchar(char c);

#endif
