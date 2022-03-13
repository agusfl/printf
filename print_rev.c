#include "main.h"

/**
 * print_rev - print string in reverse
 * @rev: list
 * Return: return lenght of string
 */

int print_rev(va_list rev)
{
	char *str;
	int cont = 0;
	int i = 0;

	str = va_arg(rev, char *);

	while (str[cont] != '\0')
	{
		cont++;
	}
	for (i = (cont - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (cont);
}
