#include "main.h"

/**
 * print_number - print a integer
 * @num: number to print
 * Return: length
 */

int print_number(va_list num)
{
	unsigned int dec, count, i;
	int n, len;

	n = va_arg(num, int);

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
		i = n;

	dec = i;
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
