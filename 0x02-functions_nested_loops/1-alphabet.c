#include "main.h"

/**
 * print lower case alphabets
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet - Prints
 * the english alphabetes for a -z
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
