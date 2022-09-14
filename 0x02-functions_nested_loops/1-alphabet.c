#include "main.h"

/**
 * print lower case alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
