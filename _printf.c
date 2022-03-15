#include "main.h"

/**
 * get_fun - return function
 * @format: format
 * Return: function pointer
 */

int (*get_fun(char format))(va_list)
{
	int cont1 = 0;

	data_struct identifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_number},
		{'d', print_number},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octa},
		{'x', print_hexa},
		{'X', print_HEXA},
		{'r', print_rev},
		{'R', print_rot13},
		{'\0', NULL}
		};

	while (identifier[cont1].symb != '\0')
	{
		if (format == identifier[cont1].symb)
		{
			return (identifier[cont1].fun);
		}
		cont1++;
	}
	return (NULL);
}

/**
 * _printf - print output according to a format
 * @format: format of printing
 * Return: number of characters printed(exluding null byte)
 */

int _printf(const char *format, ...)
{
	int cont2, contador = 0;
	va_list list;
	int (*fun)(va_list);

	va_start(list, format);
	if (format == NULL)/* validate */
		return (-1);
	cont2 = 0;
	while (format != NULL && format[cont2] != '\0')
	{
		if (format[cont2] == '%')
		{
			if (format[cont2 + 1] == '\0')
			{
				return (-1);
			}
			else if (format[cont2 + 1] == '%')
			{
				_putchar(format[cont2 + 1]), cont2++, contador++;
			}
			else
			{
				fun = (*get_fun(format[cont2 + 1]));
				if (fun != NULL)
				{
					contador += fun(list), cont2++;
				}
				else
					_putchar(format[cont2]), contador++;
			} cont2++;
		}
		else
			_putchar(format[cont2]), cont2++, contador++;
	}
	va_end(list);
	return (contador);
}
