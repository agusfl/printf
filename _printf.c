#include "main.h"

/**
 * _printf - print output according to a format
 * @format: format of printing
 * Return: number of characters printed(exluding null byte)
 */

int _printf(const char *format, ...)
{
	int cont1, cont2;
	va_list list;

	data_struct identifier[] = {
		{'c', print_char},
		{'\0', NULL}
		};

	va_start(list, format);

	cont2 = 0;
	while (format != NULL && format[cont2] != '\0')
	{
		cont1 = 0;
		while (identifier[cont1].symb != '\0')
		{
			if (identifier[cont1].symb == format[cont2])
			{
				identifier[cont1].fun(list);
			}
			cont1++;
		}
		cont2++;
	}
	_putchar('\n');
	va_end(list);
}
