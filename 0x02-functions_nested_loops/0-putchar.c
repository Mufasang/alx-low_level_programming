#include "main.h"

/**
 * main - check Description
 *
 * Descriptioon write a program that prints putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[6] = "teslim";
	int i;

	for (i = 0; i < 6; i++)
		_putchar(c[i]);
	
	_putchar('\n');
        return (0);
}

