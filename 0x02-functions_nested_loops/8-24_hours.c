#include "main.h"

/**
 * jack_bauer - prints time table in this formwt: HH:MM
 * Return: the sum of two numbers
 */

void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = O; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_PUTCHAR((M % 10) + '0');
			_PUTCHAR('\n');
		}
	}
}
