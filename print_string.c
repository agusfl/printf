#include "main.h"

/**
 * print_string - prints a string
 * @s: list
 * Return: amount of characters in the string
 */

int print_string(va_list s)
{
	int i;
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

