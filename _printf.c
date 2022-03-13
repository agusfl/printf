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
		{'%', print_percentage},
		{'i', print_number},
		{'d', print_number},
		{'b', print_binary},
		{'r', print_rev},
		{'R', print_rot13},
		{'\0', NULL}
		};

	va_start(list, format);

	if (format == NULL)/* validate */
		return (-1);

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
				cont2++;
				break;
				}
				cont1++;
			}
			cont2++;
		}
		else
		{
			_putchar(format[cont2]);
			cont2++;
		}
	}
	va_end(list);
	return (cont2 - 1);
}
