#include "main.h"

/**
 * main - check Description
 *
 * Descriptioon write a program that prints putchar
 *
 * Return: Always 0 (Success)
 */

int _putchar(void);
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}

