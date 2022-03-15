#include "main.h"

/**
 * print_octal - print an integer in octa
 * @num: number to print
 * Return: length
 */

int print_octal(va_list num)
{
	unsigned int i, aux, m, n = 0;
	char *str;

	i = va_arg(num, int);
	m = i;

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	while (i > 0)
	{
		i /= 8;
		aux++;
	}

	str = malloc(aux * sizeof(int) + 1);

	if (str == NULL)
	{
		return (-1);
	}

	while (m > 0)
	{
		str[n] = (m % 8) + '0';
		m /= 8;
		n++;
	}


	while (n != 0)
	{
		n--;
		_putchar(str[n]);
	}
	free(str);
return (aux);
}
