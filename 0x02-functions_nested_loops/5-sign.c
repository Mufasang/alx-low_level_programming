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
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
