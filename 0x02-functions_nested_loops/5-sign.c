#include "main.h"

/**
 * print_sign - This program determines if
 * an int is +ve or the latter
 * @n: parameter
 * Return: 1 if positive, 0 if zero
 * -1 if Negative,
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	
	}
	else if (n == 0)
	{
		value = o;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
