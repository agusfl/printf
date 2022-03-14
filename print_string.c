#include "main.h"

/**
 * print_string - prints a string
 * @s: list
 * Return: amount of characters in the string
 */

int print_string(va_list s)
{
	int i, j;
	char *str;
	char *str2 = "(null)";

	str = va_arg(s, char *);

	if (str == NULL)
	{
		for (j = 0; str2[j] != '\0'; j++)
		{
			_putchar(str2[j]);
		}
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

