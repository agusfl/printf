#include "main.h"

/**
 * print_number - print a integer
 * @n: number to print
 * Return: void
 */

int print_number(va_list n)
{
	unsigned int dec, count, i;

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
		_putchar(((i / count) % 10) + '0');
}
