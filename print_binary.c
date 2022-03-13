#include "main.h"

/**
 * print_binary - print a integer
 * @num: number to print
 * Return: length
 */

int print_binary(va_list num)
{
	unsigned int i, aux;
	char *str;
	int n = 0;
	int m;

	i = va_arg(num, int);
	m = i;
	while (i > 0)
	{
		aux++;
		i /= 2;
	}

	str = malloc(aux * sizeof(int) + 1);

	while (m > 0)
	{
		str[n] = (m % 2) + '0';
		n++;
		m /= 2;
	}
	while (n >= 0)
	{
		_putchar(str[n]);
		n--;
	}
	free(str);
return (aux);
}
