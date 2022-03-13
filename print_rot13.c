#include "main.h"

/**
 * print_rot13 - print string with rot13 encoder
 * @rot13: list
 * Return: return lenght of string passed
 */

int print_rot13(va_list rot13)
{
	char *rot;
	int i = 0;

	rot = va_arg(rot13, char *);

	while (rot[i] != '\0')
	{
		if ((rot[i] >= 'a' && rot[i] <= 'z') || (rot[i] >= 'A' && rot[i] <= 'Z'))
		{
			if ((rot[i] >= 'a' && rot[i] <= 'm') || (rot[i] >= 'A' && rot[i] <= 'M'))
			{
				_putchar(rot[i] + 13);
			}
			else
			{
				_putchar(rot[i] - 13);
			}
		}
		else
		{
			_putchar(rot[i]);
		}
		i++;
	}
	return (i);
}
