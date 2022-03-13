#include "main.h"

/**
 * print_unsigned - print positive number
 * @num: number to print
 * Return: length
 */

int print_unsigned(va_list num)
{
	unsigned int dec, count, n, i = 0;
	int len;

	n = va_arg(num, int);

	n = i;
	dec = n;
	count = 1;
	while (dec > 9)
	{
		dec /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		len += _putchar(((i / count) % 10) + '0');
	}
	return (len);
}
