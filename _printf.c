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
		{'s', print_string},
		{'\0', NULL}
		};

	va_start(list, format);

	cont2 = 0;
	while (format != NULL && format[cont2] != '\0')
	{
		if (format[cont2] == '%')
		{
			cont1 = 0;
			while (identifier[cont1].symb != '\0')
				{	
					if (format[cont2 + 1] == identifier[cont1].symb)
					{
					identifier[cont1].fun(list);
					}
					cont1++;
				}
			cont2++;
			break;
		}
		else
		{
			_putchar(format[cont2]);
			cont2++;
		}
	}
	_putchar('\n');
	va_end(list);
	return (cont2);
}
