#include "main.h"

/**
 * print_char - prints a char
 * @c: char
 * Return: 1
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
