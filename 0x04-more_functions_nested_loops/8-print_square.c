#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line
 * @n: square size
 */

void print_square(int n)
{
	int x, y;

	if (n > 0);
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
				_putchar('#');

			if (x == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
